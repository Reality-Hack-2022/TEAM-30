using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkIfBelowZero : MonoBehaviour
{

    public GameObject myArduino;
    public GameObject otherArduino;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (myArduino.transform.position.y <= -0.4f) {

            //Set active of this game object = false
            myArduino.SetActive(false);
            otherArduino.SetActive(true);
            //Set active of the other game object that is already on the platform on
            //myArduino.transform.position = new Vector3(myArduino.transform.position.x, -0.2f, myArduino.transform.position.z);

        }
    }
}
