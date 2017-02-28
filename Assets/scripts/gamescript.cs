using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using System.Collections.Generic;

public class gameScript : MonoBehaviour {
	public GameObject square1;
	public GameObject square2;
	public GameObject square3;
	public GameObject square4;
	public GameObject coverer;
	public GameObject selected;
	public List<GameObject> toBeDestroyed;
	public List<Button> killed;

	public GameObject cashOutSquare1;
	public GameObject cashOutSquare2;
	public GameObject cashOutSquare3;
	public GameObject cashOutSquare4;


	public Button OK;
	public Button button1;
	public Button button2;
	public Button button3;
	public Button button4;

	public Text ScoreText;
	public Text turnText;
	public Text note;


	public string targetLayer = "aboveCoin";
	public string mode = "banker";

 

	public static int robberScore = 0;
	public static int bankerScore = 0;
	public int turnsLeft = 10;
	public static int bankerSaveLeft = 2;
	public int destroyedNumber = 0;
	public int bombScore=0;

	// Set button functions. I hard coded everything bucause I didn't know how to loop through game objects when I first did that.
	// Actually if you want to loop though game objects you can do List<GameObject> and then listname. Samething for other object types. 
	void Start () {
		OK.onClick.AddListener (TaskOnClick);
		button1.onClick.AddListener (PlayerButtonClicked1);
		button2.onClick.AddListener (PlayerButtonClicked2);
		button3.onClick.AddListener (PlayerButtonClicked3);
		button4.onClick.AddListener (PlayerButtonClicked4);
	}

