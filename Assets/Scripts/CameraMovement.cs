using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    [SerializeField]
    private float movementSpeed = 5f;

    [SerializeField]
    private float rotationSpeed = 5f;



    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {
        float horizontalInput = Input.GetAxis("Horizontal");
        float verticalInput = Input.GetAxis("Vertical");

        var currEulerAngles = transform.eulerAngles;

        transform.position = transform.position + new Vector3(horizontalInput * movementSpeed * Time.deltaTime,0 , verticalInput * movementSpeed * Time.deltaTime);


        if (Input.GetKey(KeyCode.Q))
        {
            currEulerAngles.x += rotationSpeed * Time.deltaTime;

        }
        if (Input.GetKey(KeyCode.E))
        {
            currEulerAngles.x -= rotationSpeed * Time.deltaTime;

        }
        if (Input.GetKey(KeyCode.Z))
        {
            currEulerAngles.y -= rotationSpeed * Time.deltaTime;

        }
        if (Input.GetKey(KeyCode.C))
        {
            currEulerAngles.y += rotationSpeed * Time.deltaTime;

        }
        if (Input.GetKey(KeyCode.Space))
        {
            transform.position += new Vector3(0, movementSpeed * Time.deltaTime,0);

        }
        if (Input.GetKey(KeyCode.LeftControl))
        {
            transform.position -= new Vector3(0, movementSpeed * Time.deltaTime,0);
        }
        transform.rotation = Quaternion.Euler(currEulerAngles);
    }









}
