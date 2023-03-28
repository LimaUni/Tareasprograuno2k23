#include <iostream>

using namespace std;

int main() {


    int n;
    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.22" << endl;
    cout << "     CUADRADO DE ASTERISCOS" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
	cout<<"Digite el parametro: "; cin >>n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
	cout << endl;
	}

	return 0;
}
