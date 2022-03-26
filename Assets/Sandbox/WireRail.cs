using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class WireRail : MonoBehaviour
{
    public Renderer rail;
    public DockPosition[] docks;
    public int[] dockIndices;

    public bool alwaysVisible = true;
    public string voltageSource = null;

    public Color color
    {
        set
        {
            rail.material.color = value;
        }
    }

    private void Start()
    {
        var cm = CircuitManager.inst;
        var bounds = GetComponent<Collider>().bounds;

        color = Color.clear;
        docks = GameObject.FindObjectsOfType<DockPosition>()
            .Where(dp => bounds.Contains(dp.transform.position))
            .ToArray();

        dockIndices = docks.Where(dp => cm.InBounds(dp.transform.position))
                        .Select(dp => cm.GetIndex(dp.transform.position))
                        .ToArray();

        foreach (var i in dockIndices)
            cm.railIndices[i] = this;
    }

    private void Update()
    {
        var color = Color.clear;
        var visible = alwaysVisible;
        var cm = CircuitManager.inst;

        voltageSource = null;

        if (!visible)
            foreach(var i in dockIndices)
            {
                if(cm.nodes[i])
                {
                    visible = true;
                    break;
                }
            }

        foreach (var dock in docks)
        {
            if (dock.DockedObject)
            {
                var wire = dock.DockedObject.GetComponent<Wireable>();
                if (wire && wire.parabola.enabled)
                {
                    color = wire.color;
                    voltageSource = wire.wireSource;
                    break;
                }
            }
        }

        this.color = color;
        rail.enabled = visible || color.a > 0.5f;
    }
}
