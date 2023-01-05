//P.1 - ESCRIBE UN PROGRAMA PARA LLENAR E IMPRIMIR LOS ELEMENTOS DE UN VECTOR
//P.2 - ESCRIBE UNA FUNCION PARA CALCULAR EL PROMEDIO DE LOS ELEMENTOS DE UN VECTOR
#include <iostream>
using namespace std;
float promedio (float a, float b);
int main(){
	int limite, posicion, valor, suma = 0;
	float resultado;
    cout<<("Ingrese el limite de elementos del vector")<<endl;
    cin>>limite;
    int vector[limite];
    system ("cls");
    for(posicion=0; posicion<limite; posicion++){
    	cout<<("Ingrese la posicion ")<<posicion<<(" del vector")<<endl;
		cin>>valor;
		vector[posicion]=valor;
	}
	system ("cls");
    for(posicion=0; posicion<limite; posicion++){
    	cout<<("Dato guardado en posicion ")<<posicion<<(" = ")<<vector[posicion]<<endl;
    	suma+=vector[posicion];
	}
	resultado=promedio(suma, limite);
	cout<<("El promedio de ")<<limite<<(" dato(s) almacenados es = ")<<resultado<<endl;
	system ("pause");
}

float promedio (float a, float b){
	float respuesta;
	respuesta=(a/b);
	return (respuesta);
}
