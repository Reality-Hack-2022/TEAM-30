using Microsoft.MixedReality.Toolkit.Experimental.Physics;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Wireable : MonoBehaviour
{
    public Color color;

    public Transform bounds;

    ParabolaConstrainedLineDataProvider parabola;
    ElasticsManager elastics;
    Transform[] snaps;

    void Start()
    {
        this.snaps = GameObject.FindGameObjectsWithTag("SnapPoint").Select(go => go.transform).ToArray();
        this.elastics = GetComponent<ElasticsManager>();
        elastics.EnableElasticsUpdate = false;

        parabola = GetComponentInChildren<ParabolaConstrainedLineDataProvider>();
    }

    void Update()
    {
        parabola.LastPoint = transform.parent.position;
        // parabola.Height = Mathf.Lerp(transform.localPosition.magnitude * 20f, 0f, 3f);
    }

    public void StartManipulating()
    {
        Debug.Log("started");

        CircuitManager.draggingNode = this;
        CircuitManager.currentColor = color;

        elastics.TranslationElasticExtent = new VolumeElasticExtent
        {
            UseBounds = false,
            SnapPoints = snaps.Select(go => go.position).ToArray(),
            RepeatSnapPoints = false,
            SnapRadius = 0.1f
        };

        elastics.EnableElasticsUpdate = true;
    }

    public void StopManipulating()
    {
        Debug.Log("stopped");

        CircuitManager.draggingNode = null;

        elastics.TranslationElasticExtent = new VolumeElasticExtent
        {
            UseBounds = false,
            SnapPoints = new Vector3[] { transform.parent.position },
            RepeatSnapPoints = false,
            SnapRadius = 2f
        };
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
