using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Utils;
using Mapbox.Unity.Map;
using Mapbox.Unity.MeshGeneration.Factories;
using Mapbox.Unity.Utilities;
using System;
using System.IO;
using UnityEngine.UI;
using TMPro;

public class SpawnManager : MonoBehaviour
{
    #region Variables

    [SerializeField]
    AbstractMap _map;

    List<string[]> waDataSet, trDataSet, roDataset;
    Vector2d[] waLocations, roLocations;
    [SerializeField]
    GameObject cube, canvasObject, eventObject, sun, allContainerPrefab, cubeContainerPrefab, cylinderContainerPrefab, locationPrefab, cylinderPrefab;
    GameObject reader, myCanvas, mySun, allContainer, cubeContainer, cylinderContainer, myLocation;
    AbstractMap myMap;
    bool showWalkability = false, showTraffic = false;
    private float cubeScaleMultiplier = 3f;

    //UI Elements
    Button btnWalkability, btnGPS, btnTraffic,btnFeedback;
    Slider sldRotate, sldScale;
    Text txtAcc;
    InputField inHR, inMin;
    CanvasGroup feedbackForm;
    [SerializeField]
    Vector3 scale = new Vector3(0.001f, 0.001f, 0.001f);
    public Vector2d startLocation = new Vector2d(62.46797962783868, 6.302491883522061);
    List<GameObject> cylinderList, walkabilityList;
    //Touch
    float tempDist, maxScale = 1000f, minScale = 0.0001f, scaleRate = 0.02f;
    //Traffic
    private int ski = 72, koi = 424, bgi = 538, bvi = 898;
    private float min = 0f, max = 900f, minHeight = 0, maxHeight = 20;
    private float passedTime = 0f;
    DateTime dateTime;
    #endregion

    void Start()
    {
        dateTime = DateTime.Now;
        passedTime = dateTime.Second;

        cylinderList = new List<GameObject>();
        walkabilityList = new List<GameObject>();
        allContainer = Instantiate(allContainerPrefab, this.transform.position, Quaternion.identity);
        cubeContainer = Instantiate(cubeContainerPrefab, this.transform.position, Quaternion.identity);
        cubeContainer.transform.parent = allContainer.transform;
        cylinderContainer = Instantiate(cylinderContainerPrefab, this.transform.position, Quaternion.identity);
        cylinderContainer.transform.parent = allContainer.transform;
        //Instantiating the map

        myMap = Instantiate(_map);
        // myMap.Initialize(startLocation,15);
        //myMap.SetCenterLatitudeLongitude(startLocation);
        //Debug.Log(myMap.CenterLatitudeLongitude);
        //

        myMap.transform.parent = allContainer.transform;
        //Instantiating the objects
        mySun = Instantiate(sun, new Vector3(0, 10, 0), Quaternion.AngleAxis(70f, new Vector3(1, 0, 0)));
        mySun.transform.parent = allContainer.transform;
        myCanvas = Instantiate(canvasObject);
        Instantiate(eventObject);
        //Getting the ui controls
        Button[] buttons = myCanvas.GetComponentsInChildren<Button>();
        Slider[] sliders = myCanvas.GetComponentsInChildren<Slider>();
        Text[] texts = myCanvas.GetComponentsInChildren<Text>();
        InputField[] inputs = myCanvas.GetComponentsInChildren<InputField>();
        CanvasGroup[] canvasGroups = myCanvas.GetComponentsInChildren<CanvasGroup>();
        txtAcc = texts[2];
        sldRotate = sliders[0];
        sldScale = sliders[1];
        btnWalkability = buttons[0];
        btnGPS = buttons[1];
        btnTraffic = buttons[2];
        btnFeedback = buttons[3];
        feedbackForm = canvasGroups[0];
        feedbackForm.alpha = 0;
        feedbackForm.interactable = false;
        feedbackForm.blocksRaycasts = false;
        inHR = inputs[0];
        inMin = inputs[1];
        UpdateTimeDate(dateTime);

        btnWalkability.onClick.AddListener(delegate { AddWalkabilityPoints(); });
        btnGPS.onClick.AddListener(delegate { RunGPS(); });
        btnTraffic.onClick.AddListener(delegate { AddTrafficPoints(); });
        btnFeedback.onClick.AddListener(delegate { ShowFeedbackForm(); });
        sldRotate.onValueChanged.AddListener(delegate { RotateMap(); });
        sldScale.onValueChanged.AddListener(delegate { ScaleMap(); });
        inHR.onEndEdit.AddListener(delegate { UpdateTraffic(inHR.text); });
        //Redading and preparing the data
        waDataSet = new List<string[]>();
        trDataSet = new List<string[]>();
        roDataset = new List<string[]>();
        ReadCSVFiles();
        waLocations = new Vector2d[waDataSet.Count];
        roLocations = new Vector2d[roDataset.Count];
        waDataSet.RemoveAt(0);
        trDataSet.RemoveAt(0);
    }

