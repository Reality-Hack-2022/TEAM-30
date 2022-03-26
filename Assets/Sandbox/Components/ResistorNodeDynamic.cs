using SpiceSharp.Simulations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResistorNodeDynamic : DCComponent
{
    public DockNode posNode;
    public DockNode negNode;
    public double resistance;

    public override void Build(OP dc)
    {

    }
}
