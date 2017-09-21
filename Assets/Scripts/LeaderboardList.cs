using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaderboardList : MonoBehaviour {

	[SerializeField] GameObject entityPrefab;

	public void Add (string name, int score, int position) {

		Debug.Log ("Name: " + name);
		Debug.Log ("Score: " + score);

		var entity = Instantiate(entityPrefab, transform).GetComponent<LeaderboardEntity>();
		entity.position.text = position.ToString();
		entity.name.text = name;
		entity.score.text = score.ToString();
	}
}
