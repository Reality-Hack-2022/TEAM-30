using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateModel : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public float degreesPerSecond = 2.0f;
    void Update()
    {
        transform.Rotate(degreesPerSecond * Time.deltaTime, 0, 0);
    }
}
