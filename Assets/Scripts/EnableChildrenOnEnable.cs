﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableChildrenOnEnable : MonoBehaviour {

	void OnEnable ()
	{
		foreach (Transform child in transform)
		{
			child.gameObject.SetActive(true);
		}
	}
}
