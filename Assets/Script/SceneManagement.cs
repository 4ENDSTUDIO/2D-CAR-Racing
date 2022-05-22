using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManagement : MonoBehaviour
{
    public void Restart()
    {
        SceneManager.LoadScene("Main");
    }
    public void MainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
    public void Mulai()
    {
        SceneManager.LoadScene("Main");
    }

}
