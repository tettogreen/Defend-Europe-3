using System.Collections;
using UnityEngine;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof (AudioSource))]
    public class WheelEffects : MonoBehaviour
    {
        public Transform SkidTrailPrefab;
		public Transform BloodTrailPrefab;
		public float bloodTrailTime = 2f;
        public static Transform skidTrailsDetachedParent;
        public ParticleSystem skidParticles;
        public bool skidding { get; private set; }
        public bool PlayingAudio { get; private set; }
        public bool stopFoundParticles = true;


        private AudioSource m_AudioSource;
        private Transform m_SkidTrail;
        private WheelCollider m_WheelCollider;


        private void Start()
        {
            skidParticles = transform.root.GetComponentInChildren<ParticleSystem>();

            if (skidParticles == null)
            {
                Debug.LogWarning(" no particle system found on car to generate smoke particles", gameObject);
            }
            else if (stopFoundParticles)
            {
                skidParticles.Stop();
            }

            m_WheelCollider = GetComponent<WheelCollider>();
            m_AudioSource = GetComponent<AudioSource>();
            PlayingAudio = false;

            if (skidTrailsDetachedParent == null)
            {
                skidTrailsDetachedParent = new GameObject("Skid Trails - Detached").transform;
            }
        }


        public void EmitTyreSmoke()
        {
            skidParticles.transform.position = transform.position - transform.up*m_WheelCollider.radius;
            skidParticles.Emit(1);
            if (!skidding)
            {
                StartSkidTrail();
            }
        }


        public void PlayAudio()
        {
            m_AudioSource.Play();
            PlayingAudio = true;
        }


        public void StopAudio()
        {
            m_AudioSource.Stop();
            PlayingAudio = false;
        }


		void StartSkidTrail (Transform trailPrefab, Vector3 spawnPosition)
		{
			if (skidding)
			{
				return;
			}
			skidding = true;
			m_SkidTrail = Instantiate (trailPrefab);
			m_SkidTrail.parent = transform;
			m_SkidTrail.position = spawnPosition;
//			m_SkidTrail.localPosition = -Vector3.up * m_WheelCollider.radius;
		}

		public void StartSkidTrail ()
		{
			var spawnPosition = transform.position - Vector3.up * m_WheelCollider.radius;
			StartSkidTrail (SkidTrailPrefab, spawnPosition);
		}

		public void StartBloodTrail (Vector3 bodyPosition)
		{
			//Instantiate trail at the body position 
			Vector3 spawnPosition = transform.position - Vector3.up * m_WheelCollider.radius;
			spawnPosition.z = bodyPosition.z;

			StartSkidTrail (BloodTrailPrefab, spawnPosition);
			Invoke("EndSkidTrail", bloodTrailTime);
		}

        public void EndSkidTrail()
        {
            if (!skidding)
            {
                return;
            }
            skidding = false;
            Debug.Log("Detaching blood trail...");
            m_SkidTrail.parent = skidTrailsDetachedParent;
        }
    }
}
