using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Road : MonoBehaviour
{

    private LineRenderer lr;
    private int ski = 3, koi = 25, bgi = 33, bvi = 54;
    private float min = 0f, max = 1550f, minHeight = 0, maxHeight = 20;
    private Vector3[] points, newPoints;
    void Start()
    {
        points = new Vector3[62];
        lr = GetComponent<LineRenderer>();
    }
    public void UpdatePositions(int sk, int ko, int bg, int bv)
    {
        float step1, step2, step3;
        lr.GetPositions(points);
        newPoints = points;
        step1 = (ko - sk) / (koi - ski);
        step2 = (bg - ko) / (bgi - koi);
        step3 = (bv - bg) / (bgi - bvi);
        newPoints[ski] = new Vector3(points[ski].x, (sk / max) * maxHeight, points[ski].z);
        newPoints[koi] = new Vector3(points[koi].x, (ko / max) * maxHeight, points[koi].z);
        newPoints[bgi] = new Vector3(points[bgi].x, (bg / max) * maxHeight, points[bgi].z);
        newPoints[bvi] = new Vector3(points[bvi].x, (bv / max) * maxHeight, points[bvi].z);
        for (int i = 0; i < 62; i++)
        {
            if (i > ski && i < koi)
            {
                newPoints[i] = new Vector3(points[i].x, newPoints[i - 1].y + step1, points[i].z);
            }
            else if (i > koi && i < bgi)
            {
                newPoints[i] = new Vector3(points[i].x, newPoints[i - 1].y + step2, points[i].z);
            }
            else if (i > bgi && i < bvi)
            {
                newPoints[i] = new Vector3(points[i].x, newPoints[i - 1].y + step3, points[i].z);
            }
        }

        lr.SetPositions(newPoints);
    }

}
