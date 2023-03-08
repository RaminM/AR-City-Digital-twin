using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficPoint : MonoBehaviour
{
    public void SetScore(float score)
    {
        // float max = 0.7272f;
        // float min = 0.5959f;

        // float newScore = (1/(max-min))*(score-min);
        this.transform.localScale = new Vector3(this.transform.localScale.x, score * 20, this.transform.localScale.z);
        // GetComponent<Renderer>().material.color = new Color((1 - newScore) , newScore , 0);
        GetComponent<Renderer>().material.color = new Color(score, (1 - score), 0);

    }
}
