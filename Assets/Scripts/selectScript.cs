using System.Collections;
using UnityEngine;

public class selectScript : MonoBehaviour {
	public GameObject coin;
	void OnMouseDrag(){
		if (gameObject.tag != "rootcoin") {


			Vector3 mousePos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			mousePos.z = 0f;
			transform.position = mousePos;
		}
	}
	void OnMouseDown(){
		if (gameObject.tag == "rootcoin") {
			Instantiate(coin);
		}
	}
		
	}



