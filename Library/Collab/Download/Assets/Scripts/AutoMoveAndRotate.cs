using System;
using UnityEngine;

public class AutoMoveAndRotate : MonoBehaviour
{
	public Vector3andSpace moveUnitsPerSecond;
	public Vector3andSpace rotateDegreesPerSecond;
	public bool ignoreTimescale;



	[SerializeField] float jumpVelocity;
	[SerializeField] float outOfRoadBordersVelocity = 3f;
	//defines shape of the jump trajectory
	[SerializeField] [Range (0, 1)] float jumpFactor = 0.2f;
	[SerializeField] Transform jumpPivot;
	[SerializeField] [Range (0, 1)] float playerFollowSpeedMultiplier = 0.2f;
	[SerializeField] new Animator animation;

	Vector3 jumpTarget;
	float m_LastRealTime;
	GameObject player;

	public bool IsJumping { get; set; }

	public Transform JumpTarget { get; set; }

	public Vector3 MoveUnitsPerSecond {
		get { 
			return moveUnitsPerSecond.value; 
		}
		set {
			if (moveUnitsPerSecond.value != value)
			{
				moveUnitsPerSecond.value = value;
				SetMovementAnimation ();
			}
		} 
	}

	private void Start ()
	{
		m_LastRealTime = Time.realtimeSinceStartup;
		player = GameObject.FindGameObjectWithTag ("Player");
		SetMovementAccordingToPosition ();
		SetMovementAnimation (); 
	}

	// Update is called once per frame
	private void FixedUpdate ()
	{
		float deltaTime = Time.fixedDeltaTime;
		if (ignoreTimescale)
		{
			deltaTime = (Time.realtimeSinceStartup - m_LastRealTime);
			m_LastRealTime = Time.realtimeSinceStartup;
		}

		if (!IsJumping && playerFollowSpeedMultiplier > 0)
		{
			moveUnitsPerSecond.value.x = Mathf.Clamp (player.transform.position.x - transform.position.x, -1f, 1f);
			moveUnitsPerSecond.value.x *= playerFollowSpeedMultiplier;
		}

		if (IsJumping)
		{
			moveUnitsPerSecond.space = Space.World;
			var originalDirection = JumpTarget.position - jumpPivot.position;
			var normalizedDirection = originalDirection.normalized;
			normalizedDirection.y = Mathf.Lerp (normalizedDirection.y, originalDirection.y, jumpFactor);
			normalizedDirection.Normalize();
			moveUnitsPerSecond.value =  normalizedDirection * jumpVelocity;
		}

		transform.Translate (moveUnitsPerSecond.value * deltaTime, moveUnitsPerSecond.space);
		transform.Rotate (rotateDegreesPerSecond.value * deltaTime, moveUnitsPerSecond.space);
	}

	private void SetMovementAnimation ()
	{
		if (animation)
			animation.SetFloat ("velocityX", moveUnitsPerSecond.value.x);
	}

	//Change movement if migrant is located out of the borders
	private void SetMovementAccordingToPosition ()
	{
		if (transform.position.x < RoadBorders.Left.position.x)
		{
			moveUnitsPerSecond.value = Vector3.zero;
			moveUnitsPerSecond.value.x = outOfRoadBordersVelocity;
			return;
		}

		if (transform.position.x > RoadBorders.Right.position.x)
		{
			moveUnitsPerSecond.value = Vector3.zero;
			moveUnitsPerSecond.value.x = -outOfRoadBordersVelocity;
			return;
		}
	}



	[Serializable]
	public class Vector3andSpace
	{
		public Vector3 value;
		public Space space = Space.Self;
	}
}

