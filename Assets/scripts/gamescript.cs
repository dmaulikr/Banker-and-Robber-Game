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
	public Button button1;
	public Button button2;
	public Button button3;
	public Text scoreText;

	public string targetLayer = "aboveCoin";
	public string mode = "banker";

	public int bomberScore = 0;
	public bool house1 = false;
	public bool house2 = false;
	public bool house3 = false;

	void Start () {
		OK.onClick.AddListener (TaskOnClick);
		button1.onClick.AddListener (RevealHouse1);
		button2.onClick.AddListener (RevealHouse2);
		button3.onClick.AddListener (RevealHouse3);
	}

	void Update() {
		

	}




	void TaskOnClick () {
		foreach (GameObject square in GameObject.FindGameObjectsWithTag("houseAndCoverer")) {
			square.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		}

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
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
				coin.GetComponent<selectScript>().enabled = false;
			}

//			square1.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
//			square2.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
//			square3.GetComponentInChildren<SpriteRenderer> ().color = new Color(225f,225f,225f);
		} else {
			mode = "banker";
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
				coin.GetComponent<selectScript>().enabled = true;
			}

			Bounds bound1 = square1.GetComponent<Renderer>().bounds;
			Bounds bound2 = square2.GetComponent<Renderer>().bounds;
			Bounds bound3 = square3.GetComponent<Renderer>().bounds;

			if (house1 == true) {
					foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
						if (bound1.Intersects (coin.GetComponent<Renderer>().bounds)) {
							Debug.Log ("Coin Destroyed");
							bomberScore += 10;
							Destroy (coin);
						scoreText.text = "Bomber's Score:" + bomberScore;
						}
					}
				foreach (GameObject bomb in GameObject.FindGameObjectsWithTag("bombs")) {
					if (bound1.Intersects (bomb.GetComponent<Renderer>().bounds)) {
						Debug.Log ("Coin Destroyed");
						bomberScore += 0;
						Destroy (bomb);
						scoreText.text = "Robber exploded! Banker Wins!";
					}
				}

			}

		

			if (house2 == true) {
				foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
					if (bound2.Intersects (coin.GetComponent<Renderer>().bounds)) {
						Debug.Log ("Coin Destroyed");
						bomberScore += 10;
						Destroy (coin);
						scoreText.text = "Bomber's Score:" + bomberScore;
					}
				}
				foreach (GameObject bomb in GameObject.FindGameObjectsWithTag("bombs")) {
					if (bound2.Intersects (bomb.GetComponent<Renderer>().bounds)) {
						Debug.Log ("Coin Destroyed");
						bomberScore += 0;
						Destroy (bomb);
						scoreText.text = "Robber exploded! Banker Wins!";
					}
				}



			}

			if (house3 == true) {
				foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
					if (bound3.Intersects (coin.GetComponent<Renderer>().bounds)) {
						Debug.Log ("Coin Destroyed");
						bomberScore += 10;
						Destroy (coin);
						scoreText.text = "Bomber's Score:" + bomberScore;
					}
				}
				foreach (GameObject bomb in GameObject.FindGameObjectsWithTag("bombs")) {
					if (bound3.Intersects (bomb.GetComponent<Renderer>().bounds)) {
						Debug.Log ("Coin Destroyed");
						bomberScore += 0;
						Destroy (bomb);
						scoreText.text = "Robber exploded! Banker Wins!";
					}
				}


			}

//			foreach (GameObject house in GameObject.FindGameObjectsWithTag("houseAndCoverer")) {
//				Bounds bound = house.GetComponent<Renderer>().bounds;
//				if (house.GetComponent<SpriteRenderer> ().sortingLayerName == "belowCoin") {
//					foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coinsAndBombs")) {
//						if (bound.Intersects (coin.GetComponent<Renderer>().bounds)) {
//							Debug.Log ("Coin Destroyed");
//							bomberScore += 10;
//							Destroy (coin);
//						}
//					}
//
//				}
//			}



//			square1.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);
//			square2.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);
//			square3.GetComponentInChildren<SpriteRenderer> ().color = new Color(50f,50f,20f);

		}
	}

	void RevealHouse1 (){
		if (mode == "bomber"){
			square1.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
			house1 = true;

		}
	}

	void RevealHouse2 (){
		if (mode == "bomber"){
			square2.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
			house2 = true;
		}
	}

	void RevealHouse3 (){
		if (mode == "bomber"){
			square3.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
			house3 = true;
		}
	}


}
