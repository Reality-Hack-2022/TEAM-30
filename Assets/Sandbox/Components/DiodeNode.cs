using SpiceSharp;
using SpiceSharp.Components;
using SpiceSharp.Simulations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiodeNode : DCComponent
{
    public string posNode;
    public string negNode;

    public override void Build(OP dc)
    {
        var inputExport = new RealVoltageExport(dc, posNode);
        var outputExport = new RealVoltageExport(dc, negNode);
        var currentExport = new RealPropertyExport(dc, componentId, "i");

        dc.ExportSimulationData += (sender, exportDataEventArgs) => {
            Debug.Log($"{componentId}: {inputExport.Value}v - {outputExport.Value}v -> {currentExport.Value}a");
        };
    }
}
