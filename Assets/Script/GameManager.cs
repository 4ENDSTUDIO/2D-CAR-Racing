using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public int collectedCoins, victoryCondition = 2;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            DestroyImmediate(this);
        }
    }

    private static GameManager instance;
    public static GameManager Myinstance
    {
        get
        {
            if (instance == null)
                instance = new GameManager();
            return instance;
        }
    }
    private void Start()
    {
        UIManager.Myinstance.UpdateCoinUI(collectedCoins, victoryCondition);
    }
    public void AddCoin(int _coin)
    {
        collectedCoins += _coin;
        Debug.Log(collectedCoins);
        UIManager.Myinstance.UpdateCoinUI(collectedCoins, victoryCondition);

    }
    public void Finish()
    {
        if(collectedCoins >= victoryCondition)
        {
            SceneManager.LoadScene("Main");
        }
        else
        {
            UIManager.Myinstance.showVictoryCondition(collectedCoins, victoryCondition);
        }

    }
}
