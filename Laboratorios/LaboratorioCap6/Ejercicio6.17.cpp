// Ejercicio 6.27

#include <iostream>

using namespace std;

int main()
{
    float x,y,z;
    cout << "Ingrese tres numeros: " << endl;
    cin >> x >> y >> z;
    if (x < y && x < z)
    {
        cout << "El numero menor es: " << x << endl;
    }
    if (y<x && y<z)
    {
        cout << "El numero menor es: " << y << endl;
    }
    if (z<x && z<y)
    {
        cout << "El numero menor es: " << z << endl;
    }
    if (z=x , z=y)
    {
        cout << "Todos los numeros son iguales "<< endl;
    }
    return 0;
}
