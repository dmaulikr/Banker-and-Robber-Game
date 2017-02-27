using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class gameScript : MonoBehaviour {
	public GameObject square1;
	public GameObject square2;
	public GameObject square3;
	public GameObject coverer;
	public GameObject houseAndCoverer;

	public Button OK;
	public Button button1;
	public Button button2;
	public Button button3;

	public string targetLayer = "aboveCoin";
	public string mode = "banker";
	void Start () {
		OK.onClick.AddListener (TaskOnClick);
		button1.onClick.AddListener (RevealHouse1);
		button2.onClick.AddListener (RevealHouse2);
		button3.onClick.AddListener (RevealHouse3);
	}

	void Update() {
		

	}




	void TaskOnClick () {
	//	houseAndCoverer.GetComponentsInChildren<GameObject>().GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		square1.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		square2.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		square3.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		coverer.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		ToggleLayer ();
		ToggleMode ();


	}

	void ToggleLayer(){
		if (targetLayer == "aboveCoin") {
			targetLayer = "belowCoin";
		} else {
			targetLayer = "aboveCoin";
		}
	}

	void ToggleMode() {
		if (mode == "banker") {
			mode = "bomber";
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coinsAndBombs")) {
				coin.GetComponent<selectScript>().enabled = false;
			}

//			square1.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
//			square2.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
//			square3.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
		} else {
			mode = "banker";
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coinsAndBombs")) {
				coin.GetComponent<selectScript>().enabled = true;
			}

//			square1.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);
//			square2.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);
//			square3.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);

		}
	}

	void RevealHouse1 (){
		if (mode == "bomber"){
			square1.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		}
	}

	void RevealHouse2 (){
		if (mode == "bomber"){
			square2.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		}
	}

	void RevealHouse3 (){
		if (mode == "bomber"){
			square3.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		}
	}


}
