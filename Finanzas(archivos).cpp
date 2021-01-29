#include <iostream> //Librer�as incluidas. 
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <fstream>
#include<iomanip>
//variables principales
int user, day, month, year = 0;
int opt, opt_cat, opt_r, opt_pay, opt_trans;
int intentos = 3;
double saldo, gasto, ingresos, saldo_f,billetera,tarjeta, monto = 0;
using namespace std;
string archive_name2="";
string archive_name="";
string text_reg = "";
fstream archivo;
bool search_helper=false;
string answer="";
string ingreso, id_reference ="";
string et;
string warn = "Un mal uso de la app le podria provocar la restricci�n de su cuenta."; //warn (aviso)
string ver = "1.0.100";//N�mero de version...
string pass_help, id_help = ""; //variables string
//Inicio del programa----------------------------------------------------------------------------------------

void user_new()
{
	string user_question = "";
	string user_new_pass = "";
	string user_file = "";
	
	cout<<"Ingrese el nombre de usuario que desea registrar:"<<endl;
	cin>>user_question;
	cout<<"Digite la contrase�a"<<endl;
	cin>>user_new_pass;
	
	user_file = user_question+".txt";
	
	archivo.open(user_file.c_str(),ios::app);
	
	archivo<<user_new_pass<<endl;
	
	archivo.close();
	
	cout<<"Nuevo usuario registrado...!!"<<endl;
}
void comentary_register()
{
	archivo.open(archive_name2.c_str(),ios::app);	
		
	if (opt == 1 && opt_r == 1)
		
	archivo<<"Realiz� una recarga a su tarjeta de: $"<<saldo<<" el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt == 1 && opt_r ==2)
	
	archivo<<"Realiz� una recarga a su billetera de: $"<<saldo<<" el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_cat == 1)
	
	archivo<<"Realiz� un gasto en la categor�a hogar de: $"<<gasto<<", comprando: "<<et<<", el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_cat == 2)
	
	archivo<<"Realiz� un gasto en la categor�a escolar de: $"<<gasto<<", comprando: "<<et<<", el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_cat == 3)
	
	archivo<<"Realiz� un gasto en la categor�a trabajo de: $"<<gasto<<", comprando: "<<et<<", el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_cat == 4)
	
	archivo<<"Realiz� un gasto en la categor�a salud de: $"<<gasto<<", comprando: "<<et<<", el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_cat == 5)
	
	archivo<<"Realiz� un gasto en la categor�a diversi�n de: $"<<gasto<<", comprando: "<<et<<", el d�a: "<<day<<"/"<<month<<"/"<<year<<endl;
	
	else if (opt_trans == 1)
	
	archivo<<"Realiz� una transferencia a su tarjeta con un monto de: $"<<monto<<endl;
	
	else if (opt_trans == 2)
	
	archivo<<"Realiz� una transferencia a su tarjeta con un monto de: $"<<monto<<endl;
	
	archivo.close();
}
void read_archive()
{
	archivo.open(archive_name.c_str());
	archivo>>pass_help;
	archivo>>tarjeta;
	archivo>>billetera;
	archivo.close();
}
void search_process()
{
	string pass_reference="";
	archivo.open(archive_name.c_str());
	archivo>>pass_reference;
	if(pass_help==pass_reference)
	{
		search_helper=true;
	}
	archivo.close();
}
void save_datas() //standby...
{
	archivo.open(archive_name.c_str());
	archivo<<pass_help<<'\n';
	archivo<<tarjeta<<'\n';
	archivo<<billetera<<'\n';
	archivo.close();
}
void categorias()
{
	et="";
	cout<<"Bienvenido al sistema de categorias..."<<endl;
	cout<<""<<endl;
	cout<<"El sistema de categor�as presenta secciones a elegir como referencia a su gasto..."<<endl;
	cout<<""<<endl;
	cout<<"Seleccione la categor�a a relazionar con el gasto"<<endl;
	
	cout<<"1.- hogar"<<endl;
	cout<<"2.- escolar"<<endl;
	cout<<"3.- trabajo"<<endl;
	cout<<"4.- salud"<<endl;
	cout<<"5.- Diversi�n"<<endl;
	cin>>opt_cat;
	system("cls");
	
	if (opt_cat == 1)
	{
		cout<<"Opcion hogar seleccionada..."<<endl;
		cout<<"�De cuanto ser� su gasto?"<<endl;
		cin>>gasto;
		cout<<"�Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
		if (opt_pay == 1)
		{
			tarjeta= tarjeta - gasto;
			save_datas();
		}
		else
		{
			billetera=billetera-gasto;
			save_datas();
		}
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"D�a: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"A�o: ";cin>>year;
		cout<<"A�ada una etiqueta del gasto..."<<endl;
		cin>>et;
		comentary_register();	
	}
	else if (opt_cat==2)
	{
		cout<<"Opcion escolar seleccionada..."<<endl;
		cout<<"�De cuanto es el gasto?"<<endl;
		cin>>gasto;
		cout<<"�Con que desea pagarlo: 1.- Tarjeta o 2.- Billetera??"<<endl;
		cin>>opt_pay;

			if (opt_pay == 1)
			{
			tarjeta= tarjeta - gasto;
			save_datas();
			}
			else
			{
			billetera=billetera-gasto;
			save_datas();
			}
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"D�a: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"A�o: ";cin>>year;
		cout<<"A�ada una etiqueta del gasto..."<<endl;
		cin>>et;
		comentary_register();
		
	}
	else if (opt_cat==3)
	{
		cout<<"Opcion trabajo seleccionada..."<<endl;
		cout<<"�De cuanto ser� su gasto?"<<endl;
		cin>>gasto;
		cout<<"�Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;

		if (opt_pay == 1)
		{
		tarjeta= tarjeta - gasto;
		save_datas();
		}
		else
		{
		billetera=billetera-gasto;
		save_datas();
		}
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"D�a: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"A�o: ";cin>>year;
		cout<<"A�ada una etiqueta del gasto..."<<endl;
		cin>>et;
		comentary_register();

	}
	else if (opt_cat==4)
	{
		cout<<"Opcion Salud seleccionada..."<<endl;
		cout<<"�De cuanto ser� su gasto?"<<endl;
		cin>>gasto;
		cout<<"�Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;

		if (opt_pay == 1)
		{
		tarjeta= tarjeta - gasto;
		save_datas();
		}
		else
		{
		billetera=billetera-gasto;	
		save_datas();
		}
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"D�a: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"A�o: ";cin>>year;
		cout<<"A�ada una etiqueta del gasto..."<<endl;
		cin>>et;
		comentary_register();
	}
	else if (opt_cat==5)
	{
		cout<<"Opcion Diversi�n seleccionada..."<<endl;
		cout<<"�De cuanto ser� su gasto?"<<endl;
		cin>>gasto;
		cout<<"�Con que desea pagarlo 1.- Tarjeta o 2.- Billetera?"<<endl;
		cin>>opt_pay;
			if (opt_pay==1)
			{
			tarjeta= tarjeta - gasto;
			save_datas();
			}
			else
			{
			billetera=billetera-gasto;
			save_datas();
			}
		cout<<"Realizado..."<<endl;
		cout<<"Digite la fecha actual"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"D�a: ";cin>>day;
		cout<<"Mes: ";cin>>month;
		cout<<"A�o: ";cin>>year;
		cout<<"A�ada una etiqueta del gasto..."<<endl;
		cin>>et;
		comentary_register();
	}
	else
	{
		cout<<"Categor�a desconocida. Regresando al men�..."<<endl;
	}
}
void transferencia()
{
	cout<<"Bienvenido al men� de transferencias [Finanzas do�a tota]"<<endl;
	cout<<"El sistema de finanzas do�a tota aplica movimientos entre tarjeta y billetera"<<endl;
	cout<<""<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Saldo total"<<saldo_f<<endl;
	
	cout<<"�A donde desea transefir dinero?"<<endl;
	cout<<"1.- Tarjeta..."<<endl;
	cout<<"2.- Billetera..."<<endl;
	cin>>opt_trans;
	
	if (opt_trans==1)
	{
		cout<<"------------------------------------------------------"<<endl;
		cout<<"Bienvenido al sistema de transferencias a su tarjeta"<<endl;
		cout<<"�cuanto desea mover a su tarjeta?"<<endl;
		cin>>monto;
		cout<<""<<endl;
		billetera = billetera - monto;
		tarjeta = tarjeta + monto;
		cout<<"Realizando transacci�n..."<<endl;
		cout<<"Transacci�n realizada..."<<endl;
		cout<<"Saldo actualizado en tarjeta y billetera"<<endl;	
		cout<<"Digite la fecha"<<endl;
		cout<<"Dia: "<<endl;
		cin>>day;
		cout<<"Mes"<<endl;
		cin>>month;
		cout<<"A�o:"<<endl;
		cin>>year;
		cout<<"Ingrese una etiqueta"<<endl;
		cin>>et;
		cout<<"-------------------------------------------------------"<<endl;
		save_datas();
		comentary_register();
	}
	else
		{
		cout<<"--------------------------------------------------------"<<endl;
		cout<<"Bienvenido al sistema de transferencias a su billetera personal"<<endl;
		cout<<"�Cuanto desea mover a su billetera personal?"<<endl;
		cin>>monto;
		cout<<""<<endl;
		tarjeta = tarjeta - monto;
		billetera = billetera + monto;
		cout<<"Realizando transacci�n..."<<endl;
		cout<<"Transacci�n realizada..."<<endl;
		cout<<"Saldo actualizado en tarjeta y billetera"<<endl;	
		cout<<"Digite la fecha!"<<endl;
		cout<<"Dia: "<<endl;
		cin>>day;
		cout<<"Mes"<<endl;
		cin>>month;
		cout<<"A�o:"<<endl;
		cin>>year;
		cout<<"Ingrese una etiqueta"<<endl;
		cin>>et;
		cout<<"-------------------------------------------------------"<<endl;
		save_datas();
		comentary_register();
		}
}
int main() //Programa principal...
{
	setlocale(LC_ALL,"spanish"); //Funci�n que ayuda a la sintaxis para mostrar puntuaciones...
while (true)
{
	tarjeta=0;
	billetera=0;
	cout<<"*****************************************************************"<<endl;
		cout<<"Bienvenido al sistema de finanzas 2020-2021 Longoria's Corporation"<<endl;
		cout<<"*****************************************************************"<<endl;
		cout<<"Versi�n: "<<ver<<endl;
		cout<<""<<endl;	
		cout<<"------------------------------------------------------------------------------"<<endl;
		cout<<"El sistema de finanzas que le ayudar� a observar sus ingresos y egresos diarios"<<endl;
		cout<<"AVISO: "<<warn<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
		system("pause");
		system("cls");
		
		cout<<"Desea registrar un nuevo usuario"<<endl;
		cin>>answer;
		
		if (answer == "si" || answer == "SI" || answer=="Si")
		user_new();
		cout<<"Bienvenido usuario, Digite su ID personal como primer paso de inicio de sesi�n:"<<endl;
		cin>>id_help;
		cout<<"Digite su password contrase�a!..."<<endl;
		cin>>pass_help;
		system("cls");
		
		archive_name=id_help+".txt";
			search_process();
			if (search_helper)
			{
				do {
					archive_name2="Registers-"+id_help+".txt"; //registros
					archivo.open(archive_name2.c_str(),ios::app);
					archivo.close();
					read_archive();
				saldo_f=0;
				system("cls");
			//------------------------------------------------------------------------// MEN�
			cout<<"Bienvenido: "<<id_help<<", �Que desea hacer?"<<endl;	
			cout<<""<<endl;
			cout<<"Men� principal... "<<endl;
			cout<<"1.- Recargar saldo"<<endl;
			cout<<"2.- Transacciones realizadas"<<endl;
			cout<<"3.- Realizar una transferencia"<<endl;
			cout<<"4.- Realizar gasto (Visita a la secci�n de categor�as!)"<<endl;
			cout<<"5.- Salir "<<endl;
			cout<<"-----------------"<<endl;
			cout<<""<<endl; //salto de linea...	
			cin>>opt;
			system("cls");
			
			switch (opt) //Switch Case principal
			{
				case 1:
				{
					cout<<"Hola usuario: "<<id_help<<" �Cuanto desea recargar?"<<endl;
					cin>>saldo;
					cout<<"�A donde desea mandarlo?"<<endl;
					cout<<"1.- Tarjeta"<<endl;
					cout<<"2.- Billetera"<<endl;
					cin>>opt_r;
					cout<<"�Que tipo de ingreso es...?"<<endl;
					cin>>ingreso;
					system("cls");
					
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
						cout<<"ingrese el d�a"<<endl;
						cin>>day;
						cout<<"ingrese el mes"<<endl;
						cin>>month;
						cout<<"ingrese el a�o"<<endl;
						cin>>year;
						save_datas();
						comentary_register();
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
						cout<<"ingrese el d�a"<<endl;
						cin>>day;
						cout<<"ingrese el mes"<<endl;
						cin>>month;
						cout<<"ingrese el a�o"<<endl;
						cin>>year;
						save_datas();
						comentary_register();
					}
				}
				break;
				
				case 2:
				{
					cout<<"Mostrando transacciones realizadas y sus saldos totales..."<<endl;
					cout<<"-----------------------------------"<<endl;
					archivo.open(archive_name2.c_str());
					string ayudante = "";
					while (!archivo.eof())
					{
						getline(archivo,ayudante);
						
						cout<<ayudante<<endl;
					}
					archivo.close();
					
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
					cout<<"Secci�n desconocida---ERROR 241@C1_s"<<endl;
				break;	
			} //fin del switch case principal...
				system("pause");
			}while(opt!=5);
			}
			else
			 cout<<"user and pass incorrect!! ERROR 2_a@x33"<<endl;
			system("cls");	
}		
	return 0;
}
	
