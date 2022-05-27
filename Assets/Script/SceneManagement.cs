using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManagement : MonoBehaviour
{
    public void Restart()
    {
        SceneManager.LoadScene("Main");
        Time.timeScale = 1;
    }
    public void MainMenu()
    {
        SceneManager.LoadScene("MainMenu");
        Time.timeScale = 1;
    }
    public void Mulai()
    {
        SceneManager.LoadScene("Main");
        Time.timeScale = 1;
    }

}
