#include <iostream>
using namespace std;

unsigned long fibonacci( unsigned long );

int main()
{

    for ( unsigned int contador = 0; contador <= 10; ++contador )
        cout << "fibonacci( " << contador << " ) = "
            << fibonacci( contador ) << endl;

    // muestra valores de fibonacci mayores
    cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
    cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
 }


 unsigned long fibonacci( unsigned long numero )
 {
    if ( ( 0 == numero ) || ( 1 == numero ) )
        return numero;
    else // paso recursivo
        return fibonacci( numero - 1 ) + fibonacci( numero - 2 );
 }

