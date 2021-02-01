#include<iostream>
#include<conio.h>
#include<fstream>
#include<ctime>
#include<windows.h>
#include<direct.h>
#include <string.h>
#include <iomanip>

//Variables numéricas y constantes...
int option, cont_help, number, select, cantidad, h = 0;
const int datas = 25;
//tiempo...
int hours, minutes = 0;
using namespace std;
//Variables string;
string answer, user_name, work, name, name_helper = "";
string key_pass, user, document_datas, name_2 = "";
string helper{};
//creación del documento de texto!!!
fstream document;
//Variable booleana
bool search_variable = false;
bool name_search = false;
//variables tipo char con longitud de caracter...
char data_long[25]
//estructuras para vectores...
struct datas_info
{
	//variables de fechas para la info de los vectores estructurados y asignación de las tareas...
	int hours;
	int minutes;
	int days;
	int month;
	int year;
	
}
struct work_information_strings
{
	string data_base;
	string names;
	string fechas_base;
}

work_information_strings[h][h];

void save()
{
	document.open(nombre_document.c_str());
	document<<password<<endl;
	document.close();
}

void read()
{
	 document.open(name_document.c_str());
	 document>>password;
	 document.close();
}

int main()
{
	cout<<"Bienvenido al sistema de tableros/tareas Longoria´s trelo 2021"<<endl;
	cout<<"Ordenará sus actividades diarias por tableros y tareas..."<<endl;
	cout<<"ingrese su usuario"<<endl;
	cin>>user;
	cout<<"ingrese su contraseña";
	cin>>key_pass;
	cout<<""<<endl;
	cout<<"¿Que desea hacer?"<<endl;
	cout<<"1.- Crear tarea"<<endl;
	cout<<"2.- eliminar tareas"<<endl;
	cout<<"3.- Cambio de fecha"<<endl;
	cout<<"4.- ver tareas"<<endl;
	cout<<"5.- Salir"<<endl;
	do{
		
		switch (option){
			case 1:
				{
					cout<<"Bienvenido al creador de tableros de tareas Longoria´s trello 2021"<<endl;
					cout<<"ingrese el nombre de la tarea a crear..."<<endl;
					cin>>data_memory[cont_help][1].name;
					cout<<"ingrese el número de tareas a ingresar"<<endl;
					cin>>cantidad;
					for (int a=0; a<=cantidad;a++)
					{
						cout<<"Nombre de la tarea:"<<endl;
						cin>>data_memory[cont_help][a].
					}
					do{
					cout<<"Ingrese el día"<<endl;
					cin>>day;
					}while(day<=32);
					do{
					cout<<"ingrese el més: "<<endl;
					cin>>month;
					}while(month<=12);
					do{
					cout<<"ingrese el año:"<<endl;
					cin>>year;
					}while(year<=1940 || year<=)2021);
					do{
					cout<<"ingrese la hora (formato 24 hrs)"<<endl;
					cin>>hours;
					}while(hour>=0 || hour<=24);
					do{
					cout<<"Ingrese los minutos"<<endl;
					cin>>minutes;
					}while(minutes>=0 || minutes<=60);
					data_memory[cont_help][1].data_dates.days=day;
 				 	data_memory[cont_help][1].dato_dates.months=month;
  					data_memory[cont_help][1].dato_dates.years=year;
  					data_memory[cont_help][1].dato_dates.hours=hours;
  					data_memory[cont_help][1].data_dates.minutes=minutes;	
				}
			}
			break;
			case 2:
				{
					cout<<endl;
   					cout<<"Bienvenido a la eliminación de las tareas"<<endl;
					int dia,mes,ano,hora,minuts;
					bool busqueda2=false;
					cout<<"Ingrese el nombre de la tarea a eliminar: " ;
					cin>>name_work;
 					 int pos=buscar_tablero(nombre);
 					 if(buscar_nom)
 					 {
 				 	cout<<"NOMBRE DE SUBTAREA: "; cin>>nombre_auxi;
 				 	int pos2=buscar_subtarea(pos,nombre_auxi);
 				 	if(buscar_nom==true)
 				 	{
 			 		 for(int b=0;b<data;b++)
 	 					 {
 	 		 	
 	 		 				if(almacen_datos[position][b].general_data== "")
 	 		 				{
			   				data_memory[position][1].name="";
			   				}
						 }
						almacen_datos[pos][pos2].dato_general="";
					}
			break;	
			case 3:
				{
				//cambio de fecha en las tareas...
				int day, month, year =0;
				int minutesd, hoursd = 0;
				cout<<"bienvenido al cambio de información de sus tareas..."<<endl;
				cout<<"ingrese el nombre de la tarea"<<endl;
				cin>>work_name;
				line=search_tabloid(tarea_number)
				{
					if(search_name=true)
					{
						int linea,dia,mes,ano,hora,minuts;
						cout<<"Digite el nombre de la tarea:"<<endl;
						cin>>work_name;
						linea=buscar_tablero(n_tarea);
						if(name_search==true)
						{
						do
  					 	  {
   	 					  cout<<"Digite el día: ";
						   cin>>dia;
							 }while(dia<=0 || dia>=32); 
							 do
							 {
	  					 	 cout<<"Digite el mes: ";
							 cin>>mes;	
							 }while(mes<=0 || mes>=13);
							 do
							 {
								cout<<"Digite el año:";
								cin>>ano;
							 }while(ano<=2000 || ano>=2050);
    
  							do
  						   {
     						cout<<"Digite la hora: ";
							cin>>hora;	
							 }while(hora<=0 || hora>=25);
	 
							 do
							 {
						 	cout<<"Digite los minutos: ";
							cin>>minuts;
							 }while(minutes<0 || minutes>=61);
     
  						   if(minutes==60)
  						   {
  						  	 	hours+=1;
 					    		minutes=0; 	
							 }
							 if(hora>24)
							 {
						 		hours=hours-24;	
							 }
							 else if(hora==24)
							 {
						 		hours=0;
							}
 							 data_memory[pos][1].fechas_data.hours=day;
 							 data_memory[pos][1].fechas_data.hours=month;
 							 data_memory[pos][1].fechas_data.hours=year;
 							 data_memory[pos][1].fechas_data.hours=hours;
 							 data_memory[pos][1].fechas_data.minutes=minutes;
							}
						}
					}
				}
			break:
			case 4:
				{
					cout<<"bienvenido al sistema de tareas pendientes. Se le mostrarán sus tareas..."<<endl;
					for(int c=0; c<data;c++)
					{
    				for(int d=0; d<dato_n;d++)
						if(data_memory[c][d].general_data!="\0")
	  				{
	  				cout<<" Su tarea es: "<<almacen_datos[c][1].nombre<<endl;
					cout<<" Su subtarea es: "<<data_memory[c][d].general_data<<" fecha: "<<setfill('0')<<setw(2)<<data_memory[d][1].fechas_data.day <<"/"<<setfill('0')<<setw(2)<< data_memory[d][1]fechas_data.month<< "/"<<data_memory[d][1].fechas_data.year<<"  hora:"<< ('0')<<setw(1)<<data_memory[d][1].fechas_data.hours<<":"<< ('0')<<setw(1)<< data_memory[d][1].fechas_data.minutes<<endl;	
	  			  }	
				}
				}	
			break;
			case 5:
				{
					break;
				}
			break;
			default:
				cout<<"opción inexistente dentro del menú"<<endl;
			break;
	}while(option!=5);
	return 0;
}

