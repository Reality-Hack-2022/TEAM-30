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
    public Material pirateScroll;
    public Texture pirateScrollImage;
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
        }

        for (int i = 0; i < hideThese.Length; i++)
        {
            showThese[i].SetActive(true);
        }
        //AudioClip.PlayOneShot(pirateVoice, 0.9f);
        if (pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>() != null)
        { 
            var vidPlayer = pirateVideo.GetComponent<UnityEngine.Video.VideoPlayer>();
            Destroy(GetComponent(vidPlayer.GetType()));
        }
        pirateVideo.AddComponent<UnityEngine.Video.VideoPlayer>();

        //pirateScroll.SetTexture(pirateScrollImage);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
