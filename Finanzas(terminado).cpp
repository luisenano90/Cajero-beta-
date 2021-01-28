#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
//variables principales
int user, day, month, year = 0;
int opt, opt_cat, opt_r, opt_pay, opt_trans;
int intentos = 3;
double saldo, gasto, ingresos, saldo_f,billetera,tarjeta, monto = 0;
double saldo_f2,billetera2,tarjeta2 = 0;
double saldo_f3,billetera3,tarjeta3 = 0;
using namespace std;
string ingreso, id_reference ="";
string et;
string warn = "Un mal uso de la app le podria provocar la restricción de su cuenta."; //warn (aviso)
string ver = "1.0.100";//Número de version...
struct users
{
	string id1, pass1;
};
users id_accounts[3] = {"LELP06111999","luis1999","USER02020000","user2000","USER03030000","user3000"};
string pass_help, id_help = "";
//Inicio del programa----------------------------------------------------------------------------------------
void user_separator()
{
	if (id_help == id_accounts[0].id1)
	user = 1;
	else if (id_help == id_accounts[1].id1)
	user = 2;
	else 
	user = 3;
}
void categorias()
{
	et="";
	cout<<"Bienvenido al sistema de categorias..."<<endl;
	cout<<""<<endl;
	cout<<"El sistema de categorías presenta secciones a elegir como referencia a su gasto..."<<endl;
	cout<<""<<endl;
	cout<<"Seleccione la categoría a relazionar con el gasto"<<endl;
	
	cout<<"1.- hogar"<<endl;
	cout<<"2.- escolar"<<endl;
	cout<<"3.- trabajo"<<endl;
	cout<<"4.- salud"<<endl;
	cout<<"5.- Diversión"<<endl;
	cin>>opt_cat;
	system("cls");
	
	if (opt_cat == 1)
	{
		cout<<"Opcion hogar seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
		cout<<"¿Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
		
		if (user==1)
		{
			if (opt_pay == 1)
			tarjeta= tarjeta - gasto;
			else
			billetera=billetera-gasto;
			
		}
		else if (user==2)
		{
			if (opt_pay == 1)
			tarjeta2= tarjeta2 - gasto;
			else
			billetera2=billetera2-gasto;
		}
		else
		{
			if (opt_pay == 1)
			tarjeta3= tarjeta3 - gasto;
			else
			billetera3=billetera3-gasto;
		}	
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Día: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"Año: ";cin>>year;
		cout<<"Añada una etiqueta del gasto..."<<endl;
		cin>>et;		
	}
	else if (opt_cat==2)
	{
		cout<<"Opcion escolar seleccionada..."<<endl;
		cout<<"¿De cuanto es el gasto?"<<endl;
		cin>>gasto;
		cout<<"¿Con que desea pagarlo: 1.- Tarjeta o 2.- Billetera??"<<endl;
		cin>>opt_pay;
		if (user==1)
		{
			if (opt_pay == 1)
			tarjeta= tarjeta - gasto;
			else
			billetera=billetera-gasto;
		}
		else if (user==1)
		{
			if (opt_pay == 1)
			tarjeta2= tarjeta2-gasto;
			else
			billetera2=billetera2-gasto;
		}
		else
		{
			if (opt_pay == 1)
			tarjeta3= tarjeta3-gasto;
			else
			billetera3=billetera3-gasto;
		}	
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Día: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"Año: ";cin>>year;
		cout<<"Añada una etiqueta del gasto..."<<endl;
		cin>>et;
		
	}
	else if (opt_cat==3)
	{
		cout<<"Opcion trabajo seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
		cout<<"¿Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
		if (user==1)
		{
			if (opt_pay == 1)
			tarjeta= tarjeta - gasto;
			else
			billetera=billetera-gasto;
		}
		else if (user==2)
		{
			if (opt_pay == 1)
			tarjeta2= tarjeta2-gasto;
			else
			billetera2=billetera2-gasto;
		}
		else
		{
			if (opt_pay == 1)
			tarjeta3= tarjeta3-gasto;
			else
			billetera3=billetera3-gasto;
		}	
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Día: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"Año: ";cin>>year;
		cout<<"Añada una etiqueta del gasto..."<<endl;
		cin>>et;

	}
	else if (opt_cat==4)
	{
		cout<<"Opcion Salud seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
		cout<<"¿Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
		if (user==1)
		{
			if (opt_pay == 1)
			tarjeta= tarjeta - gasto;
			else
			billetera=billetera-gasto;
		}
		else if (user==2)
		{
			if (opt_pay == 1)
			tarjeta2= tarjeta2 - gasto;
			else
			billetera2=billetera2-gasto;
		}
		else
		{
			if (opt_pay == 1)
			tarjeta3= tarjeta3 - gasto;
			else
			billetera3=billetera3-gasto;

		}	
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Día: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"Año: ";cin>>year;
		cout<<"Añada una etiqueta del gasto..."<<endl;
		cin>>et;
	}
	else if (opt_cat==5)
	{
		cout<<"Opcion Diversión seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
		cout<<"¿Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
		if (user==1)
		{
			if (opt_pay==1)
			tarjeta= tarjeta - gasto;
			else
			billetera=billetera-gasto;	
		}
		else if (user==2)
		{
			if (opt_pay == 1)
			tarjeta2= tarjeta2 - gasto;
			else
			billetera2=billetera2-gasto;

		}
		else
		{
			if (opt_pay == 1)
			tarjeta3= tarjeta3 - gasto;
			else
			billetera3=billetera3-gasto;

		}	
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Día: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"Año: ";cin>>year;
		cout<<"Añada una etiqueta del gasto..."<<endl;
		cin>>et;
	}
	else
	{
		cout<<"Categoría desconocida. Regresando al menú..."<<endl;
	}
}

