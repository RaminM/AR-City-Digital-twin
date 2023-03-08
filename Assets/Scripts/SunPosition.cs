using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mapbox.Unity.Map;
using System;
public class SunPosition : MonoBehaviour
{
    //Sun calculation paramters
    private float lat, lon;
    private float dayOfYear, hrTime, minTime, timeZone = 1;
    private float dtUTC, LSTM, EoT, B, TC, LST, HRA, LT, Dec, Elevation, Azimuth, Zenith, Sunrise, Sunset, distance = 1000;
    Vector3 direction, location;
    DateTime dateTime;

    //Simulation paramteres
    [SerializeField]
    private float passedTime = 0f, prevSimSpeed = 1, simSpeed = 1;

    //Refrerence to other objects
    [SerializeField]
    private AbstractMap map;
    //private UIManager uiManager;

    void Start()
    {
        //uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
        dateTime = DateTime.Now;
        passedTime = dateTime.Second;
        //uiManager.UpdateTimeDate(dateTime);

        lat = (float)map.CenterLatitudeLongitude[0];
        lon = (float)map.CenterLatitudeLongitude[1];

        dayOfYear = (float)dateTime.DayOfYear;
        hrTime = (float)dateTime.Hour;
        minTime = (float)dateTime.Minute;

        // Debug.Log(dayOfYear + ":" + hrTime + ":" + minTime);
        this.transform.position = distance * LocalAndSolarTimeCalculator(lat, lon, hrTime, minTime, dayOfYear, timeZone);
    }

    // Update is called once per frame
    void Update()
    {
        //Update the sun position each minute
        passedTime += (Time.deltaTime * simSpeed);
        if (passedTime > 60)
        {
            dateTime = dateTime.AddSeconds(passedTime);
            location = LocalAndSolarTimeCalculator(lat, lon, (float)dateTime.Hour, (float)dateTime.Minute, (float)dateTime.DayOfYear, timeZone);
            direction = new Vector3(0, 0, 0) - location;
            this.transform.position = distance * location;
            this.transform.LookAt(map.transform);
            //uiManager.UpdateTimeDate(dateTime);
            passedTime = 0f;

        }


    }
    private Vector3 LocalAndSolarTimeCalculator(float latitude, float longtitude, float hour, float min, float d, float dt)
    {

        //Local standard time median (degrees)
        LSTM = (15f * dt);
        //Calculating the equation of time (minutes)
        B = (360f / 365f) * (d - 81f);
        EoT = 9.87f * Mathf.Sin(Mathf.Deg2Rad * 2 * B) - 7.53f * Mathf.Cos(Mathf.Deg2Rad * B) - 1.5f * Mathf.Sin(Mathf.Deg2Rad * B);
        //Time correction factor (minutes)
        TC = 4 * (longtitude - LSTM) + EoT;
        //Local solar time (minutes?!)
        LT = hour + (min / 60f);
        LST = LT + (TC / 60f);
        //Hour angle 
        HRA = 15f * (LST - 12f);
        //Declination
        Dec = 23.45f * Mathf.Sin(Mathf.Deg2Rad * (360f / 365f) * (d - 81f));
        //Elevation
        Elevation = Mathf.Asin(Mathf.Sin(Mathf.Deg2Rad * Dec) * Mathf.Sin(Mathf.Deg2Rad * latitude) + Mathf.Cos(Mathf.Deg2Rad * Dec) * Mathf.Cos(Mathf.Deg2Rad * latitude) * Mathf.Cos(Mathf.Deg2Rad * HRA)) * Mathf.Rad2Deg;
        //Zenith
        Zenith = 90f - Elevation;
        //Azimuth
        if (HRA < 0)
        {
            Azimuth = Mathf.Acos((Mathf.Sin(Mathf.Deg2Rad * Dec) * Mathf.Cos(Mathf.Deg2Rad * latitude) - Mathf.Cos(Mathf.Deg2Rad * Dec) * Mathf.Sin(Mathf.Deg2Rad * latitude) * Mathf.Cos(Mathf.Deg2Rad * HRA)) / Mathf.Cos(Mathf.Deg2Rad * Elevation)) * Mathf.Rad2Deg;
        }
        else if (HRA > 0)
        {
            Azimuth = 360 - Mathf.Acos((Mathf.Sin(Mathf.Deg2Rad * Dec) * Mathf.Cos(Mathf.Deg2Rad * latitude) - Mathf.Cos(Mathf.Deg2Rad * Dec) * Mathf.Sin(Mathf.Deg2Rad * latitude) * Mathf.Cos(Mathf.Deg2Rad * HRA)) / Mathf.Cos(Mathf.Deg2Rad * Elevation)) * Mathf.Rad2Deg;

        }
        //Sunrise and Sunset
        Sunrise = 12f - (1 / 15f) * Mathf.Acos(-1 * Mathf.Tan(Mathf.Deg2Rad * latitude) * Mathf.Tan(Mathf.Deg2Rad * Dec)) * Mathf.Rad2Deg - (TC / 60f);
        Sunset = 12f + (1 / 15f) * Mathf.Acos(-1 * Mathf.Tan(Mathf.Deg2Rad * latitude) * Mathf.Tan(Mathf.Deg2Rad * Dec)) * Mathf.Rad2Deg - (TC / 60f);
        //to xyz
        float x = Mathf.Sin(Mathf.Deg2Rad * Azimuth) * Mathf.Sin(Mathf.Deg2Rad * Zenith);
        float y = Mathf.Cos(Mathf.Deg2Rad * Zenith);
        float z = Mathf.Cos(Mathf.Deg2Rad * Azimuth) * Mathf.Sin(Mathf.Deg2Rad * Zenith);
        Vector3 position = new Vector3(x, y, z);
        //Print
        // Debug.Log("Equation of Time " + EoT);
        // Debug.Log("Local Standard Time Meridian: " + LSTM);
        // Debug.Log("Time Correction: " + TC);
        // Debug.Log("Declination: " + Dec);
        // Debug.Log("Hour Angle: " + HRA);
        // Debug.Log("Elevation: " + Elevation);
        // Debug.Log("Zenith: " + Zenith);
        // Debug.Log("Local Solar Time: " + Mathf.Floor(LST) + ":" + ((LST - Mathf.Floor(LST)) * 60f));
        // Debug.Log("Azimuth: " + Azimuth);
        // Debug.Log("Sunrise: " + Mathf.Floor(Sunrise) + ":" + ((Sunrise - Mathf.Floor(Sunrise)) * 60f));
        // Debug.Log("Sunset: " + Mathf.Floor(Sunset) + ":" + ((Sunset - Mathf.Floor(Sunset)) * 60f));
        // Debug.Log("Position: " + position);

        return position;

    }
    public void PauseRotation()
    {
        prevSimSpeed = simSpeed;
        simSpeed = 0;

    }
    public void ResumeRotation()
    {
        simSpeed = prevSimSpeed;
        prevSimSpeed = 1;
    }
    public void UpdateDateTime(DateTime iDT)
    {
        dateTime = iDT;

    }
    public void ResetTime()
    {
        dateTime = DateTime.Now;
        //uiManager.UpdateTimeDate(dateTime);
    }
    public void ChangeSimSpeed(float isimSpeed)
    {
        simSpeed = isimSpeed;
    }

}
