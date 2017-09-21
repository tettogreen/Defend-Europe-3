using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityStandardAssets.Vehicles.Car;

public class JumpTrigger : MonoBehaviour
{

	[SerializeField] float velocityToClimb;
	[SerializeField] float positionCheckTimeout = 0.2f;
	float previousCheckTime;
	Character character;

	bool CheckTimeoutPassed { get { return Time.time > previousCheckTime + positionCheckTimeout; } }

	void Awake ()
	{
		character = GetComponentInParent<Character>();
	}

	void OnTriggerStay (Collider other)
	{
		var rigid = other.attachedRigidbody;
		if (!character.Movement.IsJumping && CanClimbOn (rigid) && CheckTimeoutPassed)
		{
			previousCheckTime = Time.time;
			var holdOnPoint = FindPositionToHoldOn (rigid);
			if (holdOnPoint)
				GetComponentInParent<Character> ().Jump (holdOnPoint);
		}
	}

	bool CanClimbOn (Rigidbody rigid)
	{
		if (rigid && rigid.tag == "Player")
		{
			var car = rigid.GetComponent<CarController> ();
			return car.CurrentSpeed <= velocityToClimb;
		} else
		{
			return false;
		}
	}

	Transform FindPositionToHoldOn (Rigidbody rigid)
	{
		var positions = rigid.GetComponentsInChildren<HoldOnPosition> ();
		foreach (var position in positions)
		{
			if (!position.IsOccupied)
			{
				Debug.Log ("Found unoccupied position: " + position);
				//Check if the jump trajectory won't go through the car
				RaycastHit hit;
				var direction = position.Point.position - transform.position;
				//TODO Finish layers
//				int mask = ~(1 << 2);
				Physics.Raycast (transform.position, direction, out hit);
				Debug.DrawRay (transform.position, direction, Color.red, 5f);
				if (hit.collider && (hit.collider.tag == "HoldOnPosition"))
				{
					return position.Point;
				}
			}
		}
		return null;
	}

}
