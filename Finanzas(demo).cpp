#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
//variables principales
int opt = 0;
int intentos = 3;
double saldo = 0;
using namespace std;
string warn = "Incluiremos el pago de servicios en una pronta actualización (pays update)"; //warn (aviso)
string ver = "1.0.100";//Número de version...
string id = "LELP06111999";
string pass = "1999";
string pass_help, id_help = "";
//Inicio del programa----------------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL,"spanish"); //Función que ayuda a la sintaxis para mostrar puntuaciones...
	
	while (intentos!= 0)
	{
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
		//------------------------------------------------------------------------// MENÚ
		cout<<"Bienvenido usuario, Digite su ID personal como primer paso de inicio de seción:"<<endl;
		cin>>id_help;
		cout<<"DIgite su password/nip (recuerde solamente 4 digitos exactos)..."<<endl;
		cin>>pass_help;
		system("cls");
	
		if (id_help == id && pass_help == pass)
		{
			cout<<"Bienvenido... ¿Que desea hacer?"<<endl;	
			cout<<""<<endl;
			cout<<"Menú principal... "<<endl;
			cout<<"-----------------"<<endl;
			cout<<"1.- Cargar a la billetera"<<endl;
			cout<<"2.- Consultar saldo de la billetera"<<endl;
			cout<<"3.- Gasto de saldo total"<<endl;
			cout<<"Categorías"<<endl;	
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
	
