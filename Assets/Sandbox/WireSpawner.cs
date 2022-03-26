using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WireSpawner : MonoBehaviour
{
    GameObject lastPrefab;
    public GameObject prefab;

    private void Start()
    {
        lastPrefab = prefab;
        prefab = Instantiate(prefab);
        prefab.SetActive(false);
    }

    public void SpawnPrefab()
    {
        int stack = 0;
        foreach(Transform child in transform)
        {
            if (child.localPosition.sqrMagnitude < .01f)
                stack++;
            if(stack > 3)
                return;
        }

        lastPrefab = Instantiate(this.prefab, transform);
        lastPrefab.SetActive(true);
    }
}
