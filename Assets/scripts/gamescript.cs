using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class gamescript : MonoBehaviour {
	public int storedValue;
	public int bankerLeft;
	public int robberGained;
	public int bombLeft;
	public int roundLeft;
	void Start () {
		storedValue = 0;
		bankerLeft = 10;
		robberGained = 0;
		bombLeft = 3;
		roundLeft = 7;
	}

		
	// Update is called once per frame
	void Update () {

	}
}
