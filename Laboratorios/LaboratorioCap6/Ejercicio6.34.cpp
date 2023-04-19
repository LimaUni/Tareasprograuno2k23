#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

 int numero, nran;
 srand(time(NULL));
 nran = 1 + rand()%(100);

 cout << "-------------------------------" << endl;
 cout << "        EJERCICIO 6.34" << endl;
 cout << "        NUMERO MAGICO" << endl;
 cout << "-------------------------------" << endl;
 cout << "\n";
 cout<<"\nTengo un numero entre 1 y 1000 ";
 cout<<"\nPuedes adivinar mi numero? ";
 for(int i = 1;numero != nran; i++){
  cout<<"\nPor favor escribe tu respuesta : ";
  cin>>numero;
  if(numero< nran){
   cout<<"\t\nDemasiado alto. Intenta de nuevo.";
  }else if(numero > nran){
   cout<<"\t\nDemasiado bajo. Intenta de nuevo.";
  }else{
   cout<<"\t\nExcelente! Adivinaste el numero!"<<endl;
   cout<<"\t\nHicistes "<<i<<" intentos"<<endl<<endl;
  }
 }

 system("pause");
 return 0;
}
