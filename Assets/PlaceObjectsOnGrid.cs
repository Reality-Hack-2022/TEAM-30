using Microsoft.MixedReality.Toolkit.UI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlaceObjectsOnGrid : MonoBehaviour
{
    public GameObject plane;

    // objects
    public GameObject workingSpaceA;
    public GameObject workingSpaceB;
    public GameObject workingSpaceC;
    public GameObject Kitchen;
    public GameObject Bathrooms;
    public GameObject Relaxation;
    public GameObject Common;
    public GameObject Keynote;
    public GameObject Core;
    public GameObject Mentors;
    public GameObject Hardware;

    // ui
    public GameObject feedbackSlider;

    public GameObject textPrefab;
    public string[] scoreBarText = new string[] {
    "Hackers\nx\nMentors",
    "Hackers\nx\nBathrooms",
    "Quiet\nx\nKitchen",
    "Hackers\nx\nWindows",
    "Commons\nx\nKeynote",
    "Commons\nx\nBathroom",
    "Hardware\nx\nMentors",
    "Kitchen\nx\nCommons"
    };



    List<GameObject> rooms = new List<GameObject>();

    List<GameObject> instantiated = new List<GameObject>();

    Vector3 position;
    float width;
    float depth;

    GameObject _wsA, _wsB, _wsC,
        _mentors, _kitchen, _relax,
        _bathroom, _common, _core, _keynote,
        _hardware;


    public float[] scores;
    public GameObject[] sliders;
    public GameObject[] scoreTexts;


    float scaleMax = 0.5f;

    float targetScaleMin = 0.2f;
    float targetScaleMax = 0f;

    public class Timestamp
    {
        public Vector3[] positions;
        public Vector3[] scale;

        public float[] scores;

        public Timestamp(GameObject[] o, float[] scores)
        {
            positions = new Vector3[o.Length];
            scale = new Vector3[o.Length];
            scores = new float[o.Length];

            positions = GetPositions(o);
            scale = GetScale(o);

            this.scores = scores;
        }


        Vector3[] GetPositions(GameObject[] o)
        {
            var pos = new Vector3[o.Length];

            for (int i = 0; i < o.Length; i++)
            {
                pos[i] = o[i].transform.position;
            }

            return pos;
        }


        Vector3[] GetScale(GameObject[] o)
        {
            var sc = new Vector3[o.Length];

            for (int i = 0; i < o.Length; i++)
            {
                sc[i] = o[i].transform.localScale;
            }

            return sc;
        }
    }

    public class getXYZ : MonoBehaviour
    {

        public GameObject myChildCube;
        public Vector3 goPos;
        public GameObject boilerEmpty;
        public GameObject myNewEmpty;
        // Start is called before the first frame update
        void Awake()
        {
            myNewEmpty = Instantiate(boilerEmpty);
        }

        // Update is called once per frame
        void Update()
        {
            goPos = myChildCube.transform.position;
            myNewEmpty.transform.position = goPos;
            myNewEmpty.transform.localScale = myChildCube.transform.localScale;

        }
    }

    public List<Timestamp> timeLine;
    GameObject[] objects;
    GameObject[] objectPositions;
    GameObject[] objectPositions2;

    bool positionChanged = true;
    public bool DisplayHistory = false;
    public float historyStep = 0f;
    bool runningTimestamp = false;
    bool isShowingBarGraph = true;

    // Start is called before the first frame update
    void Start()
    {
        scores = new float[8];
        timeLine = new List<Timestamp>();
        objects = new GameObject[11];
        objectPositions = new GameObject[11];
        objectPositions2 = new GameObject[11];

        // general
        position = this.transform.position;
        width = this.transform.localScale.x;
        depth = this.transform.localScale.z;

        // rooms
        _wsA = UnityEngine.Object.Instantiate(workingSpaceA);
        _wsB = UnityEngine.Object.Instantiate(workingSpaceB);
        _wsC = UnityEngine.Object.Instantiate(workingSpaceC);

        _kitchen = UnityEngine.Object.Instantiate(Kitchen);
        _bathroom = UnityEngine.Object.Instantiate(Bathrooms);
        _relax = UnityEngine.Object.Instantiate(Relaxation);
        _mentors = UnityEngine.Object.Instantiate(Mentors);
        _common = UnityEngine.Object.Instantiate(Common);
        _keynote = UnityEngine.Object.Instantiate(Keynote);
        _core = UnityEngine.Object.Instantiate(Core);
        _hardware = UnityEngine.Object.Instantiate(Hardware);

        // ui
        //GetScores();
        //sliders = DisplaySliders(scores, feedbackSlider);
        //scoreTexts = DisplayScoreText(scoreBarText, textPrefab);

        //text


        AddObjectsToArray();
        AddObjectositionsToArray();
        AddObjectositionsToArray2();

        var stamp = new Timestamp(objectPositions, scores);
        timeLine.Add(stamp);
        Debug.Log("timestamp added");



    }

    // Update is called once per frame
    void Update()
    {



        //historyStep = 1f;
        if (runningTimestamp)
        {

            for (int i = 0; i < objects.Length; i++)
            {
                objectPositions[i].transform.position = timeLine[timeLine.Count - 1].positions[i];
                objectPositions[i].transform.localScale = timeLine[timeLine.Count - 1].scale[i];
            }

            runningTimestamp = false;
        }

        //GetScores();
        //UpdateSliders(scores, .8f);

        positionChanged = CheckPositionChanged();

        if (positionChanged)
        {
            var stamp = new Timestamp(objectPositions, scores);

            timeLine.Add(stamp);
            Debug.Log("timestamp added");
        }
    }







    bool CheckPositionChanged()
    {
        var lastStamp = timeLine[timeLine.Count - 1];

        for (int i = 0; i < objects.Length; i++)
        {
            if (objectPositions[i].transform.position.x != lastStamp.positions[i].x
                || objectPositions[i].transform.position.y != lastStamp.positions[i].y
                || objectPositions[i].transform.position.z != lastStamp.positions[i].z
                || objectPositions[i].transform.localScale.x != lastStamp.scale[i].x
                || objectPositions[i].transform.localScale.y != lastStamp.scale[i].y
                || objectPositions[i].transform.localScale.z != lastStamp.scale[i].z
                )
            {
                return true;
            }
        }

        return false;
    }


    GameObject[] DisplaySliders(float[] scores, GameObject slider)
    {
        GameObject[] sliders = new GameObject[scores.Length];

        for (int i = 0; i < scores.Length; i++)
        {

            sliders[i] = UnityEngine.Object.Instantiate(slider, new Vector3((0.05f * i) - 0.175f, 1.25f, 1.17f), new Quaternion());
        }

        return sliders;
    }

    GameObject[] DisplayScoreText(string[] barText, GameObject textPrefab)
    {
        GameObject[] texts = new GameObject[barText.Length];

        for (int i = 0; i < texts.Length; i++)
        {
            texts[i] = UnityEngine.Object.Instantiate(textPrefab, new Vector3((0.05f * i) - 0.175f, 0.02f, 1.17f), new Quaternion());
            GameObject textObject = texts[i].transform.GetChild(1).gameObject;
            textObject.GetComponent<TextMeshProUGUI>().text = barText[i];
            //grandChild = this.gameObject.transform.GetChild(0).GetChild(0).gameObject;
        }

        return texts;
    }

    void AddObjectsToArray()
    {
        objects[0] = _wsA;
        objects[1] = _wsB;
        objects[2] = _wsC;
        objects[3] = _kitchen;
        objects[4] = _bathroom;
        objects[5] = _relax;
        objects[6] = _mentors;
        objects[7] = _common;
        objects[8] = _keynote;
        objects[9] = _core;
        objects[10] = _hardware;
    }

    void AddObjectositionsToArray()
    {
        objectPositions[0] = _wsA.GetComponent<getXYZ>().myChildCube;
        objectPositions[1] = _wsB.GetComponent<getXYZ>().myChildCube;
        objectPositions[2] = _wsC.GetComponent<getXYZ>().myChildCube;
        objectPositions[3] = _kitchen.GetComponent<getXYZ>().myChildCube;
        objectPositions[4] = _bathroom.GetComponent<getXYZ>().myChildCube;
        objectPositions[5] = _relax.GetComponent<getXYZ>().myChildCube;
        objectPositions[6] = _mentors.GetComponent<getXYZ>().myChildCube;
        objectPositions[7] = _common.GetComponent<getXYZ>().myChildCube;
        objectPositions[8] = _keynote.GetComponent<getXYZ>().myChildCube;
        objectPositions[9] = _core.GetComponent<getXYZ>().myChildCube;
        objectPositions[10] = _hardware.GetComponent<getXYZ>().myChildCube;
    }

    void AddObjectositionsToArray2()
    {
        objectPositions[0] = _wsA.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[1] = _wsB.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[2] = _wsC.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[3] = _kitchen.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[4] = _bathroom.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[5] = _relax.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[6] = _mentors.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[7] = _common.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[8] = _keynote.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[9] = _core.GetComponent<getXYZ>().myNewEmpty;
        objectPositions[10] = _hardware.GetComponent<getXYZ>().myNewEmpty;
    }
}

