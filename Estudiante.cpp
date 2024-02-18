#include "Persona.cpp"
#include <iostream>
using namespace std;
// esta clase es la clase estudiantes que hereda de la clase persona
class Estudiante : Persona{
	// atributo Estudiante = carnet 
	private : string carnet;
	// constructor
	public : 
	Estudiante (){
	}
	Estudiante(string nom,string ape,string dir,int tel,string fn,string ca) 
	: Persona(nom,ape,dir,tel,fn){
		carnet = ca;
	}
	// Metodo
	void leer(){
		cout<<carnet<<endl;
		cout<<nombres<<endl;
		cout<<apellidos<<endl;
		cout<<direccion<<endl;
		cout<<telefono<<endl;
		cout<<fecha_nacimiento<<endl;
	}
};
