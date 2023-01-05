//Imprime dos vectores
#include <iostream>
using namespace std;
int main(){
	int posicion, valor, suma = 0;
    int vectorZ[4] {7, 2, 16, 4};	
	int vectorY[4];
	int vectorX[4];
    for(posicion=0; posicion<4; posicion++)
	{
    	cout<<("Ingrese la posicion ")<<posicion<<(" del vector")<<endl;
		cin>>valor;
		vectorY[posicion]=valor;
		vectorX[posicion]=vectorY[posicion]+vectorZ[posicion];
	}
	system ("cls");
    for(posicion=0; posicion<4; posicion++)
	{
    	cout<<vectorZ[posicion]<<" + "<<vectorY[posicion]<<" = "<<vectorX[posicion]<<endl;
	}
	system ("pause");
}
