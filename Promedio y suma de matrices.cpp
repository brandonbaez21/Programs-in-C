#include <iostream>
using namespace std;
int fila, columna, valor, opcion, suma1 = 0, promedio;
bool bandera1=false, bandera2=false; 
int main(){
do{    
	cout<<"Ingrese el numero de columnas de la matriz: "<<endl;
	cin>>columna;
	cout<<"Ingrese el numero de filas de la matriz: "<<endl;
	cin>>fila;
	system("cls");
	int matriz[columna][fila];
	for(int pos_x = 0; pos_x < columna; pos_x++){
		for(int pos_y = 0; pos_y < fila; pos_y++){
			cout<<"Ingrese el dato de la columna "<<pos_x<<" y fila "<<pos_y<<endl;
			cin>>valor;	
			matriz[pos_x][pos_y]=valor;	
		}
	}
	system("cls");
do{
	for(int pos_x = 0; pos_x < columna; pos_x++){
		for(int pos_y = 0; pos_y < fila; pos_y++){
			cout<<"["<<pos_x<<","<<pos_y<<"] = "<<matriz[pos_x][pos_y]<<endl;	
		}
	}
	cout<<endl;
	cout<<"1.- Obtener el promedio de todos los valores de la matriz"<<endl;
	cout<<"2.- Obtener la suma de los elementos en la diagonal principal"<<endl;
	cout<<"3.- Volver a capturar los datos de la matriz"<<endl;
	cout<<"4.- Salir"<<endl;
	cin>>opcion;
	system("cls");
	switch(opcion){
		case 1:
			for(int pos_x = 0; pos_x < columna; pos_x++){
				for(int pos_y = 0; pos_y < fila; pos_y++){
					suma1+=matriz[pos_x][pos_y];
				}
			}
			promedio=(suma1/(fila*columna));
			cout<<"El promedio de todos los valores de la matriz es: "<<promedio<<endl;
			bandera1=true;
			bandera2=true;
			break;
		case 2:
			if(columna==fila){
				for(int pos_x = 0; pos_x < columna; pos_x++){
					suma1+=matriz[pos_x][pos_x];
				}				
				cout<<"La suma de los elementos en la diagonal principal: "<<suma1<<endl;
			}
			else{
				cout<<"Opcion solo valida en matrices cuyo numero de filas y columnas sean iguales"<<endl;	
			}
			bandera1=true;
			bandera2=true;						
			break;
		case 3:
			bandera1=true;
			break;
		case 4:
			bandera1=true;
			bandera2=true;
			break;
		default:
			break;
		}
}while(bandera1!=true);
}while(bandera2!=true);
	system("pause");
}
