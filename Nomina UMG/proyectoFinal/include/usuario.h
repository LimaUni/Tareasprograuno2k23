#ifndef USUARIO_H
#define USUARIO_H

#include "usuario.h"
#include "bitacora.h"
#include "departamentos.h"
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

using namespace std;
class usuario
{
	private:
		string passwordAdministrador;
		string ID,name,password, departamento;
		string codigo;
		int telefono, salario,cantidadHoras, valorHoras, totalHoras;
		double IGSS, IRTRA, salarioNeto, adelantos;
	public:
	    string nameAdministrador;
		void menuAdministrador();
		void insertarAdministrador();
		void desplegarAdministrador();
		void buscarAdministrador();
		void menuTrabajador();
		void insertarTrabajador();
		void desplegarTrabajador();
		void modificarTrabajador();
		void buscarTrabajador();
		void borrarTrabajador();
		void desplegarAplicaciones();
};

#endif // USUARIO_H
