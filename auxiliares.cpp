#include "definiciones.h"
#include "auxiliares.h"



using namespace std;
// aqui se pueden ubicar todas las funciones auxiliares de soporte para la resolucion de los ejercicios

///////////// AUXILIARES DE EJERCICIO CPP /////////////
//// Ejercicio 1
bool esJugadorValido(int j) {
    return (j == BLANCO || j == NEGRO);
}

bool esMatriz(tablero tablero) {
    return (tablero.size() == tablero[0].size() && tablero[0].size() == 8);
}

bool casillaVacia(casilla & cs) {
    return cs.first == VACIO && cs.second == VACIO;
}

bool esUnaPieza(casilla& cs ){
    bool res;
    res = esJugadorValido(cs.second) &&
            (cs.first == PEON || cs.first == ALFIL ||
            cs.first == TORRE || cs.first == REY );
    return res;
}
bool casillasValidas(tablero t) {
    bool res= true;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int j = 0; j < t[i].size(); ++j) {
            res = res && (casillaVacia(t[i][j]) || esUnaPieza(t[i][j]));
        }
    }
    return res;
}

bool cantidadValidaDePiezas(tablero t) {
    int cantPeonesBlancos = 0;
    int cantPeonesNegros = 0;
    int cantAlfilesBlancos = 0;
    int cantAlfilesNegros = 0;
    int cantTorresBlancas = 0;
    int cantTorresNegras = 0;
    int reyBlanco = 0;
    int reyNegro = 0;
    for (int i = 0; i < t.size(); i++){
        for (int j = 0; j < t[0].size(); j++){
            if (t[i][j].first == PEON){
                if (t[i][j].second == BLANCO) {
                    cantPeonesBlancos = cantPeonesBlancos + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantPeonesNegros = cantPeonesNegros + 1;
                }
            }
            else if (t[i][j].first == ALFIL){
                if (t[i][j].second == BLANCO) {
                    cantAlfilesBlancos = cantAlfilesBlancos + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantAlfilesNegros = cantAlfilesNegros + 1;
                }
            }
            else if (t[i][j].first == TORRE){
                if (t[i][j].second == BLANCO) {
                    cantTorresBlancas = cantTorresBlancas + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantTorresNegras = cantTorresNegras + 1;
                }
            }
            else if (t[i][j].first == REY) {
                if (t[i][j].second == BLANCO) {
                    reyBlanco = reyBlanco + 1;
                }
                if (t[i][j].second == NEGRO) {
                    reyNegro = reyNegro + 1;
                }
            }
        }
    }
    return (cantPeonesBlancos <= 8 && cantPeonesNegros <= 8 && cantAlfilesBlancos <= 2 &&
    cantAlfilesNegros <= 2 && cantTorresBlancas <= 2 && cantTorresNegras <= 2 && reyBlanco == 1 && reyNegro == 1);
}

bool sinPeonesNoCoronados(tablero t) {
    for (int i = 0; i < ANCHO_TABLERO; i++){
        if (t[0][i].first == PEON || t[7][i].first == PEON){
            return false;
        }
    }
    return true;
}

bool esTableroValido(tablero t) {
    bool res;
    res = esMatriz(t) && casillasValidas(t) && sinPeonesNoCoronados(t) &&  cantidadValidaDePiezas(t);
    return res;
}

//// EJERCICIO 2 ////

bool peonesEnCoordenadas(tablero t){
    for (int i = 0; i < t.size(); i++){
        if (t[1][i] != cPEON_N || t[6][i] != cPEON_B){
            return false;
        }
    }
    return true;
}

bool torresEnCoordenadas(tablero t) {
    return t[0][0] == cTORRE_N && t[0][7] == cTORRE_N &&
    t[7][0] == cTORRE_B && t[7][7] == cTORRE_B;
}

bool alfilesEnCoordenadas(tablero t) {
    return t[7][2]== cALFIL_B && t[7][5]==cALFIL_B && t[0][2]==cALFIL_N && t[0][5]==cALFIL_N;
}

bool reyesEnCoordenadas(tablero t) {
    return t[7][4]==cREY_B && t[0][4]==cREY_N;
}

