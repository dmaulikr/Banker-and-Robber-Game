using System.Collections;
using UnityEngine;

public class selectScript : MonoBehaviour {
	public GameObject coin;
	void OnMouseDrag(){


		Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		mousePos.z = 0f;
		transform.position = mousePos;
	}
	void OnMouseDown(){
		if (gameObject.tag == "coins") {
			Instantiate(coin);
		}
	}
		
	}