    void Update()
    {
        // passedTime += (Time.deltaTime);
        // if (passedTime > 60)
        // {
        //     dateTime = dateTime.AddSeconds(passedTime);
        //     UpdateTimeDate(dateTime);
        // }

        if (Input.touchCount == 2)
        {
            float touchDist = Vector3.Distance(Input.GetTouch(0).position, Input.GetTouch(1).position);
            if (tempDist >= touchDist)
            {
                // if(allContainer.transform.localScale.x < minScale)
                //     return;
                allContainer.transform.localScale -= new Vector3(1, 1, 1) * scaleRate * Time.deltaTime;
            }
            else
            {
                // if(allContainer.transform.localScale.x > maxScale)
                //     return;
                allContainer.transform.localScale += new Vector3(1, 1, 1) * scaleRate * Time.deltaTime;
            }
            tempDist = touchDist;
        }
    }
    public void AddWalkabilityPoints()
    {
        if (walkabilityList.Count == 0)
        {

            for (int i = 0; i < waDataSet.Count; i++)
            {
                double lat = double.Parse(waDataSet[i][0]);
                double lon = double.Parse(waDataSet[i][1]);
                waLocations[i] = new Vector2d(lat, lon);
                var instance = Instantiate(cube);
                instance.transform.localPosition = myMap.GeoToWorldPosition(waLocations[i], true);
                instance.GetComponent<Walkability>().SetScore(float.Parse(waDataSet[i][2]));
                instance.transform.localScale = allContainer.transform.localScale * 3;
                instance.transform.parent = cubeContainer.transform;
                walkabilityList.Add(instance);
            }
            showWalkability = true;
        }
        if (showWalkability)
        {
            foreach (var wa in walkabilityList)
            {
                wa.SetActive(true);

            }
            showWalkability = false;
        }
        else
        {
            foreach (var wa in walkabilityList)
            {
                wa.SetActive(false);

            }
            walkabilityList.Clear();
            showWalkability = true;
        }

    }
    public void AddTrafficPoints()
    {
        cylinderList.Clear();
        for (int i = 0; i < roDataset.Count; i++)
        {
            double lat = double.Parse(roDataset[i][1]);
            double lon = double.Parse(roDataset[i][0]);
            roLocations[i] = new Vector2d(lat, lon);
            GameObject insCyl = Instantiate(cylinderPrefab);
            insCyl.transform.localPosition = myMap.GeoToWorldPosition(roLocations[i], true);
            // instance.GetComponent<Walkability>().SetScore(float.Parse(trDataSet[i][2]));
            insCyl.transform.localScale = allContainer.transform.localScale * 3;
            insCyl.transform.parent = cylinderContainer.transform;
            cylinderList.Add(insCyl);

        }
        UpdateTraffic(inHR.text);

    }
    public void UpdateTraffic(string hr)
    {
        int ind;
        if (int.TryParse(hr, out ind))
        {

            if (0 <= ind && ind <= 24)
            {
                dateTime = new DateTime(DateTime.Now.Year, DateTime.Now.Month, DateTime.Now.Day, int.Parse(hr), int.Parse(inMin.text), 0);
            }
            else
            {

                dateTime = DateTime.Now;
            }
            UpdateTimeDate(dateTime);

            float score = 0, prevScore = 0;
            float step1, step2, step3;
            float ko, sk, bg, bv;
            sk = float.Parse(trDataSet[ind][1]);
            ko = float.Parse(trDataSet[ind][2]);
            bg = float.Parse(trDataSet[ind][3]);
            bv = float.Parse(trDataSet[ind][4]);
            step1 = (ko - sk) / (koi - ski);
            step2 = (bg - ko) / (bgi - koi);
            step3 = (bv - bg) / (bgi - bvi);
            cylinderList[ski].GetComponent<TrafficPoint>().SetScore(sk / max);
            cylinderList[koi].GetComponent<TrafficPoint>().SetScore(ko / max);
            cylinderList[bgi].GetComponent<TrafficPoint>().SetScore(bg / max);
            cylinderList[bvi].GetComponent<TrafficPoint>().SetScore(bv / max);
            Debug.Log(prevScore);
            for (int i = 0; i < cylinderList.Count; i++)
            {
                if (i > ski && i < koi)
                {
                    score = prevScore + (step1 / max);
                }
                else if (i > koi && i < bgi)
                {
                    score = prevScore + (step2 / max);
                }
                else if (i > bgi && i < bvi)
                {
                    score = prevScore + (step3 / max);
                }
                else if (i == ski)
                {
                    score = sk / max;
                }
                else if (i == ko)
                {
                    score = ko / max;
                }
                else if (i == bg)
                {
                    score = bg / max;
                }
                else if (i == bv)
                {
                    score = bv / max;
                }
                if (score > 1)
                {
                    score = 1;
                }
                cylinderList[i].GetComponent<TrafficPoint>().SetScore(score);
                prevScore = score;
            }

        }
    }
    public void ShowFeedbackForm(){
        feedbackForm.alpha = 1;
        feedbackForm.interactable = true;
        feedbackForm.blocksRaycasts = true;
    }
    void UpdateTimeDate(DateTime dt)
    {
        inHR.text = dt.Hour.ToString();
        inMin.text = dt.Minute.ToString();
    }
    void RotateMap()
    {
        allContainer.transform.rotation = Quaternion.AngleAxis(sldRotate.value * 360f, new Vector3(0, 1, 0));

    }
    void ScaleMap()
    {
        allContainer.transform.localScale = scale * sldScale.value;
    }
    void ReadCSVFiles()
    {
        TextAsset myTextAsset;
        string csvText;
        string[] rows;
        //Walkability
        myTextAsset = Resources.Load<TextAsset>("walkability_n"); // omit file extension
        csvText = myTextAsset.text;
        rows = csvText.Split(
            new[] { "\r\n", "\r", "\n" },
            StringSplitOptions.None
        );
        for (int i = 1; i < rows.GetLength(0) - 1; i++)
        {

            string[] dataRowArray = rows[i].Split(',');
            waDataSet.Add(dataRowArray);
        }
        //Traffic
        myTextAsset = Resources.Load<TextAsset>("Traffic_hour"); // omit file extension
        csvText = myTextAsset.text;
        rows = csvText.Split(
            new[] { "\r\n", "\r", "\n" },
            StringSplitOptions.None
        );
        for (int i = 1; i < rows.GetLength(0) - 1; i++)
        {

            string[] dataRowArray = rows[i].Split(',');
            trDataSet.Add(dataRowArray);
        }
        //Route
        myTextAsset = Resources.Load<TextAsset>("route"); // omit file extension
        csvText = myTextAsset.text;
        rows = csvText.Split(
            new[] { "\r\n", "\r", "\n" },
            StringSplitOptions.None
        );
        for (int i = 1; i < rows.GetLength(0) - 1; i++)
        {

            string[] dataRowArray = rows[i].Split(',');
            roDataset.Add(dataRowArray);

        }


    }
    void RunGPS()
    {
        // StartCoroutine("LocationCoroutine");
        StartCoroutine("NewLoc");
    }
    IEnumerator LocationCoroutine()
    {
        // Uncomment if you want to test with Unity Remote
        /*#if UNITY_EDITOR
                yield return new WaitWhile(() => !UnityEditor.EditorApplication.isRemoteConnected);
                yield return new WaitForSecondsRealtime(5f);
        #endif*/
#if UNITY_EDITOR
        // No permission handling needed in Editor
#elif UNITY_ANDROID
        if (!UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.CoarseLocation)) {
            UnityEngine.Android.Permission.RequestUserPermission(UnityEngine.Android.Permission.CoarseLocation);
        }