bool piezasEnCoordenadas(tablero t) {
    return peonesEnCoordenadas(t) && torresEnCoordenadas(t) && alfilesEnCoordenadas(t) && reyesEnCoordenadas(t);
}

bool cantidadPiezasAlInicio(tablero t) {
    int cantPeonesBlancos = 0;
    int cantPeonesNegros = 0;
    int cantAlfilesBlancos = 0;
    int cantAlfilesNegros = 0;
    int cantTorresBlancas = 0;
    int cantTorresNegras = 0;
    int reyBlanco = 0;
    int reyNegro = 0;
    for (int i = 0; i < t.size(); i++){
        for (int j = 0; j < t[0].size(); j++){
            if (t[i][j].first == PEON){
                if (t[i][j].second == BLANCO) {
                    cantPeonesBlancos = cantPeonesBlancos + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantPeonesNegros = cantPeonesNegros + 1;
                }
            }
            else if (t[i][j].first == ALFIL){
                if (t[i][j].second == BLANCO) {
                    cantAlfilesBlancos = cantAlfilesBlancos + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantAlfilesNegros = cantAlfilesNegros + 1;
                }
            }
            else if (t[i][j].first == TORRE){
                if (t[i][j].second == BLANCO) {
                    cantTorresBlancas = cantTorresBlancas + 1;
                }
                if (t[i][j].second == NEGRO) {
                    cantTorresNegras = cantTorresNegras + 1;
                }
            }
            else if (t[i][j].first == REY) {
                if (t[i][j].second == BLANCO) {
                    reyBlanco = reyBlanco + 1;
                }
                if (t[i][j].second == NEGRO) {
                    reyNegro = reyNegro + 1;
                }
            }
        }
    }
    return (cantPeonesBlancos == 8 && cantPeonesNegros == 8 && cantAlfilesBlancos == 2 &&
            cantAlfilesNegros == 2 && cantTorresBlancas == 2 && cantTorresNegras == 2 &&
            reyBlanco==1 && reyNegro==1);
}

//// EJERCICIO 3 ////

bool capturaValidaPeon(tablero t, int i, int k, coordenada c) {
    if (t[i][k] == cPEON_B && c.first == i-1 && (c.second == k+1 || c.second == k-1)){
        return true;
    }
    else if (t[i][k] == cPEON_N && c.first == i+1 && (c.second == k+1 || c.second == k-1)){
        return true;
    }
    return false;
}


bool movimientoValidoRey(tablero t, int i, int k, coordenada c) {
    if (t[i][k].first == REY){
        if ((c.first == i-1 && c.second == k) || (c.first == i+1 && c.second == k) ||
            (c.first == i && c.second == k-1) || (c.first == i && c.second == k+1) ||
            (c.first == i+1 && c.second == k+1) || (c.first == i+1 && c.second == k-1) ||
            (c.first == i-1 && c.second == k+1) || (c.first == i-1 && c.second == k-1)) {
            return true;
        }
    }
    return false;
}

bool movimientoValidoTorre(tablero t, int i, int k, coordenada c) {
    bool res = false; 
    if (t[i][k].first == TORRE) {
        res=true;
        if (i==c.first && c.second-k > 0){ // movimiento horizontal - derecha
            int columna_inicial = k + 1, columna_final = c.second;
            for (int l = columna_inicial; l<columna_final; ++l) {
                res = res && casillaVacia(t[i][l]);
            }
        }
        else if(i==c.first && c.second-k < 0){ // movimiento horizontal - izquierda
            int columna_inicial = k - 1, columna_final = c.second;
            for (int l = columna_inicial; l>columna_final; l--) {
                res = res && casillaVacia(t[i][l]);
            }
        }
        else if (c.first - i > 0 && k==c.second){ // movimiento vertical - abajo
            int fila_inicial = i + 1, fila_final = c.first;
            for (int l = fila_inicial; l<fila_final; ++l) {
                res = res && casillaVacia(t[l][k]);
            }
        }
        else if (c.first - i < 0 && k==c.second){ // movimiento vertical - arriba
            int fila_inicial = i - 1, fila_final = c.first;
            for (int l = fila_inicial; l>fila_final; l--) {
                res = res && casillaVacia(t[l][k]);
            }
        }
        else{
            return false;
        }
    }
    return res;
}

