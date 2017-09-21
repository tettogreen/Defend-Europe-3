using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;


public class TrigerOnCollision : MonoBehaviour {


//	public string filterByTag;
	public string[] filterByTags;

	[SerializeField] UnityEvent Enter;

	void OnCollisionEnter (Collision collision)
	{
		// Return if tag was entered and differs from the collider
//		if (filterByTag.Length > 0 && !collision.collider.CompareTag (filterByTag))
//			return;

		if (filterByTags.Length > 0)
		{
			foreach (var tag in filterByTags)
			{
				if (collision.collider.CompareTag (tag))
				{
					Enter.Invoke ();
					return;
				}
			}
		} 
		else
		{
			Enter.Invoke ();
		}
	}
}
