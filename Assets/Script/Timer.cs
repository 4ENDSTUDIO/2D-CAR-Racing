using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Timer : MonoBehaviour
{
    public   float currentTime;
    public float startingTime = 10f;
    [SerializeField] Text cutdownText;
    [SerializeField] GameObject GameOver;
    void Start()
    {
        GameOver.SetActive(false);
        currentTime = startingTime;
    }

    // Update is called once per frame
    void Update()
    {
        currentTime -= 1 * Time.deltaTime;
        cutdownText.text = currentTime.ToString("0");
        timerr();
    }

    public void timerr()
    {
        if (currentTime <= 0)
        {
            GameOver.SetActive(true);
            currentTime = 0;
        }
    }
}