bool movimientoValidoAlfil(tablero t, int i, int k, coordenada c) {
    bool res = false;
    if (t[i][k].first == ALFIL && abs(c.first-i) == abs(c.second-k)){
        res= true;
        if (c.first - i > 0 && c.second - k > 0) { // diagonal abajo-derecha
            int a = 1;
            int b = 1;
            while (i+a < c.first && k+b < c.second){
                    res = res && t[i+a][k+b] == cVACIA;
                    a++;
                    b++;
            }
        }
        else if (c.first - i > 0 && c.second - k < 0){ // diagonal abajo-izquierda
            int a = 1;
            int b = -1;
            while (i+a < c.first && k+b > c.second){
                    res = res && t[i+a][k+b] == cVACIA;
                    a++;
                    b--;
            }
        }
        else if (c.first - i < 0 && c.second - k > 0) { // diagonal arriba-derecha
            int a = -1;
            int b = 1;
            while (i+a > c.first && k+b < c.second){
                    res = res && t[i+a][k+b] == cVACIA;
                    a--;
                    b++;
            }
        }
        else if (c.first - i < 0 && c.second - k < 0) { // diagonal arriba-izquierda
            int a = -1;
            int b = -1;
            while (i+a > c.first && k+b > c.second){
                    res = res && t[i+a][k+b] == cVACIA;
                    a--;
                    b--;
            }
        }
        else{
            return false;
        }
    }
    return res;
}

bool esCasillaAtacada(tablero t, int j, coordenada c) {
    for (int i = 0; i < t.size(); i++) {
        for (int k = 0; k < t[0].size(); k++) {
            if (t[i][k].second == j){
                if (capturaValidaPeon(t,i,k,c)){
                    return true;
                }
                else if (movimientoValidoRey(t,i,k,c)){
                    return true;
                }
                else if (movimientoValidoTorre(t,i,k,c)) {
                    return true;
                }
                else if (movimientoValidoAlfil(t,i,k,c)){
                    return true;
                }
            }
        }
    }
    return false;
}

vector<coordenada> sonCasillasAtacadas(const posicion &p, int j, vector<coordenada> cA) {
    for (int i = 0; i < (p.first).size(); i++){
        for (int k = 0; k < (p.first)[0].size(); k++){
           coordenada c = setCoord(i,k);
            if (esCasillaAtacada(p.first, j, c)){
                cA.push_back(c);
            }
        }
    }
    return cA;
}

//// EJERCICIO 4 ////

bool movimientoValidoPeon(tablero t1, int i, int k, coordenada c) {
    if (t1[i][k] == cPEON_B && c.first == i-1 && c.second == k){
        return true;
    }
    else if (t1[i][k] == cPEON_N && c.first == i+1 && c.second == k){
        return true;
    }
    return false;
}

bool esMovimientoValido(const posicion &p1, coordenada o, coordenada d) {
    return p1.first[d.first][d.second] == cVACIA && (movimientoValidoPeon(p1.first,o.first,o.second,d) ||
                                                     movimientoValidoAlfil(p1.first,o.first,o.second,d) ||
                                                     movimientoValidoTorre(p1.first,o.first,o.second,d) ||
                                                     movimientoValidoRey(p1.first,o.first,o.second,d));;
}

bool esCapturaValida(const posicion &p1, coordenada o, coordenada d) {
    return (p1.first[d.first][d.second] != cVACIA && color(p1, o) != color(p1, d)) &&
           (capturaValidaPeon(p1.first, o.first, o.second, d) || movimientoValidoAlfil(p1.first, o.first, o.second, d) ||
            movimientoValidoTorre(p1.first,o.first,o.second,d) || movimientoValidoRey(p1.first,o.first,o.second,d));;
}

bool posicionesIgualesExceptoEn(const posicion &p1, const posicion &p2, coordenada o, coordenada d) {
    tablero t1 = p1.first, t2 = p2.first;
    bool res = true;
    for(int i = 0; i<t1.size(); i++){
        for(int j = 0; j<t1[0].size(); j++){
            if((i == o.first && j == o.second) || (i == d.first && j == d.second)){
                res = res && t1[i][j] != t2[i][j];
            }
            else{
                res = res && t1[i][j] == t2[i][j];
            }
        }
    }
    return res;
}