void transferencia()
{
	cout<<"Bienvenido al menú de transferencias [Finanzas doña tota]"<<endl;
	cout<<"El sistema de finanzas doña tota aplica el envio de dinero por medio de id's bancarias"<<endl;
	cout<<"Por favor, digite la id del usuario al que le quiere transferir..."<<endl;
	cin>>id_reference;
	
	if (user==1)
	{
		if (id_reference == id_accounts[1].id1)
		{
			cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta=tarjeta-monto;
			tarjeta2=tarjeta2+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera=billetera - monto;
			billetera2=billetera2 + monto;
			cout<<"Saldo actual en billetera: "<<billetera<<endl;
			}
		}
		else if (id_reference==id_accounts[2].id1)
		{
			cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta=tarjeta-monto;
			tarjeta3=tarjeta3+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera=billetera-monto;
			billetera3=billetera3+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
		}
		else
			cout<<"ID no reconocida, ingrese una correcta!!!..."<<endl;		
	}
	else if (user==2)
	{
		if (id_reference == id_accounts[0].id1){
			
			cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta2=tarjeta2-monto;
			tarjeta=tarjeta+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera2=billetera2 - monto;
			billetera=billetera + monto;
			cout<<"Saldo actual en billetera: "<<billetera<<endl;
			}
		}
		else if (id_reference==id_accounts[2].id1)
		{
			cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta2=tarjeta2-monto;
			tarjeta3=tarjeta3+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera2=billetera2-monto;
			billetera3=billetera3+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
		}
		else
		cout<<"ID no reconocida, ingrese una correcta!!!..."<<endl;
	}
	else
	{
		if (id_reference == id_accounts[0].id1)
		{
				cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta3=tarjeta3-monto;
			tarjeta=tarjeta+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera3=billetera3 - monto;
			billetera=billetera + monto;
			cout<<"Saldo actual en billetera: "<<billetera<<endl;
			}
		}
		else if(id_reference==id_accounts[1].id1)
		{
			cout<<"Ingrese la cantidad a transderir..."<<endl;
			cin>>monto;
			cout<<"¿Por donde desea pagarlo 1.- Tarjeta, 2.- billetera?"<<endl;
			cin>>opt_trans;
			if (opt_trans==1)
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			tarjeta3=tarjeta3-monto;
			tarjeta2=tarjeta2+monto;
			cout<<"Saldo actual en tarjeta: "<<tarjeta<<endl;
			}
			else
			{
			cout<<"----------------------------------"<<endl;
			cout<<"Cargando..."<<endl;
			cout<<"Preparando transacción..."<<endl;
			cout<<"Transacción realizada con éxito!!!"<<endl;
			cout<<"----------------------------------"<<endl;
			billetera3=billetera3 - monto;
			billetera2=billetera2 + monto;
			cout<<"Saldo actual en billetera: "<<billetera<<endl;
			}
		}
		else
			cout<<"ID no reconocida, ingrese una correcta!!!..."<<endl;
	}
}
		
