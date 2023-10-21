using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Movea : MonoBehaviour
{
    [SerializeField]float moveSpeed = 10f;
    //[SerializeField] float xValue = 0f;
    //[SerializeField] float yValue = 0.01f;
    //[SerializeField] float zValue = 0f;


    // Start is called before the first frame update
    void Start()
    {
        PrintInstruction();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        MovePlayer();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            SceneManager.LoadScene(0);
        }
    }

    void PrintInstruction()
    {
        Debug.Log("Welcome to the game");
        Debug.Log("Move your player with WASD or arrow keys");
        Debug.Log("Don't hit the walls!");
    }

    void MovePlayer()
    {
        float xValue = Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed; // Horizontal to jest os X
        float zValue = Input.GetAxis("Vertical") * Time.deltaTime * moveSpeed;   // Vertical to jest os Y

        transform.Translate(xValue,0,zValue);
    }
}
