using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {

    public GameObject hazard;
    public Vector3 spawnValues;
    public int hazardCount;
    public float spawnWait;
    public float startWait;
    public float waveWait;

    void Start() {
        StartCoroutine(SpawnWaves());
    }

    IEnumerator SpawnWaves() {
        yield return new WaitForSeconds(startWait);//Esperar antes de prosseguir(Começo de jogo)
        while (true) {
            for (int i = 0; i < hazardCount; i++) {
                //Posição randomica dentro da caixa de jogo.
                Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), spawnValues.y, spawnValues.z);
                Quaternion spawnRotation = Quaternion.identity;
                //Cria o asteriode dentro da caixa conforme o valor randomico gerado.
                Instantiate(hazard, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnWait);//Esperar antes de prosseguir(Gerar asteroide)
            }
            yield return new WaitForSeconds(waveWait);//Esperar antes de prosseguir(Conjuntos de asteroides)
        }
    }
}

