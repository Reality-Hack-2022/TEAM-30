using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class switchModels : MonoBehaviour
{
      
    public GameObject full_Arduino;
    public GameObject mock_Arduino;
    public float dead_logo = 5.5f;
    bool pressed = false;

    void OffLogo()
    {
        //do anything(delete or invisible)
        full_Arduino.SetActive(false);
        mock_Arduino.SetActive(true);
        pressed = false;
    }

    //use Invoke rather than InvokeRepeating
    void Update()
    {
        if (!pressed)
        {
            pressed = true;
            Invoke("OffLogo", dead_logo);
        }
        else
        {
            Debug.Log("Button already pressed");
        }
    }
}
