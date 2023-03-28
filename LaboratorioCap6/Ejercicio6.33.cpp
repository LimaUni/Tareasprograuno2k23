// Ejercicio 6.33

#include <iostream>

using namespace std;

int main ()
{
int x;
cout << "-------------------------------" << endl;
cout << "        EJERCICIO 6.33" << endl;
cout << "          CARA O CRUZ" << endl;
cout << "-------------------------------" << endl;
cout << "\n";
cout << "Presione 0 si es Cara o presione 1 si es cruz" << endl;
cin >> x;

    if(x %2 == 0)
    {
		cout << "Es cara: ";
	}
	else
    {
		cout << "Es cruz: ";
	}
}
