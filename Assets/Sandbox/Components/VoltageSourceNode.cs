using SpiceSharp.Simulations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VoltageSourceNode : DCComponent
{
    public string posNode;
    public string negNode;
    public double dcVoltage;

    public override void Build(OP dc)
    {

    }
}