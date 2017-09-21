using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Singleton<Player> {

	Rigidbody rigid;
	public float CurrentVelocity { get { return rigid.velocity.magnitude; } }

	public static Player Instance {
		get {
			return ((Player)mInstance);
		} set {
			mInstance = value;
		}
	}

	// Use this for initialization
	void Start () {
		rigid = GetComponent<Rigidbody>();
	}
}
