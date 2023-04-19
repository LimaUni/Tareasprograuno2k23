//Ejercicio 6.12 capitulo 6

//(Cargos de estacionamiento) Un estacionamiento cobra una cuota mínima de $2.00 por estacionarse
//hasta tres horas. El estacionamiento cobra $0.50 adicionales por cada hora o fracción que se pase de tres horas. El
//cargo máximo para cualquier periodo dado de 24 horas es de $10.00. Suponga que ningún automóvil se estaciona
//durante más de 24 horas a la vez. Escriba un programa que calcule e imprima los cargos por estacionamiento para
//cada uno de tres clientes que estacionaron su automóvil ayer en este estacionamiento. Debe introducir las horas de
//estacionamiento para cada cliente. El programa debe imprimir los resultados en un formato tabular ordenado, debe
//calcular e imprimir el total de los recibos de ayer. El programa debe utilizar la función calcularCargos para
//determinar el cargo para cada cliente.

// Ejercicio 6.12

#include <iostream>
#include <iomanip>

using namespace std;

float calculaCargo(float x);

int main()
{


    float horas1;
    float horas2;
    float horas3;
    float cargo1;
    float cargo2;
    float cargo3;
    float totalHoras;
    float totalCargo;


    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.12" << endl;
    cout << "           PARQUEO" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
    cout << "Horas del automovil 1: ";
    cin >> horas1;
    cout << "Horas del automovil 2: ";
    cin >> horas2;
    cout << "Horas del automovil 3: ";
    cin >> horas3;

    cout << endl;
    cout << "Automovil" << setw(8) << "Horas" << setw(8) << "Cargo";
    cout << "" << endl;
    cout <<  setw(5) << 1;
    cargo1 = calculaCargo(horas1);
    cout << setw(5) << 2;
    cargo2 = calculaCargo(horas2);
    cout << setw(5) << 3;
    cargo3 = calculaCargo(horas3);

    totalHoras = horas1 + horas2 + horas3;
    totalCargo = cargo1 + cargo2 + cargo3;

    cout << "  Total" << setw(8) << totalHoras << setw(10) << totalCargo << endl;
    return 0;
}
float calculaCargo(float x)
{
      cout << setw(10) << x;
      if((int)x <= 3)
        {
           cout << setw(7) << 2.0;
           return 2.0;
        }
      else
        {
         if((int)x == 24){
              cout << setw(10) << 10.0;
              return 10.0;
         }
         else
         {
             cout <<  setw(9) << (((int)x - 3) * 0.5) + 2 << endl;
             return (((int)x - 3) * 0.5) + 2;
         }
      }
}