        // First, check if user has location service enabled
        if (!UnityEngine.Input.location.isEnabledByUser) {
            // TODO Failure
            Debug.LogFormat("Android and Location not enabled");
            yield break;
        }

#elif UNITY_IOS
        if (!UnityEngine.Input.location.isEnabledByUser) {
            // TODO Failure
            Debug.LogFormat("IOS and Location not enabled");
            yield break;
        }
#endif
        // Start service before querying location
        UnityEngine.Input.location.Start(100f);

        // Wait until service initializes
        int maxWait = 15;
        while (UnityEngine.Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSecondsRealtime(1);
            maxWait--;
        }

        // Editor has a bug which doesn't set the service status to Initializing. So extra wait in Editor.
#if UNITY_EDITOR
        int editorMaxWait = 15;
        while (UnityEngine.Input.location.status == LocationServiceStatus.Stopped && editorMaxWait > 0)
        {
            yield return new WaitForSecondsRealtime(1);
            editorMaxWait--;
        }
#endif

        // Service didn't initialize in 15 seconds
        if (maxWait < 1)
        {
            // TODO Failure
            Debug.LogFormat("Timed out");
            yield break;
        }

        // Connection has failed
        if (UnityEngine.Input.location.status != LocationServiceStatus.Running)
        {
            // TODO Failure
            Debug.LogFormat("Unable to determine device location. Failed with status {0}", UnityEngine.Input.location.status);
            yield break;
        }
        else
        {
            Debug.LogFormat("Location service live. status {0}", UnityEngine.Input.location.status);
            // Access granted and location value could be retrieved
            Debug.LogFormat("Location: "
                + UnityEngine.Input.location.lastData.latitude + " "
                + UnityEngine.Input.location.lastData.longitude + " "
                + UnityEngine.Input.location.lastData.altitude + " "
                + UnityEngine.Input.location.lastData.horizontalAccuracy + " "
                + UnityEngine.Input.location.lastData.timestamp);

            var _latitude = UnityEngine.Input.location.lastData.latitude;
            var _longitude = UnityEngine.Input.location.lastData.longitude;
            var _accuracy = UnityEngine.Input.location.lastData.horizontalAccuracy;
            txtAcc.text = "Accuracy: " + _accuracy.ToString(); ;
            //  success do something with location
            myLocation = Instantiate(locationPrefab);
            myLocation.transform.localPosition = myMap.GeoToWorldPosition(new Vector2d(_latitude, _longitude), true);
            myLocation.transform.localScale = new Vector3(allContainer.transform.localScale.x, allContainer.transform.localScale.y * 10, allContainer.transform.localScale.z);
            myLocation.transform.parent = allContainer.transform;


        }

