/*
Deiner J. Vega Hernandez
Juego del buscaminas creado en C++, cuenta con varios niveles.
*/
#include "iostream"
#include "string"
#include "stdlib.h"
#include "time.h"
#include "windows.h"
using namespace std;

int main() {

    int nivel = 0;
    int vidas = 0;
    int intentos = 0;
    int fila =0;
    int columna =0;
    bool fin = false;
    INICIO:
    cout<<endl;
    cout<<"         Bienvenidos al Buscaminas"<<endl;
    cout<<endl;
    cout<<"   Este juego consiste en poder seleccionar"<<endl;
    cout<<"   todos los bloques sin hacer explotar las minas."<<endl;
    cout<<endl;
    NIVEL:
    cout<<endl;
    cout<<"   selecciona el nivel de juego"<<endl;
    cout<<endl;
    cout<<"   Nivel             Vidas           Escribe"<<endl;
    cout<<endl;
    cout<<"   Practica          1000            1"<<endl;
    cout<<"   Facil             8               2"<<endl;
    cout<<"   Medio             5               3"<<endl;
    cout<<"   Dificil           3               4"<<endl;
    cout<<"   Muy Dificil       1               5"<<endl;
    cout<<endl;
    cout<<"   Ingresa el tu Nivel: ";cin>>nivel;cout<<endl;

    switch (nivel) {
        case 1:
            nivel = 10;
            vidas = 1000;
            fin = false;
            intentos=0;
            system("cls");
            break;
        case 2:
            nivel = 8;
            vidas = 8;
            fin = false;
            intentos=0;
            system("cls");
            break;
        case 3:
            nivel = 6;
            vidas = 5;
            fin = false;
            intentos=0;
            system("cls");
            break;
        case 4:
            nivel = 6;
            vidas = 3;
            fin = false;
            intentos=0;
            system("cls");
            break;
        case 5:
            nivel = 5;
            vidas = 1;
            fin = false;
            intentos=0;
            system("cls");
            break;
        default:
            system("cls");
            cout<<"   escribe un nivel valido entre 1 y 5"<<endl;
            goto NIVEL;
            break;
    }

    int m[nivel][nivel];
    string mT[nivel][nivel];
    srand(time(NULL));

    ///* matriz que controla la logica *///
    for (int i = 0;i < nivel; i++) {
        for (int j = 0; j < nivel; j++) {
            m[i][j]=rand()%(2-0) + (i * 100) + (j * 10);
        }
    }
    /* impresion de la matriz oculta
    for (int i = 0;i < nivel; i++) {
        cout<<endl;
        for (int j = 0; j < nivel; j++) {
            cout<<"   "<<m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;*/
    ///* matriz visible para el usuario *///
    for (int i = 0;i < nivel; i++) {
        for (int j = 0; j < nivel; j++) {
            mT[i][j]="#";
        }
    }
    ///* impresion de la matriz visible *///
    cout<<"                 Buscaminas"<<vidas<<endl;
    cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas-1<<endl;
    for (int i = 0;i < nivel; i++) {
        cout<<endl;
        for (int j = 0; j < nivel; j++) {
            cout<<"   "<<mT[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    ///* logica del juego *///
    while (fin == false) {
        FIL:
        cout<<"   digite la fila entre 0 y "<<nivel-1<<" ";cin>>fila;cout<<endl;
        if (fila == 20) {
            /* code */
        }
        if (fila < 0 || fila > nivel-1) {
            cout<<"   escribe un numero entre 0 y "<<nivel-1<<" "<<endl;
            goto FIL;
        }
        COL:
        cout<<"   digite la columna entre 0 y "<<nivel-1<<" ";cin>>columna;cout<<endl;
        if (columna < 0 || columna > nivel-1) {
            cout<<"   escribe un numero entre 0 y "<<nivel-1<<" "<<endl;
            goto COL;
        }
        intentos++;
        if (m[fila][columna]%2== 0) {
            mT[fila][columna] = " ";
        }
        if (m[fila][columna]%2== 1) {
            mT[fila][columna] = "*";
            vidas--;
            if (vidas==0) {
                fin=true;
            }
        }
        system("cls");
        if (fin==false) {
            cout<<"                 Buscaminas"<<vidas<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas-1<<endl;
            for (int i = 0;i < nivel; i++) {
                cout<<endl;
                for (int j = 0; j < nivel; j++) {
                cout<<"   "<<mT[i][j];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        if (fin == true) {
            cout<<"                 Buscaminas"<<vidas<<endl;
            cout<<"     Intentos:"<<intentos<<"      Vidas: "<<vidas<<endl;
            cout<<endl;
            cout<<"                     GAME OVER"<<endl;
            cout<<"                     Has perdido"<<endl;
            cout<<endl;
            Sleep(2000);
            system("cls");
            cout<<"Intentalo nuevamente"<<endl;
            Sleep(1000);
            system("cls");
            goto INICIO;
        }
    }
  return 0;
}
