#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <conio.h>


using namespace std;
class Factura{

    public: //metodos
        string nombre, direccion, apellido, curp, rcf;
        string marca, color, modelo;
        double total, precio, sub, iva;
        int opc, cant;
        void ejemplo()
        {

        do
        {
            precio = 4500,
            cout<<"***** Menu de facturacion *****\n\n";
            cout<<"** Costo de cada compu Q4500 **\n\n";
            fflush(stdin);
            cout<<"Dame tu nombre"<<
            getline (cin, nombre)
        }
        }

};
// constructor
Factura::Factura(int _info_merc){
    info_merc = _info_merc;
}

void Persona::establecer(){
    cout<<"soy"<<info_merc<<"y soy yo"<<endl;
}

int main(){
    Factura p1 = Persona(20)

    system("pause")
    return 0:
}
