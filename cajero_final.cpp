#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>
int option = 0; //opción a elegir.
double saldo_1, saldo_2, saldo_3, dep, ret, global_saldo, trf = 0; //Deposito, retiro, y acumuladores.
int  intentos = 3;
int user = 0;
using namespace std;
string helper_confirm = "";
string name_user, nip, answer, account_bank = ""; //valores string de nombre y nip.
string account_reference = "";
struct users
//string version = "1.1.0";
{	
 string	id_2, nip2;
}; //la estructura lleva punto y coma para finalización.

//implementación de un vector para almanecar datos de los 3 usuarios precargados.

users dates_bank [3] = {"1106199901","0699","0609199502","0695","1711196703","1767"}; //datos almacenados en el vector.

//generación de funciones para usuarios.

void user_separator()
{	
	if (account_bank == dates_bank[0].id_2)
	user = 1;
	else if (account_bank == dates_bank[1].id_2)
	user = 2;
	else 
	user = 3;	
}
void	trans_dep() //función para determinar depositos y retiros por usuario...
{
	if (user==1)
	{
		saldo_1= saldo_1 + dep;
		global_saldo = saldo_1;	
	}
	else if (user==2)
	{
		saldo_2= saldo_2 + dep;
		global_saldo = saldo_2;		
	}
	else
	{	
		saldo_3= saldo_3 + dep;
		global_saldo = saldo_3;	
	}
}
	//funcion para retirar.
