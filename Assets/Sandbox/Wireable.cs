using Microsoft.MixedReality.Toolkit.Experimental.Physics;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Wireable : MonoBehaviour
{
    public Color color;
    public Transform bounds;

    public string wireSource;

    [HideInInspector]
    public ParabolaConstrainedLineDataProvider parabola;
    ElasticsManager elastics;
    Dockable docker;

    void Start()
    {
        this.docker = GetComponent<Dockable>();
        this.elastics = GetComponent<ElasticsManager>();
        elastics.enabled = false;

        parabola = GetComponentInChildren<ParabolaConstrainedLineDataProvider>();
        GetComponentInChildren<MixedRealityLineRenderer>().LineColor = new Gradient
        {
            colorKeys = new GradientColorKey[]
            {
                new GradientColorKey(color, 0f),
                new GradientColorKey(color, 1f),
            },
            alphaKeys = new GradientAlphaKey[]
            {
                new GradientAlphaKey(1f, 0f),
                new GradientAlphaKey(1f, 1f),
            }
        };
    }

    void Update()
    {
        parabola.LastPoint = transform.parent.position;
        // parabola.Height = Mathf.Lerp(transform.localPosition.magnitude * 20f, 0f, 3f);
    }

    public void StartManipulating()
    {
        parabola.enabled = true;
        elastics.enabled = false;
    }

    public void StopManipulating()
    {
        var dn = GetComponent<DockNode>();
        if (dn)
        {
            if(dn.CanDrop)
            {
                dn.Drop();
                CircuitManager.inst.railIndices[dn.index].color = color;
                return;
            }
        } else if (docker.CanDock)
        {
            parabola.enabled = true;

            var closestDock = GetClosestPosition();
            if(closestDock)
            {
                var rail = GameObject.FindObjectsOfType<WireRail>().FirstOrDefault(r => r.docks.Contains(closestDock));
                if(rail)
                {
                    rail.color = color;
                    return;
                }
            }
        }

        ResetToHome();
    }

    public void ResetToHome()
    {
        parabola.enabled = false;
        elastics.enabled = true;

        elastics.TranslationElasticExtent = new VolumeElasticExtent
        {
            UseBounds = false,
            SnapPoints = new Vector3[] { transform.parent.position },
            RepeatSnapPoints = false,
            SnapRadius = 2f
        };
    }

    private DockPosition GetClosestPosition()
    {
        var bounds = gameObject.GetComponent<Collider>().bounds;
        var minDistance = float.MaxValue;
        DockPosition closestPosition = null;
        var docks = FindObjectsOfType<DockPosition>();
        foreach (var position in docks)
        {
            var distance = (position.gameObject.GetComponent<Collider>().bounds.center - bounds.center).sqrMagnitude;
            if (closestPosition == null || distance < minDistance)
            {
                closestPosition = position;
                minDistance = distance;
            }
        }

        return closestPosition;
    }

    /*
    elastics.TranslationElasticExtent = new VolumeElasticExtent
    {
        StretchBounds = new Bounds(bounds.position, bounds.localScale),
        UseBounds = false,
        SnapPoints = new Vector3[] { new Vector3(.0625f, 0f, .2f) },
        RepeatSnapPoints = true,
        SnapRadius = 0.05f
    };
    */
}
