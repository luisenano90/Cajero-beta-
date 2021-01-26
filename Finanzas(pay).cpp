#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
//variables principales
int opt = 0;
int intentos = 3;
double saldo = 250;
using namespace std;
string warn = "Incluiremos el pago de servicios en una pronta actualización (pays update)"; //warn (aviso)
string ver = "1.0.100";//Número de version...
string id = "LELP06111999";
string pass = "1999";
string pass_help, id_help = "";
//Inicio del programa----------------------------------------------------------------------------------------
void categories()
{
	cout<<"Bienvenido al sistema de categorias..."<<endl;
	cout<<""<<endl;
	cout<<"Se mostrará a continuación las categorías donde usted podria analizar cuanto ha gastado en cada una de ellas."<<endl;
	cout<<""<<endl;
	cout<<"Seleccione alguna..."<<endl;
	
	cout<<"1.-Gastos del hogar."<<endl;
	cout<<"2.-Gastos escolares"<<endl;
	cout<<"3.-Gastos del trabajo"<<endl;
	cout<<"4.-Gastos en salud"<<endl;
	cout<<"5.-Diversion"<<endl;
}
int main()
{
	setlocale(LC_ALL,"spanish"); //Función que ayuda a la sintaxis para mostrar puntuaciones...
	
	while (intentos!= 0) //Cíclo principal...
	{
		
		//------------------------------------------------------------------------// MENÚ
		cout<<"Bienvenido usuario, Digite su ID personal como primer paso de inicio de seción:"<<endl;
		cin>>id_help;
		cout<<"DIgite su password/nip (recuerde solamente 4 digitos exactos)..."<<endl;
		cin>>pass_help;
		system("cls");
		
		cout<<"*****************************************************************"<<endl;
		cout<<"Bienvenido al sistema de finanzas 2020-2021 Longoria's Corporation"<<endl;
		cout<<"*****************************************************************"<<endl;
		cout<<"Versión: "<<ver<<endl;
		cout<<""<<endl;	
		cout<<"------------------------------------------------------------------------------"<<endl;
		cout<<"El sistema de finanzas que le ayudará a observar sus ingresos y egresos diarios"<<endl;
		cout<<"AVISO: "<<warn<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
		system("pause");
		system("cls");
	
		if (id_help == id && pass_help == pass)
		{
			
			do {
				cout<<"Bienvenido... ¿Que desea hacer?"<<endl;	
			cout<<""<<endl;
			cout<<"Menú principal... "<<endl;
			cout<<"-----------------"<<endl;
			cout<<"1.- Consultar saldo de la billetera"<<endl;
			cout<<"2.- Gasto de saldo total"<<endl;
			cout<<"3.- Categorías"<<endl;
			cout<<"Salir"<<endl;
			cout<<"-----------------"<<endl;
			cout<<""<<endl; //salto de linea...	
			cin>>opt;
			cout<<""<<endl;
			system("cls");
			
			switch (opt) {
				
				case 1:
				{
					cout<<"Hola usuario: "<<id<<" Revisemos su saldo actual..."<<endl;
					cout<<"cargando..."<<endl;
					system("pause");
					cout<<"Procesando datos..."<<endl;
					system("pause");
					cout<<"Su saldo en la billetera es de: $"<<saldo<<endl;
				}
				break;
				
				case 2:
				{
					cout<<"En total usted ha gastado hasta el momento... $"<<endl;		
				}
				break;
				
				case 3:
				{
					categories();
				}
				break;
			} //fin del switch case principal...
				system("pause");
			}while(opt!=3);
			
			system("cls");
		}
		else if (id_help!=id || pass_help!=pass)
		{
			cout<<"Id/passkey incorrectos... Regresando al menú principal de nuevo. (Error data_Securiry3@x)"<<endl;
			intentos --;
			cout<<"Oportunidades restantes: "<<intentos<<endl;
			system("pause");
			system("cls");
			
			if (intentos == 0)
			{
				cout<<"System restarting 0 oportunities..."<<endl;
				system("pause");
				cout<<"Loading page . . ."<<endl;
			}
		}	
	}//Fin del while principal
	return 0;
}
	
