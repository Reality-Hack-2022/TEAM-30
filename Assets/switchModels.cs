using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class switchModels : MonoBehaviour
{
      
    public GameObject full_Arduino;
    public GameObject mock_Arduino;
    bool pressed = false;

    void Start()
    {
        Invoke("OffLogo", 5.0f);
    }

    void OffLogo()
    {
        //do anything(delete or invisible)
        full_Arduino.SetActive(false);
        mock_Arduino.SetActive(true);
        pressed = false;
    }

    
}
