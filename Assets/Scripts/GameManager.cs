using System.Collections;
//using System.Collections.Generic;
using System;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using UnityStandardAssets.Vehicles.Car;

public enum GameState
{
	Init,
	InGame,
	Registration,
	GameOver}

;

public class GameManager : Singleton<GameManager>
{


	public UnityEvent OnShowFinishPopup, OnShowRegistrationPopup, OnFinishRegistration; 

	public float initialAccelerationTime = 3f;
	public int gameOverMigrantsCount = 4;

	public static event Action<int> ScoreChanged;

	[SerializeField] string userId;
	[SerializeField] GameState currentState;
	[SerializeField] GameState previousState = GameState.Init;
	[SerializeField] float startTime;
	[SerializeField] float timeBeforeFinishPopup = 4f;

	float normalGameSpeed;
	IEnumerator updateScoreAsync;

	CarController playerCar;

	static int score = 0;

	public GameState CurrentState { get { return currentState; } }

	bool InitialAccelerationPassed {
		get {
			return Time.time - startTime > initialAccelerationTime;
		}
	}

	bool IsRegisteredUser {
		get {
			return PlayerPrefs.HasKey("userId");
		}
	}

	int holdingMigrantCounter;

	public int HoldingMigrantCounter {
		get { 
			return holdingMigrantCounter;
		} 
		set {
			holdingMigrantCounter = value; 
			if (holdingMigrantCounter >= gameOverMigrantsCount)
				GameOver (); 
		}
	}

	public static GameManager Instance {
		get {
			return ((GameManager)mInstance);
		}
		set {
			mInstance = value;
		}
	}

	// Use this for initialization
	void Start ()
	{
		playerCar = Player.Instance.GetComponent<CarController> ();
		normalGameSpeed = Time.timeScale;
		updateScoreAsync = UpdateScoreAsync();
	}
	
	// Update is called once per frame
	void Update ()
	{
		switch (currentState)
		{
//			case GameStates.LevelPick
			case GameState.Init:
				{
					ProcessInit ();
					break;
				}
			case GameState.Registration:
				{
					ProcessRegistration();
					break;
				}
			case GameState.InGame:
				{
					ProcessIngame ();
					break;
				}
		//			case GameStates.Paused
			case GameState.GameOver:
				{
					ProcessGameOver ();
					break;}
			default:
				{
					Debug.LogError ("Incorrect game state!");
					break;
				}
		}
	}



	public void FinishRegistration (string newUserId)
	{
		PlayerPrefs.SetString ("userId", newUserId);
		userId = newUserId;
		OnFinishRegistration.Invoke();
		ContinueGame();
	}

	public void GameOver ()
	{
		currentState = GameState.GameOver;
	}
	
	public void ResetLevel ()
	{
		int sceneIndex = SceneManager.GetActiveScene().buildIndex;
		SceneManager.LoadScene(sceneIndex);

		ResetGameStats ();
		ContinueGame ();
	}

	public void IncreaseScoreBy (int value)
	{
		if (currentState == GameState.InGame)
		{
			score += value;
			ScoreChanged (score);
		}
	}

	void PauseGame()
	{
		Time.timeScale = 0;
	} 
	
	void StartInGame ()
	{
		startTime = Time.time;
		ContinueGame();
	}

	void ContinueGame()
	{
		Time.timeScale = normalGameSpeed;
		currentState = GameState.InGame;
	}

	void ProcessInit ()
	{
		userId = PlayerPrefs.GetString ("userId");

		if (IsRegisteredUser)
		{
			currentState = GameState.InGame;
		} else
		{
			currentState = GameState.Registration;
		}
	}

	void ProcessRegistration ()
	{
		if (!StateWas (GameState.Registration))
		{
			PauseGame ();
			ShowRegistrationPopup ();
			previousState = GameState.Registration;
		}
	}

	void ProcessIngame ()
	{

		if (StateWas (GameState.Init)) {
			PlayFabManager.Instance.Login(userId);
		}

		if (!StateWas (GameState.InGame)) {
			StartInGame ();
		}

		previousState = GameState.InGame;
	}

	void ProcessGameOver ()
	{
		if (StateWas (GameState.InGame))
		{
			Debug.Log ("GAME OVER");


			StartCoroutine( updateScoreAsync );
			Invoke("ShowFinishPopup", timeBeforeFinishPopup);
			Invoke("PauseGame", timeBeforeFinishPopup);
			CrashPlayerCar();

			previousState = currentState;
		}
	}

	bool StateWas (GameState state)
	{
		return previousState == state;
	}

	void ShowRegistrationPopup ()
	{
		Debug.Log ("Show registraion pop-up");

		OnShowRegistrationPopup.Invoke();
	}

	void ShowFinishPopup ()
	{
		Debug.Log ("Show finish pop-up");

		OnShowFinishPopup.Invoke();
	}

	void CrashPlayerCar ()
	{
		int sign = UnityEngine.Random.Range (0, 1) * 2 - 1;
		playerCar.CentreOfMassOffset = new Vector3 (sign , 2, -1);
	}

	void ResetGameStats() {
		score = 0;
	}

	IEnumerator UpdateScoreAsync ()
	{
		if (PlayFabManager.Instance.IsLoggedIn)
		{
			PlayFabManager.Instance.UpdateScore (score);
		}
		else 
		{
			Debug.LogWarning ("No connection to PlayFab. Score won't be updated.");
		}
		yield return null;		
	}

	#if UNITY_EDITOR
	//****************EDITOR*****************

	[MenuItem("Utils/Delete All PlayerPrefs")]
	static public void DeleteAllPlayerPrefs() {
		PlayerPrefs.DeleteAll();
	}
	#endif
}
