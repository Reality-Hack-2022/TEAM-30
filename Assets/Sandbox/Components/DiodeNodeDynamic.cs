using SpiceSharp;
using SpiceSharp.Components;
using SpiceSharp.Simulations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiodeNodeDynamic : DCComponent
{
    public DockNode posNode;
    public DockNode negNode;

    public Renderer bulb;
    public Material matOn;
    public Material matOff;

    public static float amperage = 0.1f;

    public override void Build(OP dc)
    {
        // var inputExport = new RealVoltageExport(dc, posNode);
        // var outputExport = new RealVoltageExport(dc, negNode);
        var currentExport = new RealPropertyExport(dc, componentId, "i");

        dc.ExportSimulationData += (sender, exportDataEventArgs) => {
            // Debug.Log($"{componentId}: {inputExport.Value}v - {outputExport.Value}v -> {currentExport.Value}a");
            amperage = (float)currentExport.Value;
            Debug.Log($"{currentExport.Value}a");
            bulb.material = currentExport.Value > 0.001f && currentExport.Value < 0.1f ? matOn : matOff;
        };
    }
}
