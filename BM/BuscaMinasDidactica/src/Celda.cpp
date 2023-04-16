//Librerías usadas:
#include "Celda.h"
#include <iostream>
//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego y la libreria iostream.
//Fecha: 17 marzo 2023
using namespace std;
Celda::Celda()
{
}
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;
        return true;
    }
}
bool Celda::getMina()
{
    return this->mina;
}
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


