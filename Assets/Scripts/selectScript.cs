using System.Collections;
using UnityEngine;

public class selectScript : MonoBehaviour {
	void OnMouseDrag(){

		Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		mousePos.z = 0f;
		transform.position = mousePos;

	}
		
}
