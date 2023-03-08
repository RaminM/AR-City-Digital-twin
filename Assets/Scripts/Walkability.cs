using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Walkability : MonoBehaviour
{
    // Start is called before the first frame update

    public void SetScore(float score)
    {
        // float max = 0.7272f;
        // float min = 0.5959f;

        // float newScore = (1/(max-min))*(score-min);
        // //this.transform.localScale = new Vector3(1, score*5, 1);
        // GetComponent<Renderer>().material.color = new Color((1 - newScore) , newScore , 0);
        GetComponent<Renderer>().material.color = new Color((1 - score) , score , 0);

    }
}
