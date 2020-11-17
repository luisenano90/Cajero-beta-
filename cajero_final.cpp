#include <iostream>

int option = 0; //opción a elegir.
int dep, ret, acum_dep, ret_transferencia = 0; //Deposito, retiro, y acumuladores.
int contador_movements, nip_intentos = 0;

using namespace std;

string name_user, nip, answer, account_bank, new_nip = ""; //valores string de nombre y nip.

int main() //Estructura principal del programa.

{
	
	//Bienvenida y entradas iniciales.
		cout<<"Longoria's Bank::___Version___:1.1.0 2020 inc/No copyright infringment (ALL RIGHTS RESERVED...)"<<endl;
		cout<<"Bienvenido al cajero Longoria's bank"<<endl;
		cout<<""<<endl;//Salto de línea.
		cout<<"Por favor ingrese su nombre..."<<endl;
		cin>>name_user;
		cout<<"Ingrese su nip"<<endl;
		cin>>nip;
		cout<<"Ingrese su numero de cuenta bancaria: "<<endl;
		cin>>account_bank;
		cout<<""<<endl;
		cout<<"---------------------------------------------"<<endl;
		cout<<"Bienvenido/a: "<<name_user<<endl;
		cout<<"Su nip es: "<<nip<<endl;
		cout<<"Numero de cuenta: "<<account_bank<<endl;
		
	
	 do //ciclo principal while.
	{
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
				
				cout<<"Su saldo actual es de: "<<dep<<endl;
		    	cout<<"¿Cuanto es el monto que desea depositar?"<<endl;
				cin>>dep;
				cout<<"--------------------"<<endl;
				cout<<"Usted a depositado: $"<<dep<<endl;
				cout<<"Saldo actualizado..."<<endl;
				acum_dep = acum_dep + dep;
				cout<<"Su saldo actual es: $"<<acum_dep<<endl;;
				cout<<"--------------------"<<endl;
				cout<<"Desea realizar otra transaccion?"<<endl;
			
			break;
			
			case 2: {//opcion de retiro.
				
				cout<<"Su saldo actual es de: $"<<acum_dep<<endl;
				cout<<"cuanto desea retirar? "<<endl;
				cin>>ret;
			
			if (ret<=0){ //Condicional que determina cuando un retiro ingresado no es correcto.
			
				cout<<"usted no puede retirar montos sin valor o negativos, ingrese una cantidad correcta"<<endl;
				cout<<"ingrese su monto a retirar..."<<endl;
				cin>>ret;	
				
				acum_dep = acum_dep - ret;
				cout<<""<<endl;
				cout<<"Desea realizar otra transaccion?"<<endl;
				
			}
			else {
				
				acum_dep = acum_dep - ret;
				
				cout<<"Saldo actualizado..."<<endl;
				cout<<"Su saldo actual es de: $"<<acum_dep<<endl;
				cout<<"Desea realizar otra transaccion?"<<endl;
				
			}
				
				
		}
			break;
			
			case 3://opcion de transferencia que resta al saldo principal.
			
			cout<<"Ingrese el monto de transaccion que desea transferir de su cuenta a otra..."<<endl;
			cin>>ret_transferencia;
			cout<<"Saldo acutalizado..."<<endl;
			acum_dep = acum_dep - ret_transferencia;// Resta del retiro transferido al saldo total de la cuenta.
			cout<<"Su saldo actual es de: $"<<acum_dep<<endl;
			cout<<""<<endl;
			cout<<"Desea realizar otra transaccion?"<<endl;
			
			break;
			
			case 4://cambio de nip.
				
				cout<<"Solicitud de cambio de nip en proceso: "<<endl;
				cout<<"Ingrese su nip acutal..."<<endl;
				cin>>nip;
			
				if (nip == nip) {
				
					
						while (nip_intentos==3)
				
						{
							
							
						cout<<"Nip erroneo, ingreselo nuevamente..."<<endl;
						cin>>nip;
							
						nip_intentos = nip_intentos  + 1;
						cout<<"Intentos : "<<nip_intentos<<endl;
						
						}	
				}
					
	   	
	   			else {
	   	
	   	
	   					cout<<"ingrese el nuevo nip a reemplazar"<<endl;
	   					cin>>new_nip;
	   		
	   					nip = new_nip;
	   					cout<<"nuevo nip es: "<<nip<<endl;
						
						cout<<"Desea realizar otra transaccion?"<<endl;
				
				}
				
				break;
				
				case 5://Consulta de saldo.
					
					cout<<"Su saldo actual es de: "<<acum_dep<<endl;
					cout<<""<<endl;
					cout<<"Desea realizar otra transaccion?"<<endl;
					
				break;
				
				case 6://Exit.
					
					cout<<"Salida... ¿Esta seguro que desea salir?"<<endl;
					cout<<"si - no"<<endl;
					
				break;
			default:
				
				cout<<"opcioon inexistente dentro del menu..."<<endl;
				
			break;
				
		}//Llave final del switch case.
				
		cin>>answer;		
	}while (answer=="si"); //Término del Do-While.
	
	
	return 0;//Return final
}