bool piezaCorrectaEnDestino(posicion p1, posicion p2, coordenada o, coordenada d) {
    bool res = true;
    tablero t1 = p1.first, t2 = p2.first;
    if (t1[o.first][o.second].first == PEON && (d.first == 0 || d.first == 7)) {
        res = t2[d.first][d.second].first == TORRE;
    }
    res = res && color(p1,o) == color(p2,d);
    return res;
}

bool esPosicionSiguiente(const posicion &p1, const posicion &p2, coordenada o, coordenada d) {
    bool res;
    tablero t1= p1.first, t2=p2.first;
    res = posicionesIgualesExceptoEn(p1, p2, o, d) && casillaVacia(t2[o.first][o.second]) &&
            (esMovimientoValido(p1,o,d) || esCapturaValida(p1,o,d)) && piezaCorrectaEnDestino(p1,p2,o,d);
    return res;
}

//// EJERCICIO 5 ////

int indiceCasillaMinimaSubsec(vector<casilla> fila, int d) {
    int min=d;
    for (int j = d+1; j < fila.size(); ++j) {
        if (!casillaVacia(fila[j])){
            if (fila[j].first < fila[min].first)
                min=j;
        }
    }
    return min;
}

void hacer_swap(vector<casilla>& fila, int a, int b) {
    casilla temp = fila[a];
    fila[a]=fila[b];
    fila[b]=temp;
}

void ordenarFila(vector<casilla>& fila) {
    for (int j = 0; j < ANCHO_TABLERO; j++){
        if (!casillaVacia(fila[j])){
            int min_casilla = indiceCasillaMinimaSubsec(fila, j);
            hacer_swap(fila, j, min_casilla);
        }
    }
}


//// EJERCICIO 6 ////

coordenada acaEstaElRey(const posicion &p, int j) {
    tablero t = p.first;
    coordenada c;
    for (int i = 0; i < t.size(); i++) {
        for (int k = 0; k < t[0].size(); k++) {
            if (t[i][k].first == REY && t[i][k].second == j) {
                c = setCoord(i, k);
            }
        }
    }
    return c;
}
int contrincante(int j){
    if (j==BLANCO){
        return NEGRO;
    } else {
        return BLANCO;
    }
}


bool soloHayReyes(const posicion &p) {
    tablero t = p.first;
    int reyBlanco = 0;
    int reyNegro = 0;
    for(int i = 0; i<t.size(); i++){
        for(int j = 0; j<t[0].size(); j++){
            if (t[i][j].first == REY) {
                if (t[i][j].second == BLANCO) {
                    reyBlanco = reyBlanco + 1;
                }
                if (t[i][j].second == NEGRO) {
                    reyNegro = reyNegro + 1;
                }
            }
            else{
                if (t[i][j] != cVACIA)
                    return false;
            }
        }
    }
    return reyBlanco == 1 && reyNegro == 1;
}

bool atacaAlRey(const posicion &q, coordenada o, int j) {
    coordenada d = acaEstaElRey(q,j);
    return esCapturaValida(q,o,d);
}



bool jugadorEnJaque(const posicion& p, int j ){
    bool res= false;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int k = 0; k < ANCHO_TABLERO; ++k) {
            coordenada c= setCoord(i,k);
            if (color(p,c)== contrincante(j)){
                res= res || atacaAlRey(p,c,j);
            }
        }
    }
    return res;
}

bool hayMovimientosLegales(const posicion &p) {
    tablero t = p.first;
    coordenada o;
    coordenada d;
    int cantMovimientosLegales = 0;
    for(int i = 0; i<t.size(); i++) {
        for (int j = 0; j < t[0].size(); j++) {
            o = setCoord(i,j);
            if(t[i][j] != cVACIA && color(p,o)== jugador(p) ){
                for(int a = 0; a<t.size(); a++){
                    for(int b = 0; b<t[0].size(); b++){
                        d = setCoord(a,b);
                        if(esJugadaLegal(p,o,d)){
                            cantMovimientosLegales = cantMovimientosLegales + 1;
                        }
                    }
                }
            }
        }
    }
    return cantMovimientosLegales > 0;
}


