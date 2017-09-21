using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityStandardAssets.Vehicles.Car;

public class CarHitTrigger : MonoBehaviour {

//	[SerializeField] UnityEvent hit;
	[SerializeField] WheelEffects wheel;

	void Start ()
	{
	}

	void OnTriggerEnter (Collider other)
	{
		
		if (other.tag == "Character")
		{
			wheel.StartBloodTrail(other.transform.position);
		}

	}
}
