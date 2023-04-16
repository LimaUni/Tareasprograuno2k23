#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |            CONFIGURACION            | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
        cout << "\        -------------------------------------------------"<< endl;
        cout << "                *=================================*"<< endl;
        cout << "                |  1. Filas del Tablero        |" << this->getfilasTablero() <<"|"<< endl;
        cout << "                |  2. Columnas del Tablero     |" << this->getcolumnasTablero() <<"|"<< endl;
        cout << "                |  3. Minas del Tablero        |" << this->getminasTablero() <<"|"<< endl;
        cout << "                |  4. Modo del Juego           |" << this->getmodoDesarrolladorTablero() <<"|"<< endl;
        cout << "                |  5. Vidas del Jugador        |" << this->getvidasTablero() <<"|"<< endl;
        cout << "                *================================*"<< endl;
        cout << "                |  6. Regresar al menu general   |"<< endl;
        cout << "                *=================================*"<< endl;
        cin >> opciones;
        if (opciones!=6)
        {
            cout << "          *=====================================*"<< endl;
            cout << "          | Ingrese el valor que desea cambiar: | "<< endl;
            cout << "          *=====================================*"<< endl;
            cin >> valorIngresado;
        }
        switch (opciones)
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado);
            cout << "          *================================*"<< endl;
            cout << "          | Filas del tablero actualizadas | "<< endl;
            cout << "          *================================*"<< endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
            cout << "       *===================================*"<< endl;
            cout << "       | Columnas del tablero actualizadas | "<< endl;
            cout << "       *===================================*"<< endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
            cout << "      *================================*"<< endl;
            cout << "      | Minas del tablero actualizadas | "<< endl;
            cout << "      *================================*"<< endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
            cout << "      *===========================*"<< endl;
            cout << "      | Modo de Juego actualizado | "<< endl;
            cout << "      *===========================*"<< endl;
                break;
            }
        case 5:
            {
                if (valorIngresado<= this->minasTablero)
                {
                    this->setvidasTablero(valorIngresado);
                    cout << "    *================================*"<< endl;
                    cout << "    | Vidas del jugador actualizadas | "<< endl;
                    cout << "    *================================*"<< endl;
                }
                else{
                cout << "   *=============================================================================================*"<< endl;
                cout << "   | Valor ingresado no aceptado, las vidas no deben ser mayor a la cantidad de minas (tramposo) |" << endl;
                cout << "   *=============================================================================================*"<< endl;
                }
                break;
            }
        case 6: repetir = false;
                break;
        }
        system("pause");
    } while (repetir);
}
int Config::getfilasTablero()
{
    return this->filasTablero;
}
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;
}
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}
int Config::getminasTablero()
{
    return this->minasTablero;
}
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}
int Config::getvidasTablero()
{
    return this->vidasTablero;
}
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}


