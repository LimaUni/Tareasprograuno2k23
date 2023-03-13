#ifndef PARTIDOS_H_
#define PARTIDOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

    const int NUMERO_CANDIDATOS1 = 5; //cambio
    const int NUMERO_CANDIDATOS2 = 5; //cambio
    const int NUMERO_CANDIDATOS3 = 5; //cambio
    const int NUMERO_ANIOS = 4; //cambio
    const int MAX_ACTIVIDADES = 20; //cambio
    const int MAX_CALIFICACION_2017 = 1000000; //cambio
    const int MAX_CALIFICACION_2019 = 1000000; //cambio
    const int MAX_CALIFICACION_2021 = 1000000; //cambio
    const int MIN_CALIFICACION = 0; //cambio
    const int MAXIMA_LONGITUD_CADENA = 1000;
    float totalpromedio1=0;
    float totalpromedio2=0;
    float totalpromedio3=0;
    const char PARTIDOS = 3; //cambio

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz1(float matriz[NUMERO_CANDIDATOS1][NUMERO_ANIOS + 1]); //cambio
void llenarMatriz2(float matriz[NUMERO_CANDIDATOS2][NUMERO_ANIOS + 1]); //cambio
void llenarMatriz3(float matriz[NUMERO_CANDIDATOS3][NUMERO_ANIOS + 1]); //cambio
void imprimirMatrizLinea();
void imprimirMatriz1(float matriz1[NUMERO_CANDIDATOS1][NUMERO_ANIOS + 1], char partidos[NUMERO_CANDIDATOS1][MAXIMA_LONGITUD_CADENA]); //cambio
void imprimirMatriz2(float matriz2[NUMERO_CANDIDATOS2][NUMERO_ANIOS + 1], char partidos[NUMERO_CANDIDATOS2][MAXIMA_LONGITUD_CADENA]);//cambio
void imprimirMatriz3(float matriz3[NUMERO_CANDIDATOS3][NUMERO_ANIOS + 1], char partidos[NUMERO_CANDIDATOS3][MAXIMA_LONGITUD_CADENA]);//cambio

#endif

