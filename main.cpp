#include "Estudiante.cpp"
#include <iostream>
using namespace std;
// solo agregare un comentario
// otro comentario y nada mas
main(){
	 // instancia de un objeto
	 string varc,varn,varap,vardir,varfn;
	 int vart;
	 
	 cout<<"Ingrese Carnet:";
	 cin>>varc;
	 cout<<"Ingrese Nombre:";
	 cin>>varn;
	 cout<<"Ingrese Apellido:";
	 cin>>varap;
	 cout<<"Ingrese Direccion:";
	 cin>>vardir;
	 cout<<"Ingrese Fecha Nacimiento:";
	 cin>>varfn;
	 cout<<"Ingrese Telefono:";
	 cin>>vart;
	 cout<<" ----------- Mostrar Datos ---------"<<endl;
	 Estudiante estudiante = Estudiante(varn,varap,vardir,vart,varfn,varc);
	 estudiante.leer();
}
