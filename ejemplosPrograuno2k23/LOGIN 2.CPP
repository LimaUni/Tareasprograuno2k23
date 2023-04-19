#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

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

struct Usuario {
    string nombre;
    string contrasena;
};

bool usuarioExiste(string nombreUsuario) {
    ifstream archivoUsuarios("usuarios.dat", ios::binary | ios::in);
    if (!archivoUsuarios) {
        cerr << "Error al abrir el archivo de usuarios" << endl;
        return false;
    }
    Usuario usuario;
    while (archivoUsuarios.read((char*)&usuario, sizeof(usuario))) {
        if (usuario.nombre == nombreUsuario) {
            archivoUsuarios.close();
            return true;
        }
    }
    archivoUsuarios.close();
    return false;
}

// Función para autenticar a un usuario
bool autenticarUsuario(string nombreUsuario, string contrasena) {
    ifstream archivoUsuarios("usuarios.dat", ios::binary | ios::in);
    if (!archivoUsuarios) {
        cerr << "Error al abrir el archivo de usuarios" << endl;
        return false;
    }
    Usuario usuario;
    while (archivoUsuarios.read((char*)&usuario, sizeof(usuario))) {
        if (usuario.nombre == nombreUsuario && usuario.contrasena == contrasena) {
            archivoUsuarios.close();
            return true;
        }
    }
    archivoUsuarios.close();
    return false;
}

// Función para agregar un nuevo usuario
void agregarUsuario(string nombreUsuario, string contrasena) {
    ofstream archivoUsuarios("usuarios.dat", ios::binary | ios::app);
    if (!archivoUsuarios) {
        cerr << "Error al abrir el archivo de usuarios" << endl;
        return;
    }
    Usuario usuario = {nombreUsuario, contrasena};
    archivoUsuarios.write((char*)&usuario, sizeof(usuario));
    archivoUsuarios.close();
}

int main() {
    // Crear usuario administrador
    const string NOMBRE_ADMIN = "Administrador";
    const string CONTRASENA_ADMIN = "1234";
    if (!usuarioExiste(NOMBRE_ADMIN)) {
        agregarUsuario(NOMBRE_ADMIN, CONTRASENA_ADMIN);
    }

    // Autenticar usuario
    string nombreUsuario, contrasena;
    cout << "Nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Contrasena: ";
    cin >> contrasena;
    if (autenticarUsuario(nombreUsuario, contrasena)) {
        cout << "Autenticacion exitosa" << endl;
    } else {
        cout << "Nombre de usuario o contrasena incorrectos" << endl;
    }

    return 0;
}