        // Stop service if there is no need to query location updates continuously
        //UnityEngine.Input.location.Stop();
    }
    IEnumerator NewLoc()
    {
        // Check if the user has location service enabled.
        if (!Input.location.isEnabledByUser)
            yield break;

        // Starts the location service.
        Input.location.Start();

        // Waits until the location service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // If the service didn't initialize in 20 seconds this cancels location service use.
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // If the connection failed this cancels location service use.
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            // If the connection succeeded, this retrieves the device's current location and displays it in the Console window.
            // print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
            var _latitude = UnityEngine.Input.location.lastData.latitude;
            var _longitude = UnityEngine.Input.location.lastData.longitude;
            var _accuracy = UnityEngine.Input.location.lastData.horizontalAccuracy;
            txtAcc.text = "Accuracy: " + _accuracy.ToString(); ;
            //  Add location marker
            myLocation = Instantiate(locationPrefab);
            myLocation.transform.localPosition = myMap.GeoToWorldPosition(new Vector2d(_latitude, _longitude), true);
            myLocation.transform.localScale = new Vector3(allContainer.transform.localScale.x, allContainer.transform.localScale.y * 10, allContainer.transform.localScale.z);
            myLocation.transform.parent = allContainer.transform;
        }

        // Stops the location service if there is no need to query location updates continuously.
        //Input.location.Stop();
    }

}
