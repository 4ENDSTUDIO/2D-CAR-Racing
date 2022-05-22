using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI txtRescue, textVictoryCondition;
    [SerializeField] GameObject victoryCondition;
    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            DestroyImmediate(this);
        }
    }

    private static UIManager instance;
    public static UIManager Myinstance
    {
        get
        {
            if (instance == null)
                instance = new UIManager();
            return instance;
        }
    }

    public void UpdateCoinUI(int _coin, int _victoryCondition)
    {
        txtRescue.text = "RESCUE : " + _coin + " / " + _victoryCondition;
    }
    public void showVictoryCondition(int _coin, int _victoryCondition)
    {
        victoryCondition.SetActive(true);
        textVictoryCondition.text = "You Need " + (_victoryCondition - _coin) + " More Cats";
    }
    public void hideVictoryCondition()
    {
        victoryCondition.SetActive(false);
 
    }
    public void PauseGame()
    {
        Time.timeScale = 0;
    }
    public void ResumeGame()
    {
        Time.timeScale = 1;
    }




}
