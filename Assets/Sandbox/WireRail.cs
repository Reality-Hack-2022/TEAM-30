using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireRail : MonoBehaviour
{
    public Renderer rail;
    Color color;

    private void Awake()
    {
        color = Color.clear;
    }

    public void OnTouchStart()
    {
        color = CircuitManager.currentColor;
        rail.material.color = color;

        Debug.Log("touched!");
    }
}
