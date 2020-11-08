#include <iostream>

int option = 0;
double deposito, retiro, trans = 0; //Variables de deposito sumatorio.
double depT, retT, transT, acumd, acumr,trat = 0;

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
	cout<<"ingrese una opcion:"<<endl;
	cin>>option;
	
	switch (option) {
	
	case 1:
		cout<<"ingrese su nombre"<<endl;
		cin>>name;
		
		cout<<"ingrese su nip"<<endl;
		cin>>nip;
		
		if (nip=="")
		
			cout<<"No deje el nip vacío. Reingrese su datos de nuevo."<<endl;
		
		else 
			cout<<"Bienvenido: "<<name<<endl;
			cout<<""<<endl;
			cout<<"Que cantidad desea depositar a su cuenta?"<<endl;
			cin>>deposito;
			
			acumd = acumd + deposito;
			
			cout<<"Su ingreso a la cuenta es de: "<<acumd<<endl;
		break;
	default:
		
		cout<<"Opcion inexistente..."<<endl;		
		break;	
	}
		
	
	
	//Termino del condicional 
	return 0;
	
}
