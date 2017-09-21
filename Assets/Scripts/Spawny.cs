using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using Lean;

public class Spawny : MonoBehaviour {
	
	[SerializeField] Transform spawnPoint;
	[SerializeField] UnityEvent Spawn, Despawn;

	new Animator animation;
	Quaternion defaultRotation;
	AutoMoveAndRotate movement;
	Character character;

	void Start () {
//		transform.DetachChildren();
//		Destroy(gameObject);

		defaultRotation = transform.rotation;
		animation = GetComponentInChildren<Animator>();
		movement = GetComponent<AutoMoveAndRotate>();
		if (CompareTag("Character"))
			character = GetComponent<Character>();
	}

	public void OnSpawn ()
	{
		Spawn.Invoke();
		SetPositionToSpawnPoint();
		ResetAnimation();
		ResetMovement();
		ResetCharacter();
	}

	public void OnDespawn()
	{
		Despawn.Invoke();
	}

	void SetPositionToSpawnPoint ()
	{
		if (spawnPoint)
			transform.position = spawnPoint.position;
	}

	void ResetAnimation ()
	{
		if (animation)
			animation.Play (0);
	}

//	void ResetRotation ()
//	{
//		transform.rotation = defaultRotation;
//	}

	void  ResetMovement ()
	{
		if (movement)
			movement.Initialize();
	}

	void ResetCharacter ()
	{
		if (character)
			character.Reset();
	}
}
