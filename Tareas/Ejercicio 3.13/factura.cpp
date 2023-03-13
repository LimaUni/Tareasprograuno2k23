#include <iostream>
#include <string>
#iostream <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

class facturar
{
    public:
           string nom, dir, ap, curp, rfc;
           string marca, color, modelo;
           double total, precio, sub, iva;
           void ejemplo()
           {

           do
           {
               precio = 4500
               cout<<" Menu de facturacion";
               cout<<"nuestras computadoras estan a 4500 cada una";
               fflush(stdin);
               cout<<"dame tu nombre:";
               getline(cis, nom);

               cout<<"dame tu apellido:";
               getline(cis, ap);

               cout<<"dame tu direccion:";
               getline(cis, dir);

               cout<<"dame tu curp:";
               getline(cis, curp);

               cout<<"dame tu rfc:";
               getline(cis, rfc);
               fflush(stdin);

               cout<<"Que tipo de computadora quieres?";
               cout<<"[1] Compaq";
               cout<<"[2] sony";
               cout<<"[3] dell";
               getline(cin, marca);
               fflush(stdin);

               cout<<"De que color:";
               cout<<"[1] gris";
               cout<<"[2] negra";
               cout<<"[3] blanca";
               getline(cin, color);
               fflush(stdin);

               cout<<"que modelo??";
               cout<<"[1] lucaxx1";
               cout<<"[2] thinkvaio3";
               cout<<"[3] ozuno";
               getline(cin, modelo);

               cout<<"cuantas desea comprar?";
               cin>>cant;
               sub = cant*precio;
               iva = sub*0.12;
               total = sub+iva;


cout<<"\n\n\n Nombre"<<nom<<"\t\t tus apellidos son "<<" " <<ap<<"\n\n";
cout<<"\t\t\t Direccion:" <<dir<<" " <<"\t\t CURP "<<" "<<curp<<"\n\n";
cout<<"\t\t RFC :"<<" "<<rfc;
cout<<"\t\t Marca :"<<" "<<marca<<"\n\n";
cout<<"\t\t color: "<<color;
cout<<"\t\t modelo :"<<modelo<<"\n\n\n ";

cout<<"***** Precio final *****";
cout<<"\t\t\t\t\t Precio: "<<precio<<"\n";
cout<<"\t\t\t\t\t Cantidad: "<<cant<<"\n";
cout<<"\t\t\t\t\t Sub total: "<<sub<<"\n";
cout<<"\t\t\t\t\t Iva: "<<iva<<"\n";
cout<<"***** Gracias por tu compra *****";
getch();

system ("cls");

cout<<"Presiona -1 para salir: ";
cin<<opc;
}while (opc!=-1);


}//funcion


};

