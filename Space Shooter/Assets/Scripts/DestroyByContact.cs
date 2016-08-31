﻿using UnityEngine;
using System.Collections;

public class DestroyByContact : MonoBehaviour {
    
    public GameObject explosion;//Animação de explosao dos asteroides.
    public GameObject playerExplosion;//Animação de explosao do player.

    void OnTriggerEnter(Collider other) {
        if (other.tag == "Boundary") {
            return;
        }
        Instantiate(explosion, transform.position, transform.rotation);//Cria a animação de explosao dos asteroides.
        if (other.tag == "Player") {
            Instantiate(playerExplosion, other.transform.position, other.transform.rotation);//Cria a animação de explosao do player.
            //gameController.GameOver();
        }
        //Destroy outros objetos
        Destroy(other.gameObject);
        //Destroy objetos que se colidirem
        Destroy(gameObject);
    }
}