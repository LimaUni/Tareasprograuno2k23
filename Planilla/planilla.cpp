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
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
		void Contrasena();
};
void usuario::menu()
{
    int Opciones;
	char x;
	do
    {
	system("cls");

	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t |   INGRESO DE USUARIOS  |" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t 1. Ingresar Usuarios" << endl;
	cout << "\t\t\t 2. Desplegar Usuarios" << endl;
	cout << "\t\t\t 3. Modificar Usuarios"<<endl;
	cout << "\t\t\t 4. Buscar Usuarios" << endl;
	cout << "\t\t\t 5. Borrar Usuarios" << endl;
	cout << "\t\t\t 6. Exit" << endl;

	cout << "\t\t\t--------------------------------" << endl;
	cout << "\t\t\tOpciones a escoger:[1/2/3/4/5/6]" << endl;
	cout << "\t\t\t--------------------------------" << endl;
	cout << "Ingresa una Opcion: ";
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout << "\n\t\t\t Agrega otro usuario(Y,N): ";
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
		borrar();
		break;
	case 6:
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
	cout << "\n------------------------------------------------------------------------------------------------------------------------";
	cout << "\n-------------------------------------------------Agregar informacion Usuario -------------------------------------------"<<endl;
	cout << "\t\t\tIngresa ID Usuario         : ";
	cin >> ID;
	cout << "\t\t\tIngresa Nombre Usuario     : ";
	cin >> name;
	cout << "\t\t\tIngresa Contrasena Usuario   : ";
	cin >> adress;
	file.open("Usuarios.txt", ios::app | ios::out);
	file << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << adress << "\n";
	file.close();
}
void usuario::desplegar()
{
	system("cls");
	fstream file;
	int total = 0;
	cout << "\n-------------------------Tabla de Detalles de Usuarios -------------------------" << endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> ID >> name >> adress;
		while(!file.eof())
		{
			total++;
			cout << "\n\n\t\t\t ID Usuario: " << ID << endl;
			cout << "\t\t\t Nombre Usuario: " << name << endl;
			cout << "\t\t\t Contrasena Usuario: " << adress <<endl;
			file >> ID >> name >> adress;
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
	cout << "\n-------------------------Modificacion Detalles Usuario-------------------------"<<endl;
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
		file1.open("Usuarios.txt",ios::app | ios::out);
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
        void Contrasena();
    }
	else
	{
		string user_ID;
		cout << "\n-------------------------Datos del Usuario buscada------------------------"<<endl;
		cout << "\nIngrese ID de la Persona que quiere buscar: ";
		cin >> user_ID;
		file >> ID >> name >> adress;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "\n\n\t\t\t ID usuario: " << ID << endl;
				cout << "\t\t\t Nombre usuario: " << name << endl;
				cout << "\t\t\t Contrasena usuario: " << adress << endl;
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
void usuario::borrar()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "\n-------------------------Detalles Usuario a Borrar-------------------------" << endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout << "\n Ingrese el ID del Usuario que quiere borrar: ";
		cin >> user_ID;
		file1.open("Personas.txt",ios::app | ios::out);
		file >> ID >> name >> adress;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
				file1 << std::left << std::setw(15) << ID <<std::left<<std::setw(15) << name <<std::left << std::setw(15) << adress << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> ID >> name >> adress;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Personas.txt","Usuarios.txt");
	}
}
void usuario::Contrasena()
{
    #define USER "semestre dos"
    #define PASS "mariano galvez"
    string usuario, password;
    int contador = 0;
    bool ingresa = false;

    do{
      system("cls");
    cout << "\t\t\t Login de Usuario" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\t Usuario: ";
    getline(cin, usuario);
    cout << "\t Password: ";
    getline(cin, password);

    if(usuario == USER && password == PASS){
        ingresa = true;
    }else{
        cout << "\n\t password es incorrecta" << endl;
        contador++;
    }
    }while(ingresa == false && contador < 3);

    if(ingresa == false){
        cout << "\n\t Usted no pudo ingresar al sistema. INTENTE MAS TARDE" << endl;
    }else{
        cout << "\n\t Bienvenido ingrese al sistema" << endl;
    }
cin.get();
system("pause");
}
main()
{
	usuario USUARIO;
	USUARIO.menu();
	return 0;
}
