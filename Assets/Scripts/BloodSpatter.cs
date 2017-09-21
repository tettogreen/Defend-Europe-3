using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BloodSpatter : MonoBehaviour {

	public void OnBecameInvisible()
	{
		gameObject.SetActive(false);
	}
}
