using SpiceSharp.Simulations;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class DCComponent : MonoBehaviour
{
    public string componentId;

    public abstract void Build(OP dc);
}
