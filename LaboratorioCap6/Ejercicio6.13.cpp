//Ejercicio 6.13 capitulo 6
//Redondeo de numeros

#include <iostream>
#include <math.h>

using namespace std;
float x;
float y;
int main ()
{
    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.13" << endl;
    cout << "      REDONDEO DE NUMEROS" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
	cout<<"Digite el numero que desea redondear: \n";
	cin>>x;

	y = floor(x);

    cout << "\nNumero sin redondear " << x << endl;
    cout << "\n" << endl;
    cout << "Numero ya redondeado " << y << endl;
}
