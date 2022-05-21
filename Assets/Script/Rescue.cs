using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rescue : RescueCollected
{
    [SerializeField] int rescueValue = 1;
    protected override void Collected()
    {
        GameManager.Myinstance.AddCoin(rescueValue);
        Destroy(this.gameObject);
    }
}
