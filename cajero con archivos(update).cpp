#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <fstream>
#include<iomanip>

//variables numéricas

int saldo_final, deposito, retiro, option, opt_pay, day, month, year = 0;
int intentos = 3;
int pack_inter = 650;
int water = 250;
int light = 900;
using namespace std;
//variables string
string nip, account_bank= "";
string nip_aux, nip_archive = ""; //variables auxiliares...
string archive_name, archive_name2, answer_confirm = "";
string answer = "";
//variable booleana
bool search_helper = false;
//creación de archivo.
fstream archivo;
void comentarios() //registros...
{
	archivo.open(archive_name2.c_str(),ios::app);
	if (option==1)
	cout<<"Realizó un depósito a su cuenta de: $"<<deposito<<" el día: "<<day<<"/"<<month<<"/"<<year<<endl;
	else if (option==2)
	cout<<"Realizó un retiro a su cuenta de: $"<<retiro<<" el día: "<<day<<"/"<<month<<"/"<<year<<endl;
	else if (opt_pay==1)
	cout<<"Realizó un pago al servicio de telefonía e internet de: $"<<pack_inter<<" el día: "<<day<<"/"<<month<<"/"<<year<<endl;
	else if (opt_pay==2)
	cout<<"Realizó un pago al servicio de agua con un monto de: $"<<water<<" el día: "<<day<<"/"<<month<<"/"<<year<<endl;
	else if(opt_pay==3)
	cout<<"Realizó un pago al servicio de lúz con un monto de: $"<<light<<" el día: "<<day<<"/"<<month<<"/"<<year<<endl;
}
void nuevo_ingreso()
{
	string user_name = "";
	string user_new_nip = "";
	string user_file = "";
	
	cout<<"Ingrese el nombre de usuario que desea registrar:"<<endl;
	cin>>user_name;
	cout<<"Digite la contraseña"<<endl;
	cin>>user_new_nip;
	
	user_file = user_name+".txt";
	
	archivo.open(user_file.c_str(),ios::app);
	
	archivo<<user_new_nip<<endl;
	
	archivo.close();
	
	cout<<"Nuevo usuario registrado...!!"<<endl;
}
void leer_archivo()
{
	archivo.open(archive_name.c_str());
	archivo>>nip;
	archivo>>saldo_final;
	archivo.close();
}

void nip_process() //nip en archivo.
{
	archivo.open(archive_name.c_str());
	archivo>>nip_archive;
	if (nip==nip_archive)
	{
		search_helper=true;
	}
	archivo.close();
}

void guardar_datos() //standby...
{
	archivo.open(archive_name.c_str());
	archivo<<nip<<'\n';
	archivo<<saldo_final<<'\n';
	archivo.close();
}
void servicios() //Función de pago de servicios.
{

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
	
	if (opt_pay==1) //internet y teléfono.
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
			cout<<"Digite la fecha actual"<<endl;
			cout<<"Día: ";cin>>day;
			cout<<";Més: ";cin>>month;
			cout<<"Año: ";cin>>year;
			comentarios();
			guardar_datos();
		}
		else
			cout<<"Regresando al menú principal para realizar otra opción"<<endl;
	}
	else if (opt_pay==2) //agua.
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
			cout<<"Digite la fecha actual"<<endl;
			cout<<"Día: ";cin>>day;
			cout<<";Més: ";cin>>month;
			cout<<"Año: ";cin>>year;
			comentarios();
			guardar_datos();
		}
		else
		cout<<"Regresando al menú principal para realizar otra acción"<<endl;
	}
	else if (opt_pay==3) //lúz.
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
			cout<<"Digite la fecha actual"<<endl;
			cout<<"Día: ";cin>>day;
			cout<<";Més: ";cin>>month;
			cout<<"Año: ";cin>>year;
			comentarios();
			guardar_datos();
		}
		else
		cout<<"Regresando al menú principal para realizar otra acción"<<endl;
	}
}

int main() //programa principal/estructura principal.
{
	saldo_final=0;
	while (intentos!=0 || true)
	{
		setlocale(LC_ALL, "spanish"); //implementación de la librería setlocale para sintáxis en español...
		//Bienvenida y entradas iniciales.
		cout<<"Longoria's Bank::___Version___:1.1.0 2020 inc/No copyright infringment (ALL RIGHTS RESERVED...)"<<endl;
		cout<<"Bienvenido al cajero Longoria's bank del año 1985 porque no hay presupuesto."<<endl;
		cout<<""<<endl;//Salto de línea.
		cout<<"¿Desea registrar un nuevo usuario?"<<endl;
		cin>>answer_confirm;
		if (answer == "si" || answer == "SI" || answer=="Si")
		{
			nuevo_ingreso();
		}
		
			
		cout<<"Digite su cuenta de banco por favor!"<<endl;
		cin>>account_bank;
		cout<<"Ingrese su nip"<<endl;
		cin>>nip;
		system("cls");
		archive_name=nip+".txt";
		nip_process();
	if (search_helper)
	{
		cout<<"Bienvenido!!"<<endl;;
		cout<<"Su nip es: * * * *"<<endl;
		cout<<"Número de cuenta: "<<account_bank<<endl;
		cout<<""<<endl;	
		do{
			archive_name2="Registers-"+nip+".txt"; //registros
			archivo.open(archive_name2.c_str(),ios::app);
			archivo.close();
			leer_archivo();
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
					guardar_datos();
					cout<<"Digite la fecha actual"<<endl;
					cout<<"Día: ";cin>>day;
					cout<<";Més: ";cin>>month;
					cout<<"Año: ";cin>>year;
					comentarios();
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
					guardar_datos();
					cout<<"Digite la fecha actual"<<endl;
					cout<<"Día: ";cin>>day;
					cout<<";Més: ";cin>>month;
					cout<<"Año: ";cin>>year;
					comentarios();
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
					guardar_datos();
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
		}//switch case (término)...
	}while(option!=7);	//fin del Do-While para el menú...
	}//condicional principal...
	else
	{
		if (intentos==0)
		{
		cout<<"--------------------"<<endl;
		cout<<""<<endl;
		cout<<"***System blocked***"<<endl;
		cout<<""<<endl;
		cout<<"--------------------"<<endl;
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
	}
	}//termino del while principal...
	return 0;
}//llave del programa principal
