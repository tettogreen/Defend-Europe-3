using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityStandardAssets.Utility;

public class Character : MonoBehaviour {

	[SerializeField] int score;

	public UnityEvent OnLeftHit, OnRightHit, OnHit, OnJump, OnReset;

	public AutoMoveAndRotate Movement { get; set; }

	void Awake () {
		Movement = GetComponent<AutoMoveAndRotate>();
	}

	public void LeftHit ()
	{
		OnHit.Invoke();
		OnLeftHit.Invoke();
	}

	public void RighHit ()
	{
		OnHit.Invoke();
		OnRightHit.Invoke();
	}

	public void Jump (Transform target)
	{
		Movement.JumpTarget = target;
		Movement.IsJumping = true;
		OnJump.Invoke();
	}

	public void Reset ()
	{
		OnReset.Invoke();
	}

	public void OnPlayerHit ()
	{
		GameManager.Instance.IncreaseScoreBy(score);
	}
}
