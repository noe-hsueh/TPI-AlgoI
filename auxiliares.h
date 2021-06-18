//


#ifndef AJEDREZLITE_AUXILIARES_H
#define AJEDREZLITE_AUXILIARES_H

#include "definiciones.h"

using namespace std;
// definir aqui las funciones

///////////// AUXILIARES DE EJERCICIO CPP /////////////

///// Ejercicio 1
bool esJugadorValido(int j);
bool esTableroValido(tablero t);

///// Ejercicio 2
bool piezasEnCoordenadas(tablero vector);
bool cantidadPiezasAlInicio(tablero vector);

///// Ejercicio 3
bool esCasillaAtacada(tablero t, int j, coordenada c);
vector<coordenada> sonCasillasAtacadas(const posicion &p, int j, vector<coordenada> cA);

///// Ejercicio 4
bool esPosicionSiguiente(const posicion &p1, const posicion &p2, coordenada o, coordenada d);

///// Ejercicio 5
void esTableroOrdenado(tablero &t1, tablero &t2);
void ordenarFila(vector<casilla>& fila);

///// Ejercicio 6
bool esEmpate(const posicion &p);
coordenada acaEstaElRey(posicion &p, int j);
int contrincante(int j);
bool esJaqueMate(const posicion& p);

// otros auxiliares
bool loPoneEnJaque(const posicion &p, coordenada &o, coordenada &d);
bool esJugadaLegal(const posicion& p, coordenada& o, coordenada& d);
bool tieneJugadaLegal(const posicion &p, coordenada o);
void moverPieza(posicion &p, coordenada &o, coordenada &d);

//// Ejercicio 7
bool alMoverQuedaEnJaque(const posicion &pair);

//// Ejercicio 8
void moverPiezaForzada(posicion &p);

/// Ejercicio 9
bool hayMateForzadoEn(const posicion &p, int k);




//////////////////////////////////////////////////////

pair<int,int> mp(int a, int b);

vector<pair<int,int>> ordenarVectorPares(vector<pair<int,int>> &v);
tablero inicializarTablero();
coordenada setCoord(int i, int j);
tablero tableroActual ( posicion const &p );
int color(const posicion &p, coordenada c);
int jugador(const posicion &p);
#endif //AJEDREZLITE_AUXILIARES_H
