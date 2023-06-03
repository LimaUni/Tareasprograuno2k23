#include "departamentos.h"
#include "usuario.h"
#include "bitacora.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <chrono>
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

string departamentos::ingreso(string nombreAd);
string codigo;
using namespace std;

void departamentos::desplegarAdministracion()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "\t\t    Nombre Administrador: " << nombreAd<< endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Trabajador   | / |"<< endl;
    cout << "                                               |___|     Departamento Administrativo     |___|"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID             NOMBRE       PASSWORD         PUESTO         TELEFONO      SALARIO     HORAS EXTRAS       IGSS           IRTRA        SALARIO NETO    ADELANTOS " << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Administracion.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7501";
	bit.ingreso(nameAdministrador,codigo);
}
void departamentos::desplegarVentas()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Trabajador   | / |"<< endl;
    cout << "                                               |___|        Departamento de Ventas       |___|"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID             NOMBRE       PASSWORD         PUESTO         TELEFONO      SALARIO     HORAS EXTRAS       IGSS           IRTRA        SALARIO NETO    ADELANTOS " << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Ventas.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7502";
	bit.ingreso(nameAdministrador,codigo);
}
void departamentos::desplegarContabilidad()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Trabajador   | / |"<< endl;
    cout << "                                               |___|     Departamento Contabilidad       |___|"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID             NOMBRE       PASSWORD         PUESTO         TELEFONO      SALARIO     HORAS EXTRAS       IGSS           IRTRA        SALARIO NETO    ADELANTOS " << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Contabilidad.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7501";
	bit.ingreso(nameAdministrador,codigo);
}
void departamentos::desplegarRecepcion()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Trabajador   | / |"<< endl;
    cout << "                                               |___|     Departamento Recepcion          |___|"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID             NOMBRE       PASSWORD         PUESTO         TELEFONO      SALARIO     HORAS EXTRAS       IGSS           IRTRA        SALARIO NETO    ADELANTOS " << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Recepcion.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7501";
	bit.ingreso(nameAdministrador,codigo);
}
void departamentos::menuDepartamentos()
{
    int Opciones;
    do
    {
    system("cls");
    cout << "" << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DEPARTAMENTOS       | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
    cout << "\        -------------------------------------------------"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Administracion             |"<< endl;
    cout << "                 | 2. Ventas                     |"<< endl;
    cout << "                 | 3. Contabilidad               |"<< endl;
    cout << "                 | 4. Recepcion                  |"<< endl;
    cout << "                 | 5. Regresar al inicio         |"<< endl;
    cout << "                 | 6. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 |      Ingresa una Opcion       |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cin >> Opciones;

        switch(Opciones)
        {
        case 1:
            desplegarAdministracion();
            break;
        case 2:
            desplegarVentas();
            break;
        case 3:
            desplegarContabilidad();
            break;
        case 4:
            desplegarRecepcion();
            break;
        case 5:
        system("cls");
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "          __^__                                     __^__"<< endl;
	    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|    Redireccionando al inicio....    |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
            break;
        case 6:
            system("cls");
            bitacora bit;
            codigo="7999";
            bit.ingreso(nameAdministrador,codigo);
            cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
            cout << "" << endl;
            cout << "          __^__                                     __^__"<< endl;
            cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
            cout << "          | / |                                     | / |"<< endl;
            cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
            cout << "          |___|            vuelva pronto            |___|"<< endl;
            cout << "          |___|                                     |___|"<< endl;
            cout << "         (_____)-----------------------------------(_____)"<< endl;
            exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 5);
}
