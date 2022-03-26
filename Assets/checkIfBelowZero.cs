using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkIfBelowZero : MonoBehaviour
{
    public GameObject myArduino;
    public GameObject[] hideThese;
    public GameObject[] showThese;
    public GameObject pirateVideo;

    public Texture m_PlaceOnTable;

    public Texture m_MainTexture;
    Renderer m_Renderer;
    public GameObject scroll;

    public bool changedScene = false;


    public bool startSceneTwo = false;
    public bool completedSceneTwo = false;
    // Start is called before the first frame update

    public Texture m_LEDInfo;
    public Texture m_PlaceLEDOnTable;

    //public GameObject[] hideThese;
    public GameObject[] showTheseLED;

    public GameObject DillonsLED;

    public bool readyForSceneThree = false;

    public Texture m_zeroPower;
    public GameObject twoNodes;
    //video 11
    //zero power scroll

    public bool sceneThreeDone = false;

    public bool weHaveStartedWiringLED1 = false;
    public bool highVoltage = false;

    public Texture m_highPower;
    public Texture m_rightPower;


    void Start()
    {
        m_Renderer = scroll.GetComponent<Renderer>();
        Invoke("ChangeScroll", 11.0f);
        
        //m_PlaceOnTable

    }

    void ChangeScroll()
    {
        m_Renderer.material.SetTexture("_MainTex", m_PlaceOnTable);
    }

    // Update is called once per frame
    void Update()
    {
        if (myArduino.transform.position.y <= -0.2f && changedScene == false) {
            changedScene = true;
            startSceneTwo = true;

            for (int i = 0; i < hideThese.Length; i++)
            {
                hideThese[i].SetActive(false);
            }

            for (int i = 0; i < hideThese.Length; i++)
            {
                showThese[i].SetActive(true);
            }

            m_Renderer.material.SetTexture("_MainTex", m_MainTexture);

            if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
            {
                var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
                vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 08");
            //    Destroy(GetComponent(vidPlayer.GetType()));
            }
            //var videoPlayer = pirateVideo.AddComponent<UnityEngine.Video.VideoPlayer>();
            //videoPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 08");


            //Set active of this game object = false

            //Set active of the other game object that is already on the platform on
            //myArduino.transform.position = new Vector3(myArduino.transform.position.x, -0.2f, myArduino.transform.position.z);

        }
        if (startSceneTwo) {
            startSceneTwo = false;
            Debug.Log("started scene two");
            Invoke("ChangeScrollLED", 9.0f);

        }

        if (completedSceneTwo && !readyForSceneThree)
        {
            if (showTheseLED[1].transform.position.y <= -0.2f)
            {
                readyForSceneThree = true;
                for (int i = 0; i < showTheseLED.Length; i++)
                {
                    showTheseLED[i].SetActive(false);
                }
                DillonsLED.SetActive(true);
            }

            
        }

        if (readyForSceneThree && !sceneThreeDone) {
            sceneThreeDone = true;
            Invoke("GoForSceneThree", 1.0f);
            //place LED om Circuit
            //video 11
            //zero power scroll
        }
        
        //Debug.Log(DiodeNodeDynamic.amperage);

        if (Mathf.Abs(0.0316f + DillonsLED.transform.position.x ) < 0.01f && Mathf.Abs(0.642f - DillonsLED.transform.position.z) < 0.01f && !weHaveStartedWiringLED1 && sceneThreeDone) {
            weHaveStartedWiringLED1 = true;
            twoNodes.SetActive(false);
            m_Renderer.material.SetTexture("_MainTex", m_zeroPower);
            //change pirate video
            if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
            {
                var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
                vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 15");
                //    Destroy(GetComponent(vidPlayer.GetType()));
            }
            //
        }

        if (DiodeNodeDynamic.amperage > 7 && DiodeNodeDynamic.amperage < 8 && !highVoltage)
        {
            highVoltage = true;
                m_Renderer.material.SetTexture("_MainTex", m_highPower);
            //Debug.Log("hi " + DiodeNodeDynamic.amperage);
            if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
            {
                var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
                vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 14");
                //    Destroy(GetComponent(vidPlayer.GetType()));
            }
            Invoke("AddResistor", 4.0f);
            Invoke("AddResistor2", 8.0f);
        }

        if (DiodeNodeDynamic.amperage > 0.001f && DiodeNodeDynamic.amperage < 0.1f) {
            //we have a working current
            m_Renderer.material.SetTexture("_MainTex", m_rightPower);
        }


    }

    void AddResistor() {
        if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
        {
            var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
            vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 16");
            //    Destroy(GetComponent(vidPlayer.GetType()));
        }
    }

    void AddResistor2()
    {
        if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
        {
            var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
            vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 19");
            //    Destroy(GetComponent(vidPlayer.GetType()));
        }
    }

    void ChangeScrollLED()
    {
        m_Renderer.material.SetTexture("_MainTex", m_PlaceLEDOnTable);
        Debug.Log("really started scene two");
        completedSceneTwo = true;
        for (int i = 0; i < showTheseLED.Length; i++)
        {
            showTheseLED[i].SetActive(true);
        }
    }

    void GoForSceneThree() {
        if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
        {
            var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
            vidPlayer.clip = (UnityEngine.Video.VideoClip)Resources.Load("pirateVideo/Nested Sequence 11");
            //    Destroy(GetComponent(vidPlayer.GetType()));
        }
        m_Renderer.material.SetTexture("_MainTex", m_zeroPower);
        //light up the two nodes
        twoNodes.SetActive(true);
    }
}