bool esEmpate(const posicion &p) {
    return soloHayReyes(p) || (!jugadorEnJaque(p,p.second) && !hayMovimientosLegales(p));
}


void swapear_piezas(tablero& t, coordenada &o, coordenada &d) {
    // d es cVacia
    if ((d.first==0 || d.first==7) && t[o.first][o.second].first == PEON){
        if (t[o.first][o.second].second == BLANCO){
            t[d.first][d.second]=cTORRE_B;
        }
        else{
            t[d.first][d.second]=cTORRE_N;
        }
        t[o.first][o.second]=cVACIA;
    } else {
        t[d.first][d.second]=t[o.first][o.second];
        t[o.first][o.second]=cVACIA;
    }
}



void moverPieza(posicion &p, coordenada &o, coordenada &d) {
    p.second= contrincante(jugador(p));
    if (casillaVacia(p.first[d.first][d.second])){
        swapear_piezas(p.first,o,d);
    } else {
        p.first[d.first][d.second] = cVACIA;
        swapear_piezas(p.first, o, d);
    }
}

bool loPoneEnJaque(const posicion &p, coordenada &o, coordenada &d) {
    posicion q=p;
    if(esCapturaValida(p,o,d) || esMovimientoValido(p,o,d)) {
        moverPieza(q, o, d);
    }
    return jugadorEnJaque(q, p.second);
}

bool esJugadaLegal(const posicion& p, coordenada& o, coordenada& d) {
    bool res1=(esMovimientoValido(p,o,d) || esCapturaValida(p,o,d)),
    res2=!loPoneEnJaque(p,o,d);
    return res1 && res2;
}

bool tieneJugadaLegal(const posicion &p, coordenada o) {
    bool res= false;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int j = 0; j < ANCHO_TABLERO; ++j) {
            coordenada d= setCoord(i,j);
            if(esJugadaLegal(p,o,d)){
                res= true;
            }
        }
    }
    return res;
}

bool existeMovimientosParaSalirDelJaque(const posicion &p) {
    // el jugador esta en jaque
    bool res= false;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int k = 0; k < ANCHO_TABLERO; ++k) {
            coordenada c= setCoord(i,k);
            if( p.first[i][k] != cVACIA && color(p,c)==p.second){
                res = res || tieneJugadaLegal(p,c);
            }
        }
    }
    return res;
}

bool esJaqueMate(const posicion& p){
    int jugador = p.second;
    return  jugadorEnJaque(p,jugador) && !existeMovimientosParaSalirDelJaque(p) ;
}

//// EJERCICIO 7 ////

bool alMoverQuedaEnJaqueDestino(const posicion &p, coordenada& o) {
    bool res= false;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int j = 0; j < ANCHO_TABLERO; ++j) {
            coordenada d = setCoord(i,j);
            if (esMovimientoValido(p,o,d) || esCapturaValida(p,o,d)){
                posicion q = p;
                moverPieza(q, o, d);
                res = res || jugadorEnJaque(q, q.second);
            }
        }
    }
    return res;
}

bool alMoverQuedaEnJaque(const posicion &p) {
    bool res = false;
    for (int i = 0; i < ANCHO_TABLERO; ++i) {
        for (int j = 0; j < ANCHO_TABLERO; ++j) {
            coordenada o = setCoord(i,j);
            if (color(p,o) == jugador(p)){
                res = res || alMoverQuedaEnJaqueDestino(p,o);
            }
        }
    }
    return res;
}






///////////////////////////////////////////////////

pair<int,int> mp(int a, int b) {
    return make_pair(a, b);
}

// TEST
vector<pair<int,int>> ordenarVectorPares(vector<pair<int,int>> &v) {
    sort(v.begin(), v.end());
//    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
}

coordenada setCoord(int i, int j) {
    return make_pair(i,j);
}

tablero tableroActual ( posicion const &p ) {
    return p.first;
}

tablero inicializarTablero(){
    vector<casilla> fila(ANCHO_TABLERO, cVACIA);
    tablero out(ANCHO_TABLERO, fila);
    return out;
}

int color(const posicion &p, coordenada c) {
    return p.first[c.first][c.second].second;
}

int pieza(const posicion& p, coordenada c){
    return p.first[c.first][c.second].first;
}

int jugador(const posicion &p) {
    return p.second;
}

