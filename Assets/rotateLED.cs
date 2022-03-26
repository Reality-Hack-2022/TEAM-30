using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateLED : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public float degreesPerSecond = 7.0f;
    void Update()
    {
        transform.Rotate(0,degreesPerSecond * Time.deltaTime, 0);
    }
}
