//JEREMY JAVIER LIMA GUITRON
//9959-22-9790

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


struct Usuario {
    string nombre;
    string contrasena;
};

bool usuarioExiste(string nombreUsuario) {
    ifstream archivoUsuarios("usuarios.txt");
    bool existe = false;
    Usuario usuarioActual;
    while (archivoUsuarios >> usuarioActual.nombre >> usuarioActual.contrasena) {
        if (usuarioActual.nombre == nombreUsuario) {
            existe = true;
            break;
        }
    }
    archivoUsuarios.close();
    return existe;
}


bool autenticarUsuario(string nombreUsuario, string contrasena) {
    ifstream archivoUsuarios("usuarios.txt");
    bool autenticado = false;
    Usuario usuarioActual;
    while (archivoUsuarios >> usuarioActual.nombre >> usuarioActual.contrasena) {
        if (usuarioActual.nombre == nombreUsuario && usuarioActual.contrasena == contrasena) {
            autenticado = true;
            break;
        }
    }
    archivoUsuarios.close();
    return autenticado;
}


void agregarUsuario(string nombreUsuario, string contrasena) {
    ofstream archivoUsuarios("usuarios.txt", ios_base::app);
    archivoUsuarios << nombreUsuario << " " << contrasena << endl;
    archivoUsuarios.close();
}

