using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class HitTrigger : MonoBehaviour {

	[SerializeField] UnityEvent hit;
	Character character;

	void Awake ()
	{
		character = GetComponentInParent<Character>();
	}

	void OnTriggerEnter (Collider other)
	{
		if (!character.Movement.IsJumping && isHitByVehicle (other))
		{
			hit.Invoke ();
			if (other.tag == "Player")
			{
				character.OnPlayerHit();
			}
		}
	}

	bool isHitByVehicle (Collider other)
	{
		var rigid = other.attachedRigidbody;
		return rigid && !other.isTrigger && (rigid.tag == "Player" || rigid.tag == "Vehicle");
	}
}
