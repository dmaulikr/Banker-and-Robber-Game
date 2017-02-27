using UnityEngine;
using System.Collections;

public class cubeScript : MonoBehaviour {
	public string mode;
	public string targetLayer;
	public GameObject game;
	public GameObject square;
	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {
		mode = game.GetComponent<gameScript> ().mode;
		targetLayer = game.GetComponent<gameScript> ().targetLayer;
	}

	void OnMouseDown (){
		if (mode == "bomber") {
			square.GetComponent<SpriteRenderer> ().sortingLayerName = "belowCoin";
		}
	}


}
