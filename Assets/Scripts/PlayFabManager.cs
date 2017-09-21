using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using PlayFab.Events;

public class PlayFabManager : Singleton<PlayFabManager> {

	static string mUserID;

	public static PlayFabManager Instance {
		get {
			return ((PlayFabManager)mInstance);
		} set {
			mInstance = value;
		}
	}

	public bool IsLoggedIn { get { return PlayFabClientAPI.IsClientLoggedIn(); } }

	// Use this for initialization
	void Start ()
	{
		PlayFabSettings.TitleId = "2B46";
//		Login("test_1");
	}

	public void Login (string userId)
	{
		if (userId != "")
		{
			mUserID = userId;
			var request = new LoginWithCustomIDRequest { CustomId = mUserID, CreateAccount = true };
			PlayFabClientAPI.LoginWithCustomID (request, OnLoginSuccess, OnLoginFailure);
		}
	}

	private void UpdatePlayerName (string name)
	{
		var request = new UpdateUserTitleDisplayNameRequest { DisplayName = name};
		PlayFabClientAPI.UpdateUserTitleDisplayName( request, OnUpdateNameSuccess, OnUpdateNameFailure );
	}

	public void GetLeaderboard ()
	{
		var request = new GetLeaderboardRequest { 
			StatisticName = "Score",
			StartPosition = 0,
			MaxResultsCount = 5
		};
		PlayFabClientAPI.GetLeaderboard (request, OnGetLeaderboardSuccess, OnGetLeaderboardFailed);
	}

	public void UpdateScore (int newValue) 
	{
		//Form data structure
		var data = new List<StatisticUpdate> { 
			new StatisticUpdate {
				StatisticName = "Score",
				Value = newValue
			}
		};

		//Insert it into the request
		var request = new UpdatePlayerStatisticsRequest {
			Statistics = data
		};

		//Send request
		PlayFabClientAPI.UpdatePlayerStatistics (request, OnScoreUpdateSuccess, OnScoreUpdateFailure);
	}


	private void OnLoginSuccess (LoginResult result)
	{
		Debug.Log ("Logged in successfully");
		Debug.Log (result.PlayFabId);

		if (result.NewlyCreated)
		{
			UpdatePlayerName (mUserID);
		}

		var currentGameState = GameManager.Instance.CurrentState;
		if (currentGameState == GameState.Registration)
		{
			GameManager.Instance.FinishRegistration (mUserID);
		}
	}

	private void OnLoginFailure (PlayFabError error)
	{
		ShowError(error, "Something went wrong with your first API call.  :(");
		mUserID = null;
	}

	private void OnUpdateNameSuccess (UpdateUserTitleDisplayNameResult result)
	{
		Debug.Log ("Updated name successfully:");
		Debug.Log (result.DisplayName);
	}

	private void OnUpdateNameFailure (PlayFabError error)
	{
		ShowError(error, "Can't update name. :(");
	}

	private void OnScoreUpdateSuccess (UpdatePlayerStatisticsResult result)
	{
		Debug.Log ("Updated score successfully:");
		Debug.Log (result.CustomData);
		GetLeaderboard();
	}

	private void OnScoreUpdateFailure (PlayFabError error)
	{
		ShowError(error, "Something went wrong during score update =(");
	}

	private void OnGetLeaderboardSuccess (GetLeaderboardResult result)
	{
		CanvasUpdater.Instance.PopulateLeaderboard(result.Leaderboard);
	}

	private void OnGetLeaderboardFailed (PlayFabError error)
	{
		ShowError(error, "Something went wrong during retrieving of leaderboard =(");
	}

	void ShowError (PlayFabError error, string message)
	{
		Debug.LogWarning (message);
		Debug.LogError ("Here's some debug information:");
		Debug.LogError (error.GenerateErrorReport ());
	}
}

