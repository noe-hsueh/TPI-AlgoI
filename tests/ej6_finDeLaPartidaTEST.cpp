#include "../definiciones.h"
#include "../ejercicios.h"
#include "../auxiliares.h"
#include "gtest/gtest.h"
# include <utility>

using namespace std;

TEST(finDeLaPartidaTEST, partidaNoFinalizada){
	tablero t = {	//Tablero inicial
    {cTORRE_N,  cVACIA,     cALFIL_N,   cVACIA,     cREY_N,     cALFIL_N,   cVACIA,     cTORRE_N},
    {cPEON_N,   cPEON_N,    cPEON_N,    cPEON_N,    cPEON_N,    cPEON_N,    cPEON_N,    cPEON_N},
    {cVACIA,    cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA},
    {cVACIA,    cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA},
    {cVACIA,    cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA},
    {cVACIA,    cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA,     cVACIA},
    {cPEON_B,   cPEON_B,    cPEON_B,    cPEON_B,    cPEON_B,    cPEON_B,    cPEON_B,    cPEON_B},
    {cTORRE_B,  cVACIA,     cALFIL_B,   cVACIA,     cREY_B,     cALFIL_B,   cVACIA,     cTORRE_B},
    };
    posicion p = make_pair(t,BLANCO);
    int j;

    EXPECT_FALSE(finDeLaPartida(p,j));
}

TEST(finDeLaPartidaTEST, partidaNoFinalizada2){
    tablero t = {	// En jaque pero con movidas legales
            {cREY_N, cVACIA, cVACIA, cTORRE_N, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cALFIL_B, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cREY_B,   cVACIA, cVACIA, cVACIA, cVACIA},
    };
    posicion p = make_pair(t,BLANCO);
    int j;

    EXPECT_FALSE(finDeLaPartida(p,j));
}

TEST(finDeLaPartidaTEST, jaqueMate){
	tablero t = {	// Figura 4a del enunciado del TPE
            {cVACIA, cVACIA, cVACIA, cVACIA, cTORRE_B, cVACIA, cVACIA, cREY_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cPEON_N, cPEON_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cPEON_N, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cREY_B, cVACIA, cVACIA, cVACIA, cVACIA},
    };
    posicion p = make_pair(t,NEGRO);
    int j;

    EXPECT_TRUE(finDeLaPartida(p,j));
    EXPECT_EQ(j, BLANCO);
}
TEST(finDeLaPartidaTEST, jaqueMate2){
    tablero t = {
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cALFIL_N, cREY_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cPEON_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cALFIL_B, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cREY_B, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
    };
    posicion p = make_pair(t,NEGRO);
    int j;

    EXPECT_TRUE(finDeLaPartida(p,j));
    EXPECT_EQ(j, BLANCO);
}

TEST(finDeLaPartidaTEST, esEmpate_soloReyes){
    tablero t = {	// Solo Reyes
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cREY_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cREY_B, cVACIA, cVACIA, cVACIA, cVACIA},
    };
    posicion p = make_pair(t,NEGRO);
    int j;

    EXPECT_TRUE(finDeLaPartida(p,j));
    EXPECT_EQ(j, 0);
}

TEST(finDeLaPartidaTEST, esEmpate_mateAhogado){
    tablero t = {	// mateAhogado
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cREY_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cPEON_N},
            {cVACIA, cVACIA, cVACIA, cVACIA, cALFIL_B, cVACIA, cVACIA, cPEON_B},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA, cVACIA, cVACIA, cREY_B, cVACIA, cVACIA, cVACIA, cVACIA},
    };
    posicion p = make_pair(t,NEGRO);
    int j;

    EXPECT_TRUE(finDeLaPartida(p,j));
    EXPECT_EQ(j, 0);
}

TEST(finDeLaPartidaTEST, esEmpate_mateAhogado2){
    tablero t = {	// mateAhogado 2
                // imagen : https://es.wikipedia.org/wiki/Ahogado_(ajedrez)
            {cVACIA,   cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA,   cTORRE_B, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA,   cVACIA,   cVACIA, cVACIA, cREY_N, cPEON_B, cVACIA, cVACIA},
            {cTORRE_B, cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA, cPEON_B, cVACIA},
            {cVACIA,   cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA,   cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA,   cVACIA,   cVACIA, cVACIA, cVACIA, cVACIA, cVACIA, cVACIA},
            {cVACIA,   cVACIA,   cVACIA, cTORRE_B, cVACIA, cVACIA, cREY_B, cVACIA},
    };
    posicion p = make_pair(t,NEGRO);
    int j;

    EXPECT_TRUE(finDeLaPartida(p,j));
    EXPECT_EQ(j, 0);
}