using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean;

public class DeathCollider : MonoBehaviour {

	void OnTriggerExit (Collider other)
	{
		var rigid = other.attachedRigidbody;
		var spawny = rigid.GetComponent<Spawny> ();

		if (spawny != null)
		{
			LeanPool.Despawn (rigid.gameObject);
		} else
		{
			Destroy (rigid.gameObject);
		}
	}
}
