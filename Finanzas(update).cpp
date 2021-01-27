#include <iostream> //Librerías incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
//variables principales
int day, month, year = 0;
int opt, opt_cat, opt_r = 0;
int intentos = 3;
double saldo, gasto, ingresos, saldo_f,billetera,tarjeta = 0;
using namespace std;
string user ="";
string et = "";
string warn = "Un mal uso de la app le podria provocar la restricción de su cuenta."; //warn (aviso)
string ver = "1.0.100";//Número de version...
struct users
{
	string id1, pass1;
};
users id_accounts[3] = {"LELP06111999","1999","USER02020000","2000","USER03030000","3000"};
string pass_help, id_help = "";
//Inicio del programa----------------------------------------------------------------------------------------
void user_separator()
{
	if (id_help == id_accounts[0].id1)
	user = id_help;
	else if (id_help == id_accounts[1].id1)
	user = id_help;
	else 
	user = id_help;
}
void categories()
{
	cout<<"Bienvenido al sistema de categorias..."<<endl;
	cout<<""<<endl;
	cout<<"Se mostrará a continuación las categorías. Se muestran secciones del uso diario."<<endl;
	cout<<""<<endl;
	cout<<"Seleccione la categoría a relazionar con el gasto"<<endl;
	
	cout<<"1.- hogar"<<endl;
	cout<<"2.- escolar"<<endl;
	cout<<"3.- trabajo"<<endl;
	cout<<"4.- salud"<<endl;
	cout<<"5.- Diversión"<<endl;
	cin>>opt_cat;
	
	if (opt_cat == 1)
	{
		cout<<"Opcion hogar seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
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
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
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
		cout<<"Opcion salud seleccionada..."<<endl;
		cout<<"¿De cuanto será su gasto?"<<endl;
		cin>>gasto;
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
		cout<<"Categoría desconocida. Regresando al menú..."<<endl;
	
}
int main() //Programa principal
{
	setlocale(LC_ALL,"spanish"); //Función que ayuda a la sintaxis para mostrar puntuaciones...
	
	while (intentos!= 0) //Cíclo principal...
	{
		
		//------------------------------------------------------------------------// MENÚ
		
		
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
		cout<<"DIgite su password/nip (recuerde solamente 4 digitos exactos)..."<<endl;
		cin>>pass_help;
		system("cls");
	
		if (id_help == id_accounts[0].id1 && pass_help == id_accounts[0].pass1 || id_help == id_accounts[1].id1 && pass_help == id_accounts[1].pass1 || id_help == id_accounts[2].id1 && pass_help == id_accounts[2].pass1)
		{
			
			do {
			cout<<"Bienvenido usuario: "<<id_help<<" ¿Que desea hacer?"<<endl;	
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
			cout<<""<<endl;
			system("cls");
			
			switch (opt) {
				
				case 1:
				{
					cout<<"Hola usuario: "<<user<<", ¿Cuanto desea recargar?"<<endl;
					cin>>saldo;
					cout<<"¿A donde desea mandarlo?"<<endl;
					cout<<"1.- Tarjeta"<<endl;
					cout<<"2.- Billetera"<<endl;
					cin>>opt_r;
					system("cls");
					
					if (opt_r==1)
					{
						cout<<"Recargando a tarjeta..."<<endl;
						cout<<"Saldo actualizado!!!"<<endl;
						tarjeta+=saldo;
						cout<<"Saldo en tarjeta: $"<<tarjeta<<endl;
					}
					else if (opt_r==2)
					{
						cout<<"Recargando a billetera..."<<endl;
						cout<<"Saldo acutalizado!!!"<<endl;
						billetera+=saldo;
						cout<<"Saldo en billetera: $"<<billetera<<endl;
					}
				}
				break;
				
				case 2:
				{
					cout<<"En total usted ha gastado hasta el momento... $"<<endl;		
				}
				break;
				
				case 3:
				{
					cout<<"Bienvenido al sistema de transferencias a cuentas ligadas a la app mediante id bancaria"<<endl;
					
				}
				break;
				
				case 4:
				
					categories();
				
				break;
				
				case 5:
					break;
				break;
				
				default:
					cout<<"Sección desconocida---ERROR 241@C1_s"<<endl;
				break;
					
			} //fin del switch case principal...
				system("pause");
			}while(opt!=3);
			
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
	
