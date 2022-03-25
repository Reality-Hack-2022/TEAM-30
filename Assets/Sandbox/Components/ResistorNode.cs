using SpiceSharp.Simulations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResistorNode : DCComponent
{
    public string posNode;
    public string negNode;
    public double resistance;

    public override void Build(OP dc)
    {

    }
}
