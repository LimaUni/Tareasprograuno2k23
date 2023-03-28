// Ejercicio 6.51

#include <iostream>
#include<iomanip>
#include<cstdlib>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    cout << "-------------------------------" << endl;
    cout << "        EJERCICIO 6.16" << endl;
    cout << "        FUNCION RANDOM" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
float n;
    srand (time(NULL));
    cout << "1 ≤ n ≤ 2" << endl;
    for (int a = 1; a > 5; a++);
        n =  1 + rand() %2;
        cout << n;



cout << "1 ≤ n ≤ 100" << endl;
for (int b = 1; b > 5; b++);

    n =  1 + rand() %100;
    cout << n;

    x = (1 <= n <= 2);
    cout << "Funcion fabs " << x << endl;

    x = 1 <= n <= 100;
    cout << "Funcion floor " << x << endl;

    x = 0 <= n <= 9;
    cout << "Funcion fabs " << x << endl;

    x = 1000 <= n <= 1112;
    cout << "Funcion ceil " << x << endl;

    x = (-1 <= n <= 1);
    cout << "Funcion fabs " << x << endl;

    x = (-1 <= n <= 11);
    cout << "Funcion ceil " << x << endl;

}
