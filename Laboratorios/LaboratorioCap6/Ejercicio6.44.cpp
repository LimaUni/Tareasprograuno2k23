 // Ejercicio 6.44 capitulo 6
 // �Qu� hace este programa?
 #include <iostream>
 using namespace std;

 int misterio( int, int ); // prototipo de funci�n

 int main()
 {
 int x = 0;
 int y = 0;


 cout << "-------------------------------" << endl;
 cout << "         EJERCICIO 6.44" << endl;
 cout << "   �QUE HACE ESTE PROGRAMA?" << endl;
 cout << "-------------------------------" << endl;
 cout << "\n";
 cout << "Escriba dos enteros: ";
 cin >> x >> y;
 cout << "El resultado es " << misterio( x, y ) << endl;
 } // fin de main

 // el par�metro b debe ser un entero positivo para prevenir la recursividad infinita
 int misterio( int a, int b )
 {
 if ( 1 == b ) // caso base
 return a;
 else // paso recursivo
 return a + misterio( a, b - 1 );
 } // fin de la funci�n misterio

 //solo multiplico el numero a por el numero b
