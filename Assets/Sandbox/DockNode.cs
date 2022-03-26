using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DockNode : MonoBehaviour
{
    private void Start()
    {
        if (CircuitManager.inst.allNodes.Contains(this))
            return;
        var nodes = CircuitManager.inst.allNodes.ToList();
        nodes.Add(this);
        CircuitManager.inst.allNodes = nodes.ToArray();
    }

    public int index = -1;

    public bool CanDrop
    {
        get { return index >= 0; }
    }

    public void Drop()
    {
        if (index == -1) return;
        var docker = GetComponentInParent<Dockable>();
        if (docker.CanDock)
        {
            var node = CircuitManager.inst.dockPositions[index];
            if (node != null) docker.Dock(node);
        }
        StartCoroutine(RefreshCircuit());
    }

    IEnumerator RefreshCircuit()
    {
        CircuitManager.inst.RebuildNodes();
        try
        {
            CircuitManager.inst.BuildAndSimulate();
        } catch(System.Exception _) { Debug.LogException(_); }
        var docker = GetComponentInParent<Dockable>();
        yield return new WaitUntil(() => docker.CanUndock);
        for (int i = 0; i < 4; i++)
        {
            CircuitManager.inst.RebuildNodes();
            try
            {
                CircuitManager.inst.BuildAndSimulate();
            }
            catch (System.Exception _) { Debug.LogException(_); }
            yield return new WaitForSeconds(0.1f);
        }
    }
}
