#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

double a;
double b;
double h1;
double x;
double y;
double h2;
double i;
double j;
double h3;

int main ()
{
    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.19" << endl;
    cout << "          HIPOTENUSA" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
	cout<<"Digite el lado A: "; cin >>a;
	cout<<"Digite el lado B: "; cin >>b;
	cout<<"Digite el lado X: "; cin >>x;
	cout<<"Digite el lado Y: "; cin >>y;
    cout<<"Digite el lado I: "; cin >>i;
	cout<<"Digite el lado J: "; cin >>j;


	h1 = sqrt((a*a)+(b*b));
	h2 = sqrt((x*x)+(y*y));
	h3 = sqrt((i*i)+(j*j));

	cout<<"\nLa hipotenusa del primer triangulo con lado "<<a<< " y "<<b<< " es de: "<<h1<< endl;
    cout<<"\nLa hipotenusa del segundo triangulo con lado "<<x<< " y "<<y<< " es de: "<<h2<< endl;
    cout<<"\nLa hipotenusa del tercer triangulo con lado "<<i<< " y "<<j<< " es de: "<<h3<< endl;


}
