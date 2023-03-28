//Ejercicio 6.14 capitulo 6
//Redondeo de numeros

#include <iostream>
#include <math.h>

using namespace std;
float x;
float redondearAEntero;
float redondearADecimas;
float redondearACentesimas;
float redondearAMilesimas;
int main ()
{
    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.14" << endl;
    cout << "      REDONDEO DE NUMEROS" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
	cout<<"Digite el numero que desea redondear: \n";
	cout<<"Nota: Escriba un numero de maximo 5 decimales \n";
	cin>>x;

	redondearAEntero = floor(x);
	redondearADecimas = floor( x * 10 + 0.5 ) / 10;
	redondearACentesimas = floor( x * 100 + 0.5 ) / 100;
	redondearAMilesimas = floor( x * 1000 + 0.5 ) / 1000;

    cout << "\nNumero sin redondear " << x << endl;
    cout << "\n" << endl;
    cout << "Numero ya redondeado a entero " << redondearAEntero << endl;
    cout << "\n" << endl;
    cout << "Numero ya redondeado a decimales " << redondearADecimas << endl;
    cout << "\n" << endl;
    cout << "Numero ya redondeado a Centesimas " << redondearACentesimas << endl;
    cout << "\n" << endl;
    cout << "Numero ya redondeado a Milesimas " << redondearAMilesimas << endl;
}
