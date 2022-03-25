using SpiceSharp;
using SpiceSharp.Components;
using SpiceSharp.Entities;
using SpiceSharp.Simulations;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;

public class CircuitManager : MonoBehaviour
{
    public static double stepsPerSecond = 15;

    Circuit ckt;
    ISimulation sim;

    void Start()
    {
        this.ckt = new Circuit();
        BuildCircuit();

        this.sim.Run(ckt);
    }

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
            } else if(node is DiodeNode)
            {
                var vsn = node as DiodeNode;
                var component = new Diode(node.componentId, vsn.posNode, vsn.negNode, "1N914");
                ckt.Add(component);
            } else if(node is ResistorNode)
            {
                var rsn = node as ResistorNode;
                var component = new Resistor(node.componentId, rsn.posNode, rsn.negNode, rsn.resistance);
                ckt.Add(component);
            }
        }

        this.sim = dc;
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


    public void Simulate()
    {
        this.sim.Run(ckt);
    }
}