int main() {

    if (!usuarioExiste("Javier")) {
        agregarUsuario("Javier", "2023");
    }
    if (!usuarioExiste("Maria")) {
        agregarUsuario("Maria", "2020");
    }
    if (!usuarioExiste("SantaClous")) {
        agregarUsuario("SantaClous", "hohoho");
    }
    string nombreUsuario, contrasena;
    cout << "          __^__                                       __^__"<< endl;
    cout << "         ( ___ )-------------------------------------( ___ )"<< endl;
    cout << "          | / |                                       | / |"<< endl;
    cout << "          | / | LOGIN PARA ACCEDER A LA BASE DE DATOS | / |"<< endl;
    cout << "          |___|                                       |___|"<< endl;
    cout << "         (_____)-------------------------------------(_____)"<< endl;
    cout << "          -------------------------------------------------"<< endl;
    cout << "                *===================================* "<< endl;
    cout << "                        INGRESA EL NOMBRE CLAVE      "<< endl;
    cout << "                *===================================* "<< endl;
    cin >> nombreUsuario;
    cout << "                *===================================* "<< endl;
    cout << "                         INGRESA LA CONTRASENA       "<< endl;
    cout << "                *===================================* "<< endl;
    cin >> contrasena;
    if (autenticarUsuario(nombreUsuario, contrasena)) {

        system("cls");
        cout << "*=============================================================================================================*   "<< endl;
        cout << "  888888b.  8888888 8888888888 888b    888 888     888 8888888888 888b    888 8888888 8888888b.   .d88888b.       "<< endl;
        cout << "  888  '88b   888   888        8888b   888 888     888 888        8888b   888   888   888  'Y88b d88P' 'Y88b      "<< endl;
        cout << "  888  .88P   888   888        88888b  888 888     888 888        88888b  888   888   888    888 888     888      "<< endl;
        cout << "  8888888K.   888   8888888    888Y88b 888 Y88b   d88P 8888888    888Y88b 888   888   888    888 888     888      "<< endl;
        cout << "  888  'Y88b  888   888        888 Y88b888  Y88b d88P  888        888 Y88b888   888   888    888 888     888      "<< endl;
        cout << "  888    888  888   888        888  Y88888   Y88o88P   888        888  Y88888   888   888    888 888     888      "<< endl;
        cout << "  888   d88P  888   888        888   Y8888    Y888P    888        888   Y8888   888   888  .d88P Y88b. .d88P      "<< endl;
        cout << "  8888888P' 8888888 8888888888 888    Y888     Y8P     8888888888 888    Y888 8888888 8888888P'   'Y88888P'       "<< endl;
        cout << "*=============================================================================================================*   "<< endl;
        cout << "                            presiona cualquier tecla para entrar al sistema                                       "<< endl;

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
        cout << "             | 1. DATOS DEL CATALOGO                  |"<< endl;
        cout << "             | 2. DESPLEGAR INFORMES                  |"<< endl;
        cout << "             | 3. CREDITOS DEL ESTUDIANTE             |"<< endl;
        cout << "             | 4. SALIR DEL SISTEMA                   |"<< endl;
        cout << "             |                                        |"<< endl;
        cout << "             | Ingresa una Opcion :                   |"<< endl;
        cout << "             |                                        |"<< endl;
        cout << "             *========================================*"<< endl;

        int opcionMenu;
        cin >> opcionMenu;
        switch (opcionMenu) {
            case 1: {
                system("cls");
                cout << "          __^__                                     __^__"<< endl;
                cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
                cout << "          | / |                                     | / |"<< endl;
                cout << "          | / |          DATOS DEL CATALOGO         | / |"<< endl;
                cout << "          |___|                                     |___|"<< endl;
                cout << "         (_____)-----------------------------------(_____)"<< endl;
                cout << "        -------------------------------------------------"<< endl;
                cout << "             *========================================*"<< endl;
                cout << "             |   Porfavor, elije una opcion           |"<< endl;
                cout << "             |                                        |"<< endl;
                cout << "             | 1. CRUD DE ESTRUCTURAS                 |"<< endl;
                cout << "             | 2. SALIR AL MENU                       |"<< endl;
                cout << "             |                                        |"<< endl;
                cout << "             *========================================*"<< endl;
                int opcionCatalogos;
                cin >> opcionCatalogos;
                switch (opcionCatalogos) {
                    case 1: {
                        system("cls");
                        cout << "          __^__                                     __^__"<< endl;
                        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
                        cout << "          | / |                                     | / |"<< endl;
                        cout << "          | / |         CRUD DE ESTRUCTURAS         | / |"<< endl;
                        cout << "          |___|                                     |___|"<< endl;
                        cout << "         (_____)-----------------------------------(_____)"<< endl;
                        cout << "        -------------------------------------------------"<< endl;
                        cout << "             *========================================*"<< endl;
                        cout << "             |   Porfavor, elije una opcion           |"<< endl;
                        cout << "             |                                        |"<< endl;
                        cout << "             | 1. Alta                                |"<< endl;
                        cout << "             | 2. Baja                                |"<< endl;
                        cout << "             | 3. Modificacion                        |"<< endl;
                        cout << "             | 4. Consulta                            |"<< endl;
                        cout << "             |                                        |"<< endl;
                        cout << "             *========================================*"<< endl;

                    break;
                    }
                    case 2: {
                    break;
                    }
                    default: {

                        cout << "Opcion invalida" << endl;
                    break;
                    }
                }
                break;
            }
            case 2: {
                system("cls");
                cout << "          __^__                                     __^__"<< endl;
                cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
                cout << "          | / |                                     | / |"<< endl;
                cout << "          | / |               INFORMES              | / |"<< endl;
                cout << "          |___|                                     |___|"<< endl;
                cout << "         (_____)-----------------------------------(_____)"<< endl;
                cout << "        -------------------------------------------------"<< endl;
                cout << "             *========================================*"<< endl;
                cout << "             |   Porfavor, elije una opcion           |"<< endl;
                cout << "             |                                        |"<< endl;
                cout << "             | 1. Impresion a TXT de estructuras      |"<< endl;
                cout << "             | 2. SALIR AL MENU                       |"<< endl;
                cout << "             |                                        |"<< endl;
                cout << "             *========================================*"<< endl;
                int opcionInformes;
                cin >> opcionInformes;
                switch (opcionInformes) {
                    case 1: {
                        // Realizar la impresión a TXT
                        cout << "Impresion a TXT de estructuras" << endl;
                        break;
                    }
                    case 2: {
                        // Volver al menú general
                        break;
                    }
                    default: {
                        // Opción inválida
                        cout << "Opcion invalida" << endl;
                        break;
                    }
                }
                break;
            }
            case 3: {
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
                break;
            }
            case 4: {
                system("cls");
                cout << "          __^__                                     __^__"<< endl;
                cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
                cout << "          | / |                                     | / |"<< endl;
                cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
                cout << "          |___|            vuelva pronto            |___|"<< endl;
                cout << "          |___|                                     |___|"<< endl;
                cout << "         (_____)-----------------------------------(_____)"<< endl;
                break;
            }
            default: {
                system("cls");
                cout << "          __^__                                     __^__"<< endl;
                cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
                cout << "          | / |                                     | / |"<< endl;
                cout << "          | / |    OPCION SELECCIONADA NO VALIDA    | / |"<< endl;
                cout << "          |___|                                     |___|"<< endl;
                cout << "         (_____)-----------------------------------(_____)"<< endl;
                break;
            }
        }
    } else {
        system("cls");
        cout << " +-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << " |D|A|T|O|S| |I|N|G|R|E|S|A|D|O|S| |I|N|C|O|R|R|E|C|T|O|S|" << endl;
        cout << " +-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+" << endl;
        cout << "          |H|A|Z| |S|I|D|O| |R|E|C|H|A|Z|A|D|O|            " << endl;
        cout << " +-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+-+-+" << endl;

    }
    return 0;
}