void trans_ret()
{

	if (user==1)
	{
		saldo_1= saldo_1 - ret;
		global_saldo = saldo_1;		
	}
	else if (user==2)
	{
		saldo_2= saldo_2 - ret;
		global_saldo = saldo_2;	
	}
	else
	{	
		saldo_3= saldo_3 - ret;
		global_saldo = saldo_3;	
	}
}
void nip_change()
{
	cout<<"Bienvenido al menú de cambio de NIP version 1.0.1 del año 1985 porque no hay presupuesto para equipos actualizados del 2020"<<endl;
	string auxiliar_variable = "";
	
	cout<<"Ingrese el nuevo nip que desea establecer..."<<endl;
	cin>>auxiliar_variable;
	
	if (auxiliar_variable.length() ==4)
	{
		dates_bank[user-1].nip2 = auxiliar_variable;
	
		nip = auxiliar_variable;
	}
	else
	{
		cout<<"El NIP se compone solo de 4 caracteres"<<endl;
		cout<<"Loading. . . "<<endl;
		cout<<"Regresando al menú principal... (Vuelva a hacer el proceso!)"<<endl;
	}
}
void transferencia()
{
	cout<<"Bienvenido al sistema de transferencias bancarias de: Longoria's Bank 1985 V1.0.1"<<endl;
	cout<<"Los métodos de transaciones se hacen referenciando números de cuenta..."<<endl;
	
	cout<<"ingrese el número de cuenta al que desea transferir un monto específico..."<<endl;
	cout<<"Recuerde!!! solo montos que no sean $0 o negativos..."<<endl;
	cin>>account_reference;
	
	if (user==1)
	{
		if (account_reference == dates_bank[1].id_2)
		{
		cout<<"Digite el monto específico a transferir..."<<endl;
		cin>>trf;
		cout<<"----------------------------------"<<endl;
		cout<<"Cargando..."<<endl;
		cout<<"Preparando transacción..."<<endl;
		cout<<"Transacción realizada con éxito!!!"<<endl;
		cout<<"----------------------------------"<<endl;
		saldo_1 = saldo_1 - trf;
		saldo_2 = saldo_2 + trf;
		cout<<"Su saldo actual es de: $"<<saldo_1<<endl;
		}
		else if (account_reference==dates_bank[2].id_2)
		{
			cout<<"Digite el monto específico a transferir..."<<endl;
			cin>>trf;
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			saldo_1 = saldo_1 - trf;
			saldo_3 = saldo_3 + trf;
			cout<<"Su saldo actual es de: $"<<saldo_1<<endl;
		}
		else
		cout<<"Número de cuenta incorrecto/inexistente. Ingrese el número de cuenta correcto..."<<endl;
	}
	else if (user==2)
	{
		if (account_reference == dates_bank[0].id_2)
		{
		cout<<"Digite el monto a transferir..."<<endl;
		cin>>trf;
		cout<<"----------------------------------"<<endl;
		cout<<"cargando..."<<endl;
		cout<<"Preparando transacción..."<<endl;
		cout<<"Transacción realizada con éxito!!!"<<endl;
		cout<<"----------------------------------"<<endl;
		saldo_2 = saldo_2 - trf;
		saldo_1= saldo_1 + trf;
		cout<<"Su saldo actual es de: $"<<saldo_2<<endl;
		}
		else if(account_reference == dates_bank[2].id_2)
		{
		cout<<"Digite el monto a transferir..."<<endl;
		cin>>trf;
		cout<<"----------------------------------"<<endl;
		cout<<"cargando..."<<endl;
		cout<<"Preparando transacción..."<<endl;
		cout<<"Transacción realizada con éxito!!!"<<endl;
		cout<<"----------------------------------"<<endl;
		saldo_2 = saldo_2 - trf;
		saldo_3= saldo_3 + trf;
		cout<<"Su saldo actual es de: $"<<saldo_2<<endl;
		}
		else
		cout<<"Número de cuenta incorrecto/inexistente. Ingrese el número de cuenta correcto..."<<endl;
	}
	else
	{
		if(account_reference == dates_bank[0].id_2)
		{
		cout<<"Digite el monto a transferir..."<<endl;
		cin>>trf;
		cout<<"----------------------------------"<<endl;
		cout<<"cargando..."<<endl;
		cout<<"Preparando transacción..."<<endl;
		cout<<"Transacción realizada con éxito!!!"<<endl;
		cout<<"----------------------------------"<<endl;
		saldo_3 = saldo_3 - trf;
		saldo_1= saldo_1 + trf;
		cout<<"Su saldo actual es de: $"<<saldo_3<<endl;
		}
		else if(account_reference == dates_bank[1].id_2)
		{
		cout<<"Digite el monto a transferir..."<<endl;
		cin>>trf;
		cout<<"----------------------------------"<<endl;
		cout<<"cargando..."<<endl;
		cout<<"Preparando transacción..."<<endl;
		cout<<"Transacción realizada con éxito!!!"<<endl;
		cout<<"----------------------------------"<<endl;
		saldo_3 = saldo_3 - trf;
		saldo_2= saldo_2 + trf;
		cout<<"Su saldo actual es de: $"<<saldo_3<<endl;
		}
		else
		cout<<"Número de cuenta incorrecto/inexistente. Ingrese el número de cuenta correcto..."<<endl;
	}
}

//-----------------------------------------------------------
int main() //Estructura principal del programa.

