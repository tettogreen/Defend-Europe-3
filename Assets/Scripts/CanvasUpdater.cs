using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayFab.ClientModels;

public class CanvasUpdater : Singleton<CanvasUpdater> {

	[SerializeField] Text score;
	[SerializeField] LeaderboardList leaderboardList;

	public static CanvasUpdater Instance {
		get {
			return ((CanvasUpdater)mInstance);
		}
		set {
			mInstance = value;
		}
	}

	void Start () {
		GameManager.ScoreChanged += OnScoreChanged;
	}

	public void PopulateLeaderboard (List<PlayerLeaderboardEntry> data)
	{
		foreach (var entity in data)
		{
			leaderboardList.Add (entity.DisplayName, entity.StatValue, entity.Position + 1);
		}
	}

	void OnDestroy ()
	{
		GameManager.ScoreChanged -= OnScoreChanged;
	}

	// Update is called once per frame
	void OnScoreChanged (int value) {
		score.text = value.ToString();
	}

}
