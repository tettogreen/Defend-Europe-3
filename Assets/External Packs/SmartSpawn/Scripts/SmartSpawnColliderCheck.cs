using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/// <summary>
/// This script maintains track of whether an item is already within 
/// the spawning area. 
/// 
/// This script is accessed by the ItemSpawnScript
/// </summary>

namespace SmartSpawn {

	[RequireComponent(typeof(Collider))]
	public class SmartSpawnColliderCheck : MonoBehaviour {

		[Header("Allows an object to be spawned if CanWeSpawn is true.")]
		//Variables start================================

		//Tells the ItemSpawnScript if the area is clear
		public bool canWeSpawn = true;
		[Header("Allows an object to be spawned on the pivot of the spawn blocking object.")]
		public bool snapSpawning = false;

		//The tag used for items -- YOU CAN EDIT THIS
		[Tooltip("Only colliders with this tag will be checked")]
		public string itemTag = "Item";

		[Tooltip("Do we want to check for other tags (ie. if the objects that you are spawning have more than one tag)")]
		public bool checkForMultipleTags = false;
		[Tooltip("The other potential tags to check")]
		public string[] otherTagsToCheckFor;

		//Used to determine if this spawn point has already spawned its maximum
		//allowed amount.
		public int maxSpawnsLeft;

		public Transform spawnPivot;


		private List<Collider> activeColliders = new List<Collider>();
		//Variables end==================================

		//When an item is spawned in, we cannot spawn another
		void OnTriggerEnter (Collider other)
		{
			DisableSpawningFor(other, itemTag);

			if(checkForMultipleTags)
			{
				for(int i = 0; i < otherTagsToCheckFor.Length; i++)
				{
					DisableSpawningFor(other, otherTagsToCheckFor[i]);
				}
			}
		}

		//When the player picks up the item (when it leaves the area)
		//we can spawn another item in again
		void OnTriggerExit(Collider other)
		{
			EnableSpawningFor(other, itemTag);

			if(checkForMultipleTags)
			{
				for(int i = 0; i < otherTagsToCheckFor.Length; i++)
				{
					EnableSpawningFor(other, otherTagsToCheckFor[i]);
				}
			}
		}

		void EnableSpawningFor (Collider other, string tag)
		{
			if (other.CompareTag (tag))
			{
				activeColliders.Remove (other);
				if (activeColliders.Count == 0)
				{
					canWeSpawn = true;
					SnapSpawningTo (other);
				}
			}
		}

		void DisableSpawningFor (Collider other, string tag)
		{
			if (other.CompareTag (tag))
			{
				activeColliders.Add(other);
				canWeSpawn = false;
			}
		}

		void SnapSpawningTo (Collider other)
		{
			if (snapSpawning)
			{
				var pivotObject = other.GetComponent<PivotPoint> ();
				spawnPivot = pivotObject.pivot;
			}
		}
	}

}