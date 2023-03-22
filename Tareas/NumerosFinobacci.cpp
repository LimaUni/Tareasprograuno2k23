
#include <iostream>
using namespace std;

unsigned long fibonacci( unsigned long ); // prototipo de función

int main()
{
    // calcula los valores de fibonacci del 0 al 10
    for ( unsigned int contador = 0; contador <= 10; ++contador )
        cout << "fibonacci( " << contador << " ) = "
            << fibonacci( contador ) << endl;

    // muestra valores de fibonacci mayores
    cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
    cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
 }

 // método fibonacci recursivo
 unsigned long fibonacci( unsigned long numero )
 {
    if ( ( 0 == numero ) || ( 1 == numero ) ) // casos base
        return numero;
    else // paso recursivo
        return fibonacci( numero - 1 ) + fibonacci( numero - 2 );
 } // fin de la función fibonacci
