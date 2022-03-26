using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scene1 : MonoBehaviour
{
    //array of elements to hide
    public GameObject[] hideThese;
    //array of elements to hide
    public GameObject[] showThese;

    //audio to start
    public AudioClip pirateVoice;
    //video to start
    public GameObject pirateVideo;
    //scroll image
    public Texture pirateScroll;
    //length of audio
    public float audioLength;
    //isAudioFinished
    public bool isAudioFinished;



    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < hideThese.Length; i++)
        {
            hideThese[i].SetActive(false);
            //Debug.Log(go.name);
        }

        for (int i = 0; i < hideThese.Length; i++)
        {
            showThese[i].SetActive(true);
            //Debug.Log(go.name);
        }
        //AudioClip.PlayOneShot(pirateVoice, 0.9f);
        if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
        { //errors here
            var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();

            Destroy(GetComponent(vidPlayer.GetType()));
        }
        pirateVideo.AddComponent<UnityEngine.Video.VideoPlayer>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
