using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

public class readCSV : MonoBehaviour
{
    public List<string[]> dataSet;
    [SerializeField]

    void Start()
    {
        dataSet = new List<string[]>();
        ReadCSVFile();
    }

    void ReadCSVFile()
    {
        StreamReader strReader = new StreamReader("./Assets/Datasets/walkability.csv");
        bool endOfFile = false;
        while (!endOfFile)
        {
            string data_string = strReader.ReadLine();
            if (data_string == null)
            {
                endOfFile = true;
                break;
            }
            string[] dataRowArray = data_string.Split(',');
            dataSet.Add(dataRowArray);
        }

    }

}