	void Update() {
		//Calculate banker score
		bankerScore = 0;
		foreach (GameObject house in GameObject.FindGameObjectsWithTag("houses")) {
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")){
				if (house.GetComponent<Renderer> ().bounds.Intersects (coin.GetComponent<Renderer> ().bounds)) {
					bankerScore += 1;
				}
			}
		}

	}


	// Move the warehouses to the front/back when OK button is clicked, and the two toggles implements other game mode features.
	void TaskOnClick () {
		foreach (GameObject square in GameObject.FindGameObjectsWithTag("houses")) {
			square.GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
		}

		GameObject.FindGameObjectWithTag("coverer").GetComponent<SpriteRenderer> ().sortingLayerName = targetLayer;
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

	// Almost everything when you change mode, details explained in specific codes.
	void ToggleMode() {
		if (mode == "banker") {
			mode = "robber";

			destroyedNumber = 0;
			// This is the text on the top of screen.
			ScoreText.text = "You are the robber. You have robbed " + robberScore + "coins of that banker! Haha!";

			// This is the text on the right side of screen. called Note
			note.text = "To Audrey: Whatever note you want to give the robber.";

			// Activate all the buttons and change the button text
			button1.GetComponentInChildren<Text> ().text = "Reveal";
			button2.GetComponentInChildren<Text> ().text = "Reveal";
			button3.GetComponentInChildren<Text> ().text = "Reveal";
			button4.GetComponentInChildren<Text> ().text = "Reveal";
			button1.interactable = true;
			button2.interactable = true;
			button3.interactable = true;
			button4.interactable = true;

			// Deactivate the button of warehouses that are cashed out.
			foreach (Button btn in killed) {
				btn.interactable = false;
			}

			// Robber cannot move coins.
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
				coin.GetComponent<selectScript> ().enabled = false;
			}
				
		} else {

			mode = "banker";

			BombHouse ();
			//This updates the turns left everytime it changes to the banker.
			turnsLeft -= 1;
			turnText.text = turnsLeft + " Nights Left";

			// Whatever discovered by the robber are destroyed so that the banker can nolonger see it.
			foreach (GameObject destroyed in toBeDestroyed) {
				Destroy (destroyed);
			}
			// Empty the destroy list can count again next time. 
			toBeDestroyed.Clear ();


			int score = bankerScore - destroyedNumber + bombScore;

			// This is the text on the top of screen.
			ScoreText.text = "You are the banker. You now have " + score + " coins!";

			// This is the text on the right side of screen. called Note
			note.text = "To Audrey: Whatever note you want to give the banker. You can put it here";





			// I will change this later, so that banker cannot move around old coins.
			//[NOT IMPLEMENTED FUNCTION HERE]
			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
				coin.GetComponent<selectScript> ().enabled = true;
			}
				

			// Update the buttons.
			button1.GetComponentInChildren<Text>().text = "Cash Out";
			button2.GetComponentInChildren<Text>().text = "Cash Out";
			button3.GetComponentInChildren<Text>().text = "Cash Out";
			button4.GetComponentInChildren<Text>().text = "Cash Out";
			button1.interactable = true;
			button2.interactable = true;
			button3.interactable = true;
			button4.interactable = true;
			foreach (Button btn in killed) {
				btn.interactable = false;
			}

		}
	}

	void PlayerButtonClicked1 (){
		if (mode == "robber") {
			// reveal coin/bomb
			square1.GetComponent<SpriteRenderer> ().sortingLayerName = "belowCoin";
			selected = square1;
			button2.interactable = false;
			button3.interactable = false;
			button4.interactable = false;
			CalculateScore ();

		} else {
			// cash out function here
			cashOutSquare1.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
			killed.Add (button1);
			button1.interactable = false;

		}
	}

	void PlayerButtonClicked2 (){
		if (mode == "robber"){
			square2.GetComponent<SpriteRenderer> ().sortingLayerName = "belowCoin";
			selected = square2;
			button1.interactable = false;
			button3.interactable = false;
			button4.interactable = false;
			CalculateScore ();
		}else {
			cashOutSquare2.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
			killed.Add (button2);
			button2.interactable = false;



		}
	}

	void PlayerButtonClicked3 (){
		if (mode == "robber"){
			square3.GetComponent<SpriteRenderer> ().sortingLayerName = "belowCoin";
			selected = square3;
			button2.interactable = false;
			button1.interactable = false;
			button4.interactable = false;
			CalculateScore ();
		}else {
			cashOutSquare3.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
			killed.Add (button3);
			button3.interactable = false;

		}
	}

	void PlayerButtonClicked4 (){
		if (mode == "robber"){
			square4.GetComponent<SpriteRenderer> ().sortingLayerName = "belowCoin";
			selected = square4;
			button2.interactable = false;
			button1.interactable = false;
			button3.interactable = false;
			CalculateScore ();

		}else {
			cashOutSquare4.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
			killed.Add (button4);
			button4.interactable = false;

		}
	}
		// Update the robber score.
		void CalculateScore(){
			Bounds bound = selected.GetComponent<Renderer>().bounds;

			foreach (GameObject coin in GameObject.FindGameObjectsWithTag("coins")) {
				if (bound.Intersects (coin.GetComponent<Renderer> ().bounds)) {
					robberScore += 1;
				destroyedNumber += 1;
					toBeDestroyed.Add(coin);
				ScoreText.text = "Good shot! You now have " + robberScore + " coins!";
				}
			}

			foreach (GameObject bomb in GameObject.FindGameObjectsWithTag("bombs")) {
				if (bound.Intersects (bomb.GetComponent<Renderer>().bounds)) {
				bombScore += 2;

					toBeDestroyed.Add(bomb);
					
					ScoreText.text = "Oh no! You hit the bomb! Banker gets 2 coins! The house is ruined!";
				}
			}


		}
	void BombHouse(){
		foreach(GameObject bomb in GameObject.FindGameObjectsWithTag("bombs")){
			if (bomb.GetComponent<Renderer>().bounds.Intersects(cashOutSquare1.GetComponent<Renderer>().bounds)){
				cashOutSquare1.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
				killed.Add (button1);
				button1.interactable = false;

			}
			if (bomb.GetComponent<Renderer>().bounds.Intersects(cashOutSquare2.GetComponent<Renderer>().bounds)){
				cashOutSquare2.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
				killed.Add (button2);
				button2.interactable = false;

			}
			if (bomb.GetComponent<Renderer>().bounds.Intersects(cashOutSquare3.GetComponent<Renderer>().bounds)){
				cashOutSquare3.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
				killed.Add (button3);
				button3.interactable = false;

			}
			if (bomb.GetComponent<Renderer>().bounds.Intersects(cashOutSquare4.GetComponent<Renderer>().bounds)){
				cashOutSquare4.GetComponent<SpriteRenderer> ().sortingLayerName = "top";
				killed.Add (button4);
				button4.interactable = false;

			}



			}
		}
	}
	