int main() //Programa principal
{
	setlocale(LC_ALL,"spanish"); //Función que ayuda a la sintaxis para mostrar puntuaciones...
	
	while (intentos!= 0) //Cíclo principal...
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
		
		cout<<"Bienvenido usuario, Digite su ID personal como primer paso de inicio de seción:"<<endl;
		cin>>id_help;
		cout<<"DIgite su password contraseña!..."<<endl;
		cin>>pass_help;
		system("cls");
	
		if (id_help == id_accounts[0].id1 && pass_help == id_accounts[0].pass1 || id_help == id_accounts[1].id1 && pass_help == id_accounts[1].pass1 || id_help == id_accounts[2].id1 && pass_help == id_accounts[2].pass1)
		{
			do {
				saldo_f=0;
				user_separator();
				system("cls");
			//------------------------------------------------------------------------// MENÚ
			cout<<"Bienvenido!!!: "<<user<<" ¿Que desea hacer?"<<endl;	
			cout<<""<<endl;
			cout<<"Menú principal... "<<endl;
			cout<<"1.- Recargar saldo"<<endl;
			cout<<"2.- Transacciones realizadas"<<endl;
			cout<<"3.- Realizar una transferencia"<<endl;
			cout<<"4.- Realizar gasto (Visita a la sección de categorías!)"<<endl;
			cout<<"5.- Salir"<<endl;
			cout<<"-----------------"<<endl;
			cout<<""<<endl; //salto de linea...	
			cin>>opt;
			system("cls");
			
			switch (opt) //Switch Case principal
			{
				
				case 1:
				{
					cout<<"Hola usuario: "<<id_help<<" ¿Cuanto desea recargar?"<<endl;
					cin>>saldo;
					cout<<"¿A donde desea mandarlo?"<<endl;
					cout<<"1.- Tarjeta"<<endl;
					cout<<"2.- Billetera"<<endl;
					cin>>opt_r;
					cout<<"¿Que tipo de ingreso es...?"<<endl;
					cin>>ingreso;
					system("cls");
					
					
					if (user==1) //usuario 1
					{
					if (opt_r==1)
					{
						cout<<"-----------------------"<<endl;
						cout<<"Recargando a tarjeta..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo actualizado!!!"<<endl;
						cout<<""<<endl;
						tarjeta+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en tarjeta: $"<<tarjeta<<endl;
						cout<<"-----------------------"<<endl;
						
					}
					else if (opt_r==2)
					{
						cout<<"-------------------------"<<endl;
						cout<<"Recargando a billetera..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo acutalizado!!!"<<endl;
						cout<<""<<endl;
						billetera+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en billetera: $"<<billetera<<endl;
						cout<<"-------------------------"<<endl;
						
					}
					}
					else if (user==2) //usuario 2
					{
					if (opt_r==1)
					{
						cout<<"-----------------------"<<endl;
						cout<<"Recargando a tarjeta..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo actualizado!!!"<<endl;
						cout<<""<<endl;
						tarjeta2+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en tarjeta: $"<<tarjeta2<<endl;
						cout<<"-----------------------"<<endl;
						
					}
					else if (opt_r==2)
					{
						cout<<"-------------------------"<<endl;
						cout<<"Recargando a billetera..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo acutalizado!!!"<<endl;
						cout<<""<<endl;
						billetera2+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en billetera: $"<<billetera2<<endl;
						cout<<"-------------------------"<<endl;
						
					}
					}
					else //usuario 3
					{
					if (opt_r==1)
					{
						cout<<"-----------------------"<<endl;
						cout<<"Recargando a tarjeta..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo actualizado!!!"<<endl;
						cout<<""<<endl;
						tarjeta3+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en tarjeta: $"<<tarjeta3<<endl;
						cout<<"-----------------------"<<endl;
						
					}
					else if (opt_r==2)
					{
						cout<<"-------------------------"<<endl;
						cout<<"Recargando a billetera..."<<endl;
						cout<<""<<endl;
						cout<<"Saldo acutalizado!!!"<<endl;
						cout<<""<<endl;
						billetera3+=saldo;
						cout<<"Ingreso de: "<<ingreso<<endl;
						cout<<""<<endl;
						cout<<"Saldo en billetera: $"<<billetera3<<endl;
						cout<<"-------------------------"<<endl;
						
					}
					}
				}
				break;
				
				case 2:
				{
					if (user==1)
					{
					cout<<"Mostrando transacciones realizadas y sus saldos totales..."<<endl;
					cout<<"Fecha del gasto: "<<day<<"/"<<month<<"/"<<year<<endl; 
					cout<<"Usted compró/pagó: "<<et<<" Con un gasto de: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"Saldo inicial: $"<<saldo<<endl;
					cout<<"Gasto realizado: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"-------------------------------------"<<endl;
					cout<<"Su saldo actual en billetera es: $"<<billetera<<endl;
					cout<<"su saldo actual en tarjeta es: $"<<tarjeta<<endl;
					saldo_f= tarjeta + billetera;
					cout<<"Saldo final: $"<<saldo_f<<endl;
					cout<<"-------------------------------------"<<endl;
					system("pause");
					system("cls");
					}
					else if (user==2)
					{
					cout<<"Mostrando transacciones realizadas y sus saldos totales..."<<endl;
					cout<<"Fecha del gasto: "<<day<<"/"<<month<<"/"<<year<<endl; 
					cout<<"Usted compró/pagó: "<<et<<" Con un gasto de: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"Saldo inicial: $"<<saldo<<endl;
					cout<<"Gasto realizado: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"-------------------------------------"<<endl;
					cout<<"Su saldo actual en billetera es: $"<<billetera2<<endl;
					cout<<"su saldo actual en tarjeta es: $"<<tarjeta2<<endl;
					saldo_f2= tarjeta2 + billetera2;
					cout<<"Saldo final: $"<<saldo_f2<<endl;
					cout<<"-------------------------------------"<<endl;
					system("pause");
					system("cls");
					}
					else
					{
					cout<<"Mostrando transacciones realizadas y sus saldos totales..."<<endl;
					cout<<"Fecha del gasto: "<<day<<"/"<<month<<"/"<<year<<endl; 
					cout<<"Usted compró/pagó: "<<et<<" Con un gasto de: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"Saldo inicial: $"<<saldo<<endl;
					cout<<"Gasto realizado: $"<<gasto<<endl;
					cout<<""<<endl;
					cout<<"-------------------------------------"<<endl;
					cout<<"Su saldo actual en billetera es: $"<<billetera3<<endl;
					cout<<"su saldo actual en tarjeta es: $"<<tarjeta3<<endl;
					saldo_f3= tarjeta3 + billetera3;
					cout<<"Saldo final: $"<<saldo_f3<<endl;
					cout<<"-------------------------------------"<<endl;
					system("pause");
					system("cls");
					}
				}
				break;
				
				case 3:
				{
					transferencia();
					system("cls");
				}
				break;
				
				case 4:
					{
						categorias();
						system("cls");
					}
				break;
				
				case 5:
					break;
				break;
				
				default:
					cout<<"Sección desconocida---ERROR 241@C1_s"<<endl;
				break;	
			} //fin del switch case principal...
				system("pause");
			}while(opt!=5);
			system("cls");
		}
		else 
		{
			intentos --;
			cout<<"Id/passkey incorrectos... Regresando al menú principal de nuevo. (Error data_Securiry3@x)"<<endl;
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
