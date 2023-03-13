#include "partidos.h"

int main()
{
    srand(getpid());
    float matriz1[NUMERO_CANDIDATOS1][NUMERO_ANIOS + 1]; //cambio
    float matriz2[NUMERO_CANDIDATOS2][NUMERO_ANIOS + 1]; //cambio
    float matriz3[NUMERO_CANDIDATOS3][NUMERO_ANIOS + 1]; //cambio
    char partidos1[NUMERO_CANDIDATOS1][MAXIMA_LONGITUD_CADENA] = {"Giamattei","Jimmy","Cabrera","Molina","Colon"}; //cambio
    char partidos2[NUMERO_CANDIDATOS2][MAXIMA_LONGITUD_CADENA] = {"Arjona","Moreno","Estrada","Villa","Lima"}; //cambio
    char partidos3[NUMERO_CANDIDATOS3][MAXIMA_LONGITUD_CADENA] = {"Aguilar","Batres","Ixcoy","Cardenas","Arbenz"}; //cambio
    llenarMatriz1(matriz1);
    imprimirMatriz1(matriz1, partidos1); //cambio
    llenarMatriz2(matriz2);
    imprimirMatriz2(matriz2, partidos2); //cambio
    llenarMatriz3(matriz3);
    imprimirMatriz3(matriz3, partidos3); //cambio
 }
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz1(float matriz1[NUMERO_CANDIDATOS1][NUMERO_ANIOS + 1]) //cambio
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOS1; y++) //cambio
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++) //cambio
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2017); //cambio

            matriz1[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2019); //cambio

            matriz1[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2021); //cambio

            matriz1[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES); //cambio

            matriz1[y][3] = calificacion4;
            suma= matriz1[y][0]+matriz1[y][1]+matriz1[y][2]+matriz1[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS; //cambio
        matriz1[y][NUMERO_ANIOS] = promedio; //cambio
        totalpromedio1= (float)promedio+totalpromedio1;

    }
}

void llenarMatriz2(float matriz2[NUMERO_CANDIDATOS2][NUMERO_ANIOS + 1]) //cambio
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOS2; y++) //cambio
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++) //cambio
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2017);

            matriz2[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2019);

            matriz2[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2021);

            matriz2[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES);

            matriz2[y][3] = calificacion4;
            suma= matriz2[y][0]+matriz2[y][1]+matriz2[y][2]+matriz2[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS;
        matriz2[y][NUMERO_ANIOS] = promedio;
        totalpromedio2= (float)promedio+totalpromedio2;
    }
}

void llenarMatriz3(float matriz3[NUMERO_CANDIDATOS3][NUMERO_ANIOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CANDIDATOS3; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2017);

            matriz3[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2019);

            matriz3[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_2021);

            matriz3[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES);

            matriz3[y][3] = calificacion4;
            suma= matriz3[y][0]+matriz3[y][1]+matriz3[y][2]+matriz3[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS;
        matriz3[y][NUMERO_ANIOS] = promedio;
        totalpromedio3= (float)promedio+totalpromedio3;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_ANIOS + 1; x++) //cambio
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz1(float matriz1[NUMERO_CANDIDATOS1][NUMERO_ANIOS + 1], char alumnos1[NUMERO_CANDIDATOS1][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz1[0][NUMERO_ANIOS];
    float promedioMenor = matriz1[0][NUMERO_ANIOS];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;

//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tPARTIDO 1" << endl;
    imprimirMatrizLinea();

    cout << setw(8) << "Republicano";
    cout  << setw(8) << "2017" ;
    cout  << setw(10) << "2019" ;
    cout  << setw(10) << "2021" ;
    cout  << setw(10)<< "2023" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_CANDIDATOS1; y++)
    {
        cout << "!" << setw(8) << alumnos1[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz1[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz1[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno1PromedioMayor, alumnos1[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno1PromedioMenor, alumnos1[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase1= totalpromedio1/NUMERO_CANDIDATOS1;
    cout << "Promedio mayor 1: " << setw(10) << alumno1PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor 1: " << setw(10) << alumno1PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase1 << endl;

    cout << "" << endl;
}

void imprimirMatriz2(float matriz2[NUMERO_CANDIDATOS2][NUMERO_ANIOS + 1], char alumnos2[NUMERO_CANDIDATOS2][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz2[0][NUMERO_ANIOS];
    float promedioMenor = matriz2[0][NUMERO_ANIOS];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;


//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tPARTIDO 2" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "DEMOCRATA";
    cout  << setw(8) << "2017" ;
    cout  << setw(10) << "2019" ;
    cout  << setw(10) << "2021" ;
    cout  << setw(10)<< "2023" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_CANDIDATOS2; y++)
    {
        cout << "!" << setw(8) << alumnos2[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz2[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz2[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno2PromedioMayor, alumnos2[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno2PromedioMenor, alumnos2[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase2= totalpromedio2/NUMERO_CANDIDATOS2;
    cout << "Promedio mayor 2: " << setw(10) << alumno2PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor 2: " << setw(10) << alumno2PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase2 << endl;
    cout << "" << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------


void imprimirMatriz3(float matriz3[NUMERO_CANDIDATOS3][NUMERO_ANIOS + 1], char alumnos3[NUMERO_CANDIDATOS3][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz3[0][NUMERO_ANIOS];
    float promedioMenor = matriz3[0][NUMERO_ANIOS];
    char alumno1PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno1PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;

//-------------------------------------------------------------------------------------------------------------------------------

    cout << "\t\tPARTIDO 3" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "INDEPENDIENTE";
    cout  << setw(8) << "2017" ;
    cout  << setw(10) << "2019" ;
    cout  << setw(10) << "2021" ;
    cout  << setw(10)<< "2023" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_CANDIDATOS3; y++)
    {
        cout << "!" << setw(8) << alumnos3[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz3[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz3[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno3PromedioMayor, alumnos3[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno3PromedioMenor, alumnos3[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase3= totalpromedio3/NUMERO_CANDIDATOS3;
    cout << "Promedio mayor  3: " << setw(10) << alumno3PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor  3: " << setw(10) << alumno3PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total es de: " << setw(9) << promedioDeClase3 << endl;
    cout << "" << endl;
}
