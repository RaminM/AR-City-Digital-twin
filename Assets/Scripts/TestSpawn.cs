using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestSpawn : MonoBehaviour
{
    [SerializeField]
    GameObject spawnManager;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(spawnManager);

    }

    // Update is called once per frame
    void Update()
    {

    }
}
