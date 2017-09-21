using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadBorders : MonoBehaviour {
	public static Transform Left, Right;
	
	// Use this for initialization
	void Start ()
	{
		var borders = GetComponentsInChildren<Transform> (); 
		foreach (var border in borders)
		{
			AssignBorder (border);
		}
	}

	void AssignBorder (Transform border) {
		if (border.tag == "LeftBorder")
		{
			Left = border;
		} else
		{
			Right = border;
		}
	}
}
