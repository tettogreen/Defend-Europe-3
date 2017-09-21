using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean;

public class HoldOnPosition : MonoBehaviour {

	[SerializeField] private bool isOccupied;
	public bool IsOccupied { get { return isOccupied; } }

	public Transform Point { get; private set; }

	private void Start ()
	{
		Point = transform.GetChild(0);
	}

	//TODO Handle "migrant hits occupied point" case
	void OnTriggerEnter (Collider other)
	{
		if (other.tag == "Character" && !isOccupied) {
			var character = other.GetComponentInParent<Character> ();
			if (character.Movement.IsJumping) {
				Debug.Log ("Now occupied by " + character.gameObject);
				GetOccupiedBy(character);
			}
		}
	}

	void GetOccupiedBy (Character character)
	{
		character.gameObject.SetActive (false);
		isOccupied = true;
		GetComponent<SpriteRenderer>().enabled = true;
		GameManager.Instance.HoldingMigrantCounter++;
		LeanPool.Despawn(character.gameObject);
	}
}
