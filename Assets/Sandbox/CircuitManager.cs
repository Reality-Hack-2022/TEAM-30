using Microsoft.MixedReality.Toolkit.Experimental.UI;
using SpiceSharp;
using SpiceSharp.Components;
using SpiceSharp.Entities;
using SpiceSharp.Simulations;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;

public class CircuitManager : MonoBehaviour
{
    public static CircuitManager inst;
    public static double stepsPerSecond = 15;

    public Transform bounds;

    public int rows = 8;
    public int cols = 5;

    public DockNode[] nodes;
    public DockNode[] allNodes;
    public WireRail[] railIndices;
    public DockPosition[] dockPositions;

    Circuit ckt;
    ISimulation sim;

    private void Awake()
    {
        inst = this;
        this.nodes = new DockNode[rows * cols];
        this.railIndices = new WireRail[rows * cols];
        this.dockPositions = new DockPosition[rows * cols];
    }

    private void OnDestroy() =>
        inst = null;


    public Transform debug;
    public Vector2 debugOutput;

    public bool simulate = false;

    public void ResetAll()
    {
        foreach(var resetter in FindObjectsOfType<Resettable>())
            StartCoroutine(resetter.Resetter());
        Start();
    }

    /*
    private void OnDrawGizmos()
    {
        var pos = bounds.InverseTransformPoint(debug.position);
        var row = Mathf.FloorToInt(Mathf.LerpUnclamped(0, rows, pos.x + .5f));
        var col = Mathf.FloorToInt(Mathf.LerpUnclamped(0, cols, pos.z + .5f));

        var inBounds = row >= 0 && col >= 0 && row < rows && col < cols;

        Gizmos.color = inBounds ? Color.green : Color.red;
        Gizmos.DrawWireSphere(debug.position, .01f);

        debugOutput = new Vector2(row, col);
    }
    */

    void Start()
    {
        this.ckt = new Circuit();
        this.allNodes = FindObjectsOfType<DockNode>(true);
        foreach(var dockPos in FindObjectsOfType<DockPosition>(true))
            if(InBounds(dockPos.transform.position))
                dockPositions[GetIndex(dockPos.transform.position)] = dockPos;
    }

    private void Update()
    {
        RebuildNodes();
        if(simulate)
        {
            this.BuildAndSimulate();
        }
    }

    public void RebuildNodes()
    {
        var bounds = new Bounds(this.bounds.position, this.bounds.lossyScale);
        this.nodes = new DockNode[rows * cols];

        foreach (var node in allNodes)
        {
            var indx = GetIndex(node.transform.position);
            if (node.isActiveAndEnabled && indx > 0)
                this.nodes[indx] = node;
            node.index = indx;
        }
    }

    public bool InBounds(Vector3 worldPos)
    {
        var pos = bounds.InverseTransformPoint(worldPos);
        var row = Mathf.FloorToInt(Mathf.LerpUnclamped(0, rows, pos.x + .5f));
        var col = Mathf.FloorToInt(Mathf.LerpUnclamped(0, cols, pos.z + .5f));

        return row >= 0 && col >= 0 && row < rows && col < cols;
    }

    public int GetIndex(Vector3 worldPos)
    {
        var pos = bounds.InverseTransformPoint(worldPos);
        var row = Mathf.FloorToInt(Mathf.LerpUnclamped(0, rows, pos.x + .5f));
        var col = Mathf.FloorToInt(Mathf.LerpUnclamped(0, cols, pos.z + .5f));

        if (row >= 0 && col >= 0 && row < rows && col < cols)
            return GetIndex(row, col);
        return -1;
    }

    public int GetIndex(int row, int col) =>
        row * cols + col;

    void BuildCircuit()
    {
        DCComponent[] nodes = GetComponentsInChildren<DCComponent>();
        ckt.Clear();

        ckt.Add(new DiodeModel("default"));
        ckt.Add(CreateDiodeModel("ModelLED", "IS=1 RS=3.3 N=1.8"));
        ckt.Add(CreateDiodeModel("1N914", "Is=2.52e-9 Rs=0.568 N=1.752 Cjo=4e-12 M=0.4 tt=20e-9"));

        var dc = new OP("sim");

        foreach (var node in nodes)
        {
            node.Build(dc);

            if (node is VoltageSourceNode)
            {
                var vsn = node as VoltageSourceNode;
                var component = new VoltageSource(node.componentId, vsn.posNode, vsn.negNode, vsn.dcVoltage);
                ckt.Add(component);
            }
            else if (node is DiodeNode)
            {
                var vsn = node as DiodeNode;
                var component = new Diode(node.componentId, vsn.posNode, vsn.negNode, "1N914");
                ckt.Add(component);
            }
            else if (node is ResistorNode)
            {
                var rsn = node as ResistorNode;
                var component = new Resistor(node.componentId, rsn.posNode, rsn.negNode, rsn.resistance);
                ckt.Add(component);
            }
            else if (node is DiodeNodeDynamic)
            {
                var vsn = node as DiodeNodeDynamic;
                string posNode;
                string negNode;

                if (FindNodes(vsn.posNode, vsn.negNode, out posNode, out negNode))
                {
                    var component = new Diode(node.componentId, posNode, negNode, "1N914");
                    ckt.Add(component);
                }
            }
            else if (node is ResistorNodeDynamic)
            {
                var rsn = node as ResistorNodeDynamic;
                string posNode;
                string negNode;

                if (FindNodes(rsn.posNode, rsn.negNode, out posNode, out negNode))
                {
                    var component = new Resistor(node.componentId, posNode, negNode, rsn.resistance);
                    ckt.Add(component);
                }
            }
        }

        this.sim = dc;
    }

    private bool FindNodes(DockNode pos, DockNode neg, out string posOut, out string negOut)
    {
        posOut = null;
        negOut = null;
        if (pos.index == -1 || neg.index == -1 || !pos.isActiveAndEnabled || !neg.isActiveAndEnabled)
            return false;

        var posRow = railIndices[pos.index];
        var negRow = railIndices[neg.index];
        if (!negRow || !posRow)
            return false;

        posOut = posRow.voltageSource;
        negOut = negRow.voltageSource;
        if (string.IsNullOrEmpty(posOut))
            posOut = $"rail${posRow.GetHashCode()}";
        if (string.IsNullOrEmpty(negOut))
            negOut = $"rail${negRow.GetHashCode()}";

        return true;
    }

    void ApplyParameters(Entity entity, string definition)
    {
        // Get all assignments
        definition = Regex.Replace(definition, @"\s*\=\s*", "=");
        var assignments = definition.Split(new[] { ',', ';', ' ' }, StringSplitOptions.RemoveEmptyEntries);
        foreach (var assignment in assignments)
        {
            // Get the name and value
            var parts = assignment.Split('=');
            if (parts.Length != 2)
                throw new Exception("Invalid assignment");
            var name = parts[0].ToLower();
            var value = double.Parse(parts[1], System.Globalization.CultureInfo.InvariantCulture);

            // Set the entity parameter
            entity.SetParameter(name, value);
        }
    }

    private DiodeModel CreateDiodeModel(string name, string parameters)
    {
        var dm = new DiodeModel(name);
        ApplyParameters(dm, parameters);
        return dm;
    }

    public void BuildAndSimulate()
    {
        BuildCircuit();
        this.sim.Run(ckt);
    }

    public void Simulate()
    {
        this.sim.Run(ckt);
    }
}
