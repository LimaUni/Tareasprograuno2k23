#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

class facturar
{
    public:
           string nom, dir, ap, nit;
           string marca;
           float total, precio, sub, iva;
           int opc, cant;
           void fac()
           {

           do
           {
               precio = 80.60;
               cout<<"************ FERRETERIA UMG ************ \n";
               cout<<"***** TENEMOS LOS MEJORES PRECIOS ***** \n\n";
               cout<<"por el momento solo tenemos monocapa \n\n";
               fflush(stdin);
               cout<<"INSERTA TU NOMBRE : ";
               getline(cin, nom);

               cout<<"INSERTA TU APELLIDO : ";
               getline(cin, ap);

               cout<<"INSERTA TU DIRECCION : ";
               getline(cin, dir);

               cout<<"INSERTA TU NIT/CF : ";
               getline(cin, nit);
               system("cls");


               cout<<"\n\n ESCRIBE QUE VAS A COMPRAR?\n";
               cout<<"[1] MONOCAPA BASE \n" ;
               cout<<"[2] MONOCAPA GRIS \n" ;
               cout<<"[3] MONOCAPA DE TEXTURA \n" ;
               getline(cin, marca);
               fflush(stdin);

               cout<<"CUANTAS UNIDADES VAS A COMPRAR? \n";
               cin>>cant;
               sub = cant*precio;
               iva = sub*0.12;
               total = sub+iva;
               system("cls");


cout<<"Nombre del cliente: "<<nom<<"\t\t Apellidos: "<<" " <<ap<<"\n\n";
cout<<"Direccion:" <<dir<< "\t\t NIT: "<<" " <<nit<<"\n\n";

cout<<"\n\n ********* DESCRIPCION DE LA COMPRA *********\n\n";
cout<<"Articulo :"<<" "<<marca<<"\n";
cout<<" Precio: "<<precio<<"\n";
cout<<" Cantidad: "<<cant<<"\n";
cout<<" Sub total: "<<sub<<"\n";
cout<<" Iva: "<<iva<<"\n\n\n";
cout<<" TOTAL DE TU COMPRA: "<<total<<"\n\n";
cout<<"********* Gracias por tu compra *********\n\n";
cout<<"Presiona cualquier tecla para continuar";
getch();

system ("cls");

cout<<"Presiona 1 para salir o cualquier numero para reiniciar: ";
cin>>opc;
system ("cls");
}while (opc!=1);



}//funcion


};

