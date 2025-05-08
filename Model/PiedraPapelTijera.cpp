//
// Created by Nicolas Carillo Romo on 6/05/25.
//

#include "PiedraPapelTijera.h"
#include <iostream>

void PiedraPapelTijera::mostrarReglas() const {
    cout << "=== Reglas de Piedra, Papel o Tijera ===\n"
         << "1) Elige: 1=Piedra, 2=Papel, 3=Tijera.\n"
         << "2) La máquina elegirá un número al azar.\n"
         << "3) Empate: recuperas tu apuesta.\n"
         << "4) Victoria: ganas 2× lo apostado.\n"
         << "5) Derrota: pierdes la apuesta.\n";
}

float PiedraPapelTijera::jugar(float gonzosApostar) {
    cout << "Tu elección (1=Piedra, 2=Papel, 3=Tijera): ";
    cin >> eleccionJugador;
    eleccionCasino = 1 + rand() % 3;

    static const char* nombres[] = { "?", "Piedra", "Papel", "Tijera" };
    cout << "→ Tú:    " << nombres[eleccionJugador]
         << "\n→ Casino: " << nombres[eleccionCasino] << "\n";

    return calcularResultado(gonzosApostar);
}

float PiedraPapelTijera::calcularResultado(float gonzosApostar) {
    if (eleccionJugador == eleccionCasino) {
        // Empate: devuelve apuesta
        return gonzosApostar;
    }
    // Condiciones de victoria
    bool victoria =
        (eleccionJugador == 1 && eleccionCasino == 3) ||
        (eleccionJugador == 2 && eleccionCasino == 1) ||
        (eleccionJugador == 3 && eleccionCasino == 2);

    if (victoria) return 2 * gonzosApostar;
    return 0;  // Derrota
}

