using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class gameScript : MonoBehaviour {
	public GameObject square1;
	public GameObject square2;
	public GameObject square3;
	public GameObject coverer;
	public Button OK;
	public string targetLayer = "aboveCoin";
	void Start () {
		OK.onClick.AddListener (TaskOnClick);
		

	}



	void TaskOnClick () {
		square1.GetComponentInChildren<SpriteRenderer> ().sortingLayerName = targetLayer;
		square2.GetComponentInChildren<SpriteRenderer> ().sortingLayerName = targetLayer;
		square3.GetComponentInChildren<SpriteRenderer> ().sortingLayerName = targetLayer;
		coverer.GetComponentInChildren<SpriteRenderer> ().sortingLayerName = targetLayer;
		if (targetLayer == "aboveCoin") {
			targetLayer = "belowCoin";
		} else {
			targetLayer = "aboveCoin";
		}

	}
}
