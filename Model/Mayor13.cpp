//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;


    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}
void Mayor13::mostrarReglas() const {
    cout << "=== Reglas de Mayor13 ===" << endl;
    cout << "1) El sistema genera un número aleatorio entre 1 y 13 para ti." << endl;
    cout << "2) Tienes dos opciones:" << endl;
    cout << "   a) Rendirte: antes de que salga el número del casino, pierdes la mitad de lo apostado." << endl;
    cout << "   b) Jugar: se genera el número aleatorio del casino (1–13) y continúa la ronda." << endl;
    cout << "3) Si tu número es mayor que el número del casino, ganas el doble de lo apostado." << endl;
    cout << "4) Si tu número es menor o igual al número del casino, pierdes todo lo apostado." << endl;
}