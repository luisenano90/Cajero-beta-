#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <fstream>
#include<iomanip>

//variables numéricas

int saldo_final, deposito, retiro, option, opt_pay = 0;
int intentos = 3;
using namespace std;

//variables string

string nip, account_bank, answer= "";
string nip_aux = ""; //variables auxiliares...

void servicios()
{
	int pack_inter = 650;
	int water = 250;
	int light = 900;
	string aux_answer;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Bienvenido al pago de servicios!"<<endl;
	cout<<"Las opciones son: "<<endl;
	cout<<"1.- Internet y telefonía (paquete junto)"<<endl;
	cout<<"2.- Agua"<<endl;
	cout<<"3.- Luz"<<endl;
	cout<<"Seleccione alguna para proceder al pago correspondiente"<<endl;
	cin>>opt_pay;
	system("cls");
	
	if (opt_pay==1)
	{
		cout<<"-------------------------------------------"<<endl;
		cout<<"Pago de servicios de MegaCablePlayTelmex"<<endl;
		cout<<"La tarifa del paquete sin límites con el que cuenta es de 1.4 megas de descarga"<<endl;
		cout<<"y 440KB de subida, con un costo de: $"<<pack_inter;
		cout<<"Su cuenta es: "<<account_bank<<"?"<<endl;
		cin>>aux_answer;
		if (aux_answer=="si"||aux_answer=="Si"||aux_answer=="SI")
		{
			cout<<""<<endl;
			cout<<"Realizando pago del servicio!!!"<<endl;
			cout<<"Actualizando saldo..."<<endl;
			cout<<"Pago realizado exitosamente"<<endl;
			saldo_final=saldo_final-pack_inter;
			
		}
		else
			cout<<"Regresando al menú principal para realizar otra opción"<<endl;
	}
	else if (opt_pay==2)
	{
		cout<<"-------------------------------------------"<<endl;
		cout<<"Sistema de pago: JAMAPA waters club"<<endl;
		cout<<"El costo mensual de consumo del hogar es de: $"<<water<<endl;
		cout<<"Su cuenta es: "<<account_bank<<"?"<<endl;
		cin>>aux_answer;
		
		if(aux_answer=="si"||aux_answer=="Si"||aux_answer=="SI")
		{
			cout<<"Realizando pago del servicio!!!"<<endl;
			cout<<"Actualizando saldo..."<<endl;
			cout<<"Pago realizado exitosamente"<<endl;
			saldo_final=saldo_final-water;
			
		}
		else
		cout<<"Regresando al menú principal para realizar otra acción"<<endl;
	}
	else if (opt_pay==3)
	{
		cout<<"Bienvenido al pago de su servicio de Luz CEF (luz pa' la gente, así es)"<<endl;
		cout<<"El costo mensual del pago de lúz es de: $"<<light<<endl;
		cout<<"Su cuenta es: "<<account_bank<<endl;
		cin>>aux_answer;
		
		if(aux_answer=="si"||aux_answer=="Si"||aux_answer=="SI")
		{
			cout<<"Realizando pago del servicio!!!"<<endl;
			cout<<"Actualizando saldo..."<<endl;
			cout<<"Pago realizado exitosamente"<<endl;
			saldo_final=saldo_final-light;
			
		}
		else
		cout<<"Regresando al menú principal para realizar otra acción"<<endl;
	}
}

int main() //programa principal/estructura principal.
{
	while (intentos!=0)
	{
		
	
	setlocale(LC_ALL, "spanish"); //implementación de la librería setlocale para sintáxis en español...
	//Bienvenida y entradas iniciales.
	cout<<"Longoria's Bank::___Version___:1.1.0 2020 inc/No copyright infringment (ALL RIGHTS RESERVED...)"<<endl;
	cout<<"Bienvenido al cajero Longoria's bank del año 1985 porque no hay presupuesto."<<endl;
	cout<<""<<endl;//Salto de línea.
	cout<<"Digite su cuenta de banco por favor!"<<endl;
	cin>>account_bank;
	cout<<"Ingrese su nip"<<endl;
	cin>>nip;
	system("cls");
	
	if (nip=="0699" || account_bank=="0611199901")
	{
		cout<<"Bienvenido!!"<<endl;;
		cout<<"Su nip es: * * * *"<<endl;
		cout<<"Número de cuenta: "<<account_bank<<endl;
		cout<<""<<endl;	
		do{
		cout<<"Que movimiento desea hacer?"<<endl;
		cout<<"---------------------------------------------"<<endl;
		cout<<"1.- Depositar."<<endl;
		cout<<"2.- Retirar."<<endl;
		cout<<"3.- Transferir."<<endl;
		cout<<"4.- Cambiar NIP."<<endl;
		cout<<"5.- Consultar saldo."<<endl;
		cout<<"6.- Pagar servicios."<<endl;
		cout<<"7.- Salir."<<endl;
		cout<<"---------------------------------------------"<<endl;
		cin>>option;
		system("cls");
		switch (option)
		{
			
			case 1:
				{
					cout<<"Bienvenido al sistema de depositar a su cuenta"<<endl;
					cout<<"¿Cuanto desea ingresar?"<<endl;
					cin>>deposito;
					saldo_final=saldo_final+deposito;
					cout<<"Realizando depósito a su cuenta"<<endl;
					cout<<"Terminando..."<<endl;
					cout<<"Saldo actualizado!"<<endl;
					cout<<"-----------------------"<<endl;
					system("pause");
					system("cls");
				}
			break;
			case 2:
				{
					cout<<"Bienvenido al sistema de retiros..."<<endl;
					cout<<""<<endl;
					cout<<"----------------------"<<endl;
					cout<<"¿Cuanto desea retirar?"<<endl;
					cin>>retiro;
					saldo_final=saldo_final-retiro;
					cout<<"Actualizando saldo..."<<endl;
					cout<<"Realizando retiro..."<<endl;
					cout<<"Retiro exitoso, su saldo está actalizado"<<endl;
					cout<<"----------------------"<<endl;
					system("pause");
					system("cls");
				}
			break;
			case 3:
				{
					cout<<"Pendiente..."<<endl; //transferencias.
				}
			break;
			case 4:
				cout<<"pendiente..."<<endl;//nip_change..
			break;
			case 5:
				{
					cout<<"-----------------------------------"<<endl;
					cout<<"";
					cout<<"Sus saldo actual en la cuenta es: $"<<saldo_final<<endl;
					cout<<"";
					cout<<"-----------------------------------"<<endl;
					system("pause");
					system("cls");
				}
			break;
			case 6:
				servicios();
				system("cls");
			break;
			
			case 7:
				break;
			break;
			
			default:
				cout<<"Sección inexistente dentro del menú, por favor ingrese una valida!---ERROR unknown option"<<endl;
			break;
		}
		}while(option!=7);	//fin del Do-While para el menú...
	} //switch case (término)...
	else 
	{
	if (intentos==0)
	{
		cout<<"--------------------"<<endl;
		cout<<""<<endl;
		cout<<"***System blocked***"<<endl;
		cout<<""<<endl;
		cout<<"--------------------"<<endl;
		exit(1);
	}
	else
	{
	cout<<"nip o cuenta incorrectos, digitelos nuevamente! ---ERROR 303---"<<endl;
	intentos--;
	cout<<"---------------------"<<endl;
	cout<<"Intentos restantes: "<<intentos<<endl;
	cout<<"---------------------"<<endl;
	system("pause");
	system("cls");
	}
	}//condicional principal...
	}//termino del while principal...
	return 0;
}//llave del programa principal
