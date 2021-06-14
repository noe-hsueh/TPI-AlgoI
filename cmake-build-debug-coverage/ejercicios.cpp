#include <algorithm>
#include "ejercicios.h"
#include "auxiliares.h"

// EJERCICIO 1
bool posicionValida ( pair < tablero, int > const &p ) {
    bool resp = false;
    resp = esJugadorValido(jugador(p)) && esTableroValido(tableroActual(p));
    return resp;
}

// EJERCICIO 2
bool posicionInicial ( posicion const &p ) {
    bool resp = false;
    resp = piezasEnCoordenadas(tableroActual(p)) && cantidadPiezasAlInicio(tableroActual(p)) && jugador(p) == BLANCO;
    return resp;
}
// EJERCICIO 3    -- FALTA AGREGAR OBSTACULOS
vector <coordenada> casillasAtacadas ( posicion const &p, int j ) {
    vector <coordenada> cA;
    return sonCasillasAtacadas(p,j,cA);
}
// EJERCICIO 4
bool posicionSiguienteCorrecta ( posicion const &p1, posicion const &p2, coordenada o, coordenada d ) {
    bool resp = false;
    resp = jugador(p1) != jugador(p2) && esPosicionSiguiente(p1,p2,o,d);
    return resp;
}



// EJERCICIO 5

void ordenarTablero ( posicion &p ) {
    tablero& t = p.first;
    for(int i = 0; i<ANCHO_TABLERO; i++){
        ordenarFila(t[i]);
    }
}

// EJERCICIO 6
bool finDeLaPartida ( posicion const &p, int &j ) {
    bool resp = false;
    if (esEmpate(p)) {
        j = 0;
        resp = true;
    } else if (esJaqueMate(p)) {
        resp = true;
        j = contrincante(p);
    }
    return resp;
}

// EJERCICIO 7
bool hayJaqueDescubierto(posicion const &p) {
        bool resp = false;
        // completar codigo
        return resp;
}
// EJERCICIO 8
void ejecutarSecuenciaForzada(posicion &p, secuencia s) {
    // completar codigo
    return;
}
// EJERCICIO 9
int seVieneElJaqueEn(posicion const &p) {
    int resp = -1;
    // completar codigo
    return resp;
}
