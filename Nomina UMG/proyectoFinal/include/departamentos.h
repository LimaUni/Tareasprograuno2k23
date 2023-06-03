#ifndef DEPARTAMENTOS_H
#define DEPARTAMENTOS_H

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

using namespace std;

class departamentos
{
    public:
        void ingreso(string nombreAd);
		void desplegarAdministracion();
		void desplegarContabilidad();
        void desplegarRecepcion();
        void desplegarVentas();
		void menuDepartamentos();

    private:
        string ID,name,password, departamento;
		string codigo;
		int telefono, salario,cantidadHoras, valorHoras, totalHoras;
		double IGSS, IRTRA, salarioNeto, adelantos;
};

#endif // DEPARTAMENTOS_H
