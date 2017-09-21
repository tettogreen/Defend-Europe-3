using System;
using UnityEngine;


namespace UnityStandardAssets.Utility
{
	public class FollowTarget : MonoBehaviour
	{
		public Transform target;
		public Vector3 offset = new Vector3 (0f, 7.5f, 0f);
		public bool RelativeToCurrentPosition;
		public bool fixX, fixY;
		public bool followRotationX, followRotationY, followRotationZ;

		[SerializeField] private Transform leftLimit;
		[SerializeField] private Transform rightLimit;
		[SerializeField] private float horizontalOffsetMultiplier = 2f;

		private Vector3 newPosition;
		private Vector3 relativeOffset;

		public float LeftLimit { get { return leftLimit.position.x; } }

		public float RightLimit { get { return rightLimit.position.x; } }

		void Start () {
			relativeOffset = transform.position - target.position;
		}

		void FixedUpdate ()
		{
			UpdatePosition ();
			UpdateRotation ();
		}

		public void Move (float movement)
		{
			offset.x = movement * horizontalOffsetMultiplier;
		}

		void UpdatePosition ()
		{
			newPosition = target.position + offset;

			if (RelativeToCurrentPosition)
				newPosition += relativeOffset;

			//Limit X Axis
			LimitX ();

			//Prevents movement change along the axis
			FixMovement();
			
			transform.position = newPosition;
		}

		void UpdateRotation ()
		{
			Vector3 newRotation = transform.rotation.eulerAngles;

			if (followRotationX) {
				newRotation.x = target.rotation.eulerAngles.x;
			}

			if (followRotationY) {
				newRotation.y = target.rotation.eulerAngles.y;
			}

			if (followRotationZ) {
				newRotation.z = target.rotation.eulerAngles.z;
			}

			transform.rotation = Quaternion.Euler(newRotation);
		}

		void LimitX ()
		{
			if (leftLimit && newPosition.x < LeftLimit)
				newPosition.x = LeftLimit;
			
			if (rightLimit && newPosition.x > RightLimit)
				newPosition.x = RightLimit;
		}

		void FixMovement ()
		{
			if (fixX)
				newPosition.x = transform.position.x;

			if (fixY)
				newPosition.y = transform.position.y;
		}
	}
}
