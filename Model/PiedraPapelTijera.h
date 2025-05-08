//
// Created by Nicolas Carillo Romo on 6/05/25.
//

#ifndef CASINO_PPT_H
#define CASINO_PPT_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class PiedraPapelTijera : public Juego {
public:
    PiedraPapelTijera() { srand(static_cast<unsigned>(time(nullptr))); }
    ~PiedraPapelTijera() override = default;

    float jugar(float gonzosApostar) override;
    void mostrarReglas() const override;
    string nombreJuego() const override;

protected:
    float calcularResultado(float gonzosApostar) override;

private:
    int eleccionJugador;
    int eleccionCasino;
};



#endif // CASINO_PPT_H