{
	setlocale(LC_ALL,"spanish"); //Función que detecta en idioma español sintáxis con acentos, Ñ, etc...
	
	while (intentos != 0)
	{
		
		system("cls");
			//Bienvenida y entradas iniciales.
		cout<<"Longoria's Bank::___Version___:1.1.0 2020 inc/No copyright infringment (ALL RIGHTS RESERVED...)"<<endl;
		cout<<"Bienvenido al cajero Longoria's bank del año 1985 porque no hay presupuesto."<<endl;
		cout<<""<<endl;//Salto de línea.
		cout<<"Ingrese su numero de cuenta bancaria: "<<endl;
		cin>>account_bank;
		if (account_bank.length()==10)
		{
			cout<<"Ingrese su nip"<<endl;
			cin>>nip;
		}
		else
		{
			cout<<"La cuenta de banco debe contener 10 digitos exactos (ERROR 518 data warning!!!)"<<endl;
			cout<<""<<endl;
			cout<<"--------------------"<<endl;
		}
			
		if (account_bank == dates_bank[0].id_2 && nip == dates_bank[0].nip2 || account_bank == dates_bank[1].id_2 && nip == dates_bank[1].nip2 || account_bank == dates_bank[2].id_2 && nip == dates_bank[2].nip2 )
		{
		do //ciclo principal while.
	{
		global_saldo = 0;
		user_separator();
		system("cls");
			cout<<""<<endl;
		cout<<"---------------------------------------------"<<endl;
		cout<<"Bienvenido/a usuario: "<<user<<endl;
		cout<<"Su nip es: * * * *"<<endl;
		cout<<"Numero de cuenta: "<<account_bank<<endl;
		cout<<""<<endl;
		cout<<"Que movimiento desea hacer?"<<endl;
		cout<<"---------------------------------------------"<<endl;
		cout<<"1.- Depositar."<<endl;
		cout<<"2.- Retirar."<<endl;
		cout<<"3.- Transferir."<<endl;
		cout<<"4.- Cambiar NIP."<<endl;
		cout<<"5.- Consultar saldo."<<endl;
		cout<<"6.- Salir."<<endl;
		cout<<"---------------------------------------------"<<endl;
		cin>>option;
		switch (option) {	
			case 1://opción de deposito.
				
				cout<<"Ingrese el deposito deseado a su cuenta..."<<endl;
				cin>>dep;
				//condicion para no aceptar montos negativos o sin fondos...
				if (dep<=0)
					
					cout<<"Error de transacción... No se aceptan montos negativos o sin fondos($0)"<<endl;
				else
				{
					trans_dep();
					cout<<"Su saldo actual es de: $"<<global_saldo<<endl;
				}
					 
			break;
			
			case 2: //opcion de retiro.
				
				cout<<"Ingrese su nip"<<endl;
				cin>>helper_confirm;
				
				if (nip == helper_confirm )
				{
					cout<<"Ingrese el monto a retirar a su cuenta..."<<endl;
				cin>>ret;
				
				if (ret <= 0)
				
					cout<<"Error de retiro... NOT FUOUND (solo se hacen retiros con fondos)"<<endl;
					
				else if (user == 1 && ret > saldo_1 || user ==2 && ret > saldo_2 || user == 3 && ret>saldo_3)
				
					cout<<"Saldo en cuenta insuficiente... Deposite o avise que no hay fondos suficientes en la cuenta..."<<endl;
				
				else
				{
				trans_ret();
				
					cout<<"Su saldo actual es: $"<<global_saldo<<endl;
				}
					
				}
				
				else
				
				cout<<"Nip erróneo... Regresando al menu principal. (Password Error 3@Az# returning)"<<endl;
			break;
			
			case 3://opcion de transferencia que resta al saldo principal.
			
				transferencia();
				
			break;
			
			case 4://cambio de nip.
				
				cout<<"Ingrese su nip actual"<<endl;
				cin>>helper_confirm;
				
				if (nip == helper_confirm)
					
					nip_change();
				else
				
					cout<<"Su nip es erróneo... Ingreselo de nuevo (returning to main menu)"<<endl;
					
				break;
				
				case 5://Consulta de saldo.
					
					cout<<"Su saldo actual es: $";
					if (user==1)
					cout<<saldo_1<<endl;
					else if (user==2)
					cout<<saldo_2<<endl;
					else
					cout<<saldo_3<<endl;
						
				break;
				case 6://Exit.
					
					break;
					
				break;
			default:
				
				cout<<"opcioon inexistente dentro del menu..."<<endl;	
			break;		
		}//Llave final del switch case.		
		system("pause");		
	}while (option!=6); //Término del Do-While.
		}
	else //else del if principal.
		{
			intentos--;
			cout<<"Error 404.H@not found... quedan: "<<intentos<<" intentos"<<endl;
			cout<<"-------------------"<<endl;	
			system("Pause");
			system("cls");
			if (intentos==0)
			{
				cout<<"------------------"<<endl;
				cout<<""<<endl;
				cout<<"System blocked..."<<endl;
				cout<<"Loading..."<<endl;
				cout<<"------------------"<<endl;
			}				
		}
	}
	return 0;//Return final
}
