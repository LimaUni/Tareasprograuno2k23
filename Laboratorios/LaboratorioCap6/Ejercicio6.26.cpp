#include <iostream>


 using namespace std;

 int main ()
 {
    int C, F;
    int Ce, Fa;

    cout << "--------------------------------------------" << endl;
    cout << "            EJERCICIO 6.26" << endl;
    cout << "  TEMPERATURAS EN CENTIGRADOS Y FAHRENHEIT" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "\n";
	cout<<"Ingrese una temperatura en Centigrados: \n";
	cin>>C;
	cout<<"Ingrese una temperatura en Fahrenheit: \n";
	cin>>F;

	Fa = ((C * 1.8) + 32);
	Ce = ((F -32) / 1.8);
    cout<<"\n";
	cout<<C<<" Grados Centigrados es igual a: "<<Fa<<"F"<<endl;
	cout<<F<<" Grados Fahrenheit es igual a: "<<Ce<<"C"<<endl;
 }
