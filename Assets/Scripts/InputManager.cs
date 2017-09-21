using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Utility;

public class InputManager : MonoBehaviour {

	[SerializeField] FollowTarget movementWaypoint;
	
	
	// Update is called once per frame
	void FixedUpdate () {
		float horizontalMovement = Input.GetAxis ("Horizontal");
		movementWaypoint.Move(horizontalMovement);
			
	}
}
