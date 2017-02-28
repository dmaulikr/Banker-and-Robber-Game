using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class selectScript : MonoBehaviour {
	void OnMouseDrag(){

		Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		mousePos.z = 0f;
		transform.position = mousePos;

	}

	//	
//	bool selected;
//	public Vector3 target;
//
//	// Use this for initialization
//	void Start () {
//		selected = false;
//		target = transform.position;
//	}
//
//	void OnMouseDown () {
//		selected = !selected;
//	}
//
//	// Update is called once per frame
//	void Update () {
//		if (selected) {
//			if(Input.GetMouseButtonDown(0))
//			{
//				target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
//				target.z = transform.position.z;
//			}
//			transform.position = Vector3.MoveTowards (transform.position, target, Time.deltaTime * 5);
//		}
//
//	}
}
