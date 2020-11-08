#include <iostream>

int option = 0;

using namespace std;

string name, nip = ""; //Declaración en vacío para ingreso de datos string.

int main()
{
	cout<<"bienvenido a su cajero personalizado. ¿Que desea realizar?"<<endl;
	
	cout<<"Cargando opciones..."<<endl;
	cout<<""<<endl;
	cout<<"1.- Depositar monto especifico."<<endl;
	cout<<"2.- Retirar monto especifico."<<endl;
	cout<<"3.- Depositar a tarjeta."<<endl;
	cout<<"4.- Ver sus transacciones."<<endl;
	cout<<"5.- Cambiar de nip"<<endl;
	cout<<"6.- Salir."<<endl;
	cout<<""<<endl; 
	cout<<"ingrese una opción:"<<endl;
	cin>>option;
	
	if (option = 1) 
	
		cout<<"ingrese su nombre"<<endl;
		cin>>name;
		
		cout<<"Bienvenido: "<<name<<endl;
	
	//Termino del condicional 
	return 0;
	
}
