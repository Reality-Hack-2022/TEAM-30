using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Blink : MonoBehaviour
{

    bool LED_STATE = false;
    bool LED_WAIT = true;
    public GameObject LED_on;
    public GameObject LED_off;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    void LED_ON() {
        LED_on.SetActive(true);
        LED_off.SetActive(false);
        LED_STATE = false;
        LED_WAIT = true;
    }
    void LED_OFF()
    {
        LED_on.SetActive(false);
        LED_off.SetActive(true);
        LED_STATE = true;
        LED_WAIT = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (LED_WAIT && LED_STATE == true) {
            LED_WAIT = false;
            Invoke("LED_ON", 2.0f);
            
        }else if (LED_WAIT && LED_STATE == false)
        {
            LED_WAIT = false;
            Invoke("LED_OFF", 2.0f);
            
        }




    }
}
