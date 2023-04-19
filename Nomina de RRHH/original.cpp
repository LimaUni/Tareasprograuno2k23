#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class usuario
{
	private:
		string ID,name,adress;
		int salario,cantidadHoras, valorHoras, totalHoras,adelantos;
		double IGSS, IRTRA, salarioNeto;
	public:
	    void login();
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void creditos();
};
void usuario::menu()
{
    int Opciones;
	char x;
	do
    {
    system("cls");
    cout << "*=============================================================================================================* "<< endl;
    cout << "  888888b.  8888888 8888888888 888b    888 888     888 8888888888 888b    888 8888888 8888888b.   .d88888b.       "<< endl;
    cout << "  888  '88b   888   888        8888b   888 888     888 888        8888b   888   888   888  'Y88b d88P' 'Y88b      "<< endl;
    cout << "  888  .88P   888   888        88888b  888 888     888 888        88888b  888   888   888    888 888     888      "<< endl;
    cout << "  8888888K.   888   8888888    888Y88b 888 Y88b   d88P 8888888    888Y88b 888   888   888    888 888     888      "<< endl;
    cout << "  888  'Y88b  888   888        888 Y88b888  Y88b d88P  888        888 Y88b888   888   888    888 888     888      "<< endl;
    cout << "  888    888  888   888        888  Y88888   Y88o88P   888        888  Y88888   888   888    888 888     888      "<< endl;
    cout << "  888   d88P  888   888        888   Y8888    Y888P    888        888   Y8888   888   888  .d88P Y88b. .d88P      "<< endl;
    cout << "  8888888P' 8888888 8888888888 888    Y888     Y8P     8888888888 888    Y888 8888888 8888888P'   'Y88888P'       "<< endl;
    cout << "*=============================================================================================================* "<< endl;

	system("pause");
	system("cls");

    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INICIO           | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
    cout << "\        -------------------------------------------------"<< endl;
    cout << "             *========================================*"<< endl;
    cout << "             |   Porfavor, elije una opcion           |"<< endl;
    cout << "             |                                        |"<< endl;
    cout << "             | 1. Ingresar nuevos datos al catalogo   |"<< endl;
    cout << "             | 2. Desplegar Usuarios                  |"<< endl;
    cout << "             | 3. Modificar Usuarios                  |"<< endl;
    cout << "             | 4. Buscar Usuarios                     |"<< endl;
    cout << "             | 5. CREDITOS DEL ESTUDIANTE             |"<< endl;
    cout << "             | 6. SALIR DEL SISTEMA                   |"<< endl;
    cout << "             |                                        |"<< endl;
    cout << "             | Ingresa una Opcion :                   |"<< endl;
    cout << "             |                                        |"<< endl;
    cout << "             *========================================*"<< endl;
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout << "          __^__                                     __^__"<< endl;
            cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
            cout << "          | / |                                     | / |"<< endl;
            cout << "          | / |  Desea gregar un nuevo trabajador?  | / |"<< endl;
            cout << "          |___|               (Y,N)                 |___|"<< endl;
            cout << "          |___|                                     |___|"<< endl;
            cout << "         (_____)-----------------------------------(_____)"<< endl;
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		creditos();
		break;
	case 6:
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
    }while(Opciones!= 6);
}
void usuario::insertar()
{
	system("cls");
	fstream file;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |     Agregar informacion Usuario     | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	cout << "\t\t  Ingresa ID del trabajador : ";
	cin >> ID;
	cout << "\t\t  Ingresa Nombre del trabajor : ";
	cin >> name;
	cout << "\t\t  Ingresa Contrasena Usuario : ";
	cin >> adress;
	cout << "\t\t  Ingresa El salario del trabajador : ";
	cin >> salario;
	cout << "\t\t  Ingresa las horas extras trabajadas : ";
	cin >> cantidadHoras;
	cout << "\t\t  Ingresa el valor de las extras trabajadas : ";
	cin >> valorHoras;
    totalHoras = cantidadHoras*valorHoras;
    cout << "\t\t  Ingresa el valor del adelanto : ";
    cin >> adelantos;
    cout << "\t\t Listo! nuevo trabajador agregado"<< endl;
    IGSS = (salario+totalHoras)*(0.483);
    IRTRA = (salario+totalHoras)*(0.10);
    salarioNeto=(salario+totalHoras)+(IGSS+IRTRA);

	file.open("Usuarios.txt", ios::app | ios::out);
	file << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << adress << std::left << std::setw(15) << salario << std::left << std::setw(15) << cantidadHoras << std::setw << std::setw(15) << IGSS << std::left << std::setw(15) << IRTRA << std::left << std::setw(15) << salarioNeto << std::setw << std::setw(15) << adelantos << "\n";
	file.close();
}
void usuario::desplegar()
{
	system("cls");
	fstream file;
	int total = 0;
	cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Tabla de Detalles de Usuarios    | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> ID >> name >> adress >> salario >> cantidadHoras >> IGSS >> IRTRA >> salarioNeto >>adelantos ;
		while(!file.eof())
		{
			total++;
			cout << "                 *============================* "<< endl;
            cout << "                                              "<< endl;
            cout << "                   ID Usuario: "<< ID << endl;
            cout << "                   Nombre Usuario : "<< name << endl;
            cout << "                   Contrasena Usuario : "<< adress << endl;
            cout << "                   Salario : Q"<< salario << endl;
            cout << "                   Pago de IGSS : Q"<< IGSS << endl;
            cout << "                   Pago de IRTRA: Q"<< IRTRA << endl;
            cout << "                   Cantidad de horas extras: "<< cantidadHoras << endl;
            cout << "                   Total de adelantos: Q"<< adelantos << endl;
            cout << "                   Total de las horas extras: Q"<< totalHoras << endl;
            cout << "                   Salario Neto : Q"<< salarioNeto << endl;
            cout << "                                              "<< endl;
            cout << "                 *============================* "<< endl;
			file >> ID >> name >> adress >> salario >> cantidadHoras >> IGSS >> IRTRA >> salarioNeto >>adelantos ;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::modificar()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "          __^__                                     __^__"<< endl;
	cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Modificacion Detalles Usuario    | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout << "\n Ingrese ID del usuario que quiere modificar: ";
		cin >> user_ID;
		file1.open("Personas.txt",ios::app | ios::out);
		file >> ID >> name >> adress;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
			 file1 << std::left << std::setw(15) << ID << std::left << std::setw(15) << name <<std::left << std::setw(15) << adress << "\n";
			}
			else
			{
				cout << "\t\t\tIngrese ID Persona: ";
				cin >> ID;
				cout << "\t\t\tIngrese Nombre Persona: ";
				cin >> name;
				cout << "\t\t\tIngrese Contrasena Persona: ";
				cin >> adress;
				file1 << std::left << std::setw(15)<< ID << std::left << std::setw(15) << name <<std::left << std::setw(15) << adress << "\n";
				found++;
			}
			file >> ID >> name >> adress;

		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Personas.txt","Usuarios.txt");
	}
}
void usuario::buscar()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{

		cout << "\n-------------------------Datos del Usuario buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
		cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |      Datos del Usuario buscada      | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
		cout << "\nIngrese ID de la Persona que quiere buscar: ";
		cin >> user_ID;
		file >> ID >> name >> adress;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   ID Usuario: "<< ID << endl;
                cout << "                   Nombre Usuario : "<< name << endl;
                cout << "                   Contrasena Usuario : "<< adress << endl;
                cout << "                   Salario : Q"<< salario << endl;
                cout << "                   Pago de IGSS : Q"<< IGSS << endl;
                cout << "                   Pago de IRTRA: Q"<< IRTRA << endl;
                cout << "                   Cantidad de horas extras: "<< cantidadHoras << endl;
                cout << "                   Total de adelantos: Q"<< adelantos << endl;
                cout << "                   Total de las horas extras: Q"<< totalHoras << endl;
                cout << "                   Salario Neto : Q"<< salarioNeto << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
			}
			file >> ID >> name >> adress;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t usuario no encontrado...";
		}
		file.close();
	}
}
void usuario::creditos()
{
	system("cls");
	cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |       CREDITOS DEL ESTUDIANTE       | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
    cout << "                *=================================* "<< endl;
    cout << "                                                    "<< endl;
    cout << "                  NUMERO DE CARNET: 9959-22-9790    "<< endl;
    cout << "                  NOMBRE: JEREMY JAVIER LIMA GUITRON"<< endl;
    cout << "                  CARRERA: INGENIERIA EN SISTEMAS   "<< endl;
    cout << "                  SEMESTRE: TERCERO                 "<< endl;
    cout << "                  CURSO: PROGRAMACION 1             "<< endl;
    cout << "                                                    "<< endl;
    cout << "                *=================================* "<< endl;
    cout << "                                                    "<< endl;
    cout << "          presiona cualquier tecla para salir al sistema "<< endl;

}
main()
{
	usuario Buscaminas;
	Buscaminas.menu();
	return 0;
}

