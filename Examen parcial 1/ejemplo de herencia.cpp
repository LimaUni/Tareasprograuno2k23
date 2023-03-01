//ejemplo de herencia para ele xamen parcial 1 de programacion
//creado por : Javier Lima en fecha de 1 de marzo del 2023

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

class Estudiante : public Persona{
	private:
		float notaFinal;
	public:
		Estudiante(string,int,float);
		void mostrarEstudiante();
};


Persona::Persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

Estudiante::Estudiante(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
	notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Nota Final: "<<notaFinal<<endl;
}

int main(){

	Estudiante estudiante1("Steve Jobs",60,85.79);
	cout<<"-Estudiante-"<<endl;
	estudiante1.mostrarEstudiante();
	cout<<"\n";


	system("pause");
	return 0;
}
