#include "Cliente.cpp"


#include <iostream>

using namespace std;

main(){

	string puesto,nit,nombres,apellidos,direccion;

	int telefono,cod_empleado,sueldo;

	cout<<"Ingrese Nit: ";

	cin>>nit;

	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;
	
	cout<<"Codigo de empleado: ";
	
	cin>> cod_empleado;
	
	cout<<"Ingrese su puesto: ";
	
	cin>>puesto;
	
	cout<<"Ingrese su sueldo: ";
	
	cin>>sueldo;

	// instanciar un objeto

	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);

	obj.mostrar();

	cout<<"Ingrese Nit: ";

	cin>>nit;

	obj.setNit(nit);

	obj.mostrar();
	
	obj.mostrar();
	

	// instanciar un objeto y utilizar get and set

	

/*	Cliente obj = Cliente();

	obj.setNit(nit);

	obj.setNombres(nombres);

	obj.setApellidos(apellidos);

	obj.setDireccion(direccion);

	obj.setTelefono(telefono);

	//obj.mostrar();

	cout<<"Nit: "<<obj.getNit()<<endl;

	cout<<"Nombres: "<<obj.getNombres()<<endl;

	cout<<"Apellidos: "<<obj.getApellidos()<<endl;

	cout<<"Direccion: "<<obj.getDireccion()<<endl;

	cout<<"Telefono: "<<obj.getTelefono()<<endl;

*/	

}
