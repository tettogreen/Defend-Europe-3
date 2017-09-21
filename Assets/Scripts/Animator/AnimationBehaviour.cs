using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Utility;

public class AnimationBehaviour : StateMachineBehaviour {

	enum Action { TurnOnAutoMove, TurnOffAutoMove }

	[SerializeField] bool onEnter;
	[SerializeField] bool onExit;
	[SerializeField] Action action;



	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter (Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
		if (onEnter)
		{
			InvokeAction(animator);
		}
	}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	//override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

//	 OnStateExit is called when a transition ends and the state machine finishes evaluating this state
	override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
		if (onExit)
		{
			InvokeAction(animator);
		}
	}

	void InvokeAction (Animator animator)
	{
		var movement = animator.GetComponentInParent<AutoMoveAndRotate> ();
		switch (action)
		{
			case Action.TurnOffAutoMove:
				movement.enabled = false;
				break;
			case Action.TurnOnAutoMove:
				movement.enabled = true;
				break;  
		}
	}
}
