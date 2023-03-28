#include <iostream>
using namespace std;


int main()
{
 int num , div = 0;
 cout << "-------------------------------" << endl;
 cout << "        EJERCICIO 6.28" << endl;
 cout << "       NUMEROS PERFECTOS" << endl;
 cout << "-------------------------------" << endl;
 cout << "\n";
 cout<<"introduce un numero\n"<<endl;
 cin>>num;
 for (int i = 1; i<num; i++)
 {
  if(num % i == 0){
  div += i;
 }
 }
 if (num == div){
  cout<<("es perfecto;")<<num<<endl;
 }
 else{
  cout<<("no es perfecto: ")<<num<<endl;
}

 return 0;
}
