using UnityEngine;
using System.Collections;

public class planeControl : MonoBehaviour {

	//this is a script which will help the plane move around (hopefully)!
	//plane control 2 major tooooooom

	public float speed = 10;
	public float turnSpeed = 10;
	public float yawAmount = 25;

	private Rigidbody rb;


	void Start () {
	
		rb = GetComponent<Rigidbody> (); //so that u save space and room and ain't wasting through typing a whole getcomponent rigidbody

	}

	void Update () {
		
		float turnAmount = Input.GetAxis("Horizontal") * turnSpeed; 

		float yaw = Input.GetAxis ("Horizontal") * -yawAmount;

		Vector3 rotationAmount = new Vector3 (transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y + turnAmount, yaw); //transform.rotation.eulerAngles.z);

		transform.rotation = Quaternion.Euler (rotationAmount);

		// to make the plane go forward, we're going to set the plane velocity towards the forward axis
		// (the blue line)
		rb.velocity = -transform.right * speed;
		//i fucked up the alignment which determined which way was straight so instead of fixing it, i just cheated and right is now forward
	}
}
