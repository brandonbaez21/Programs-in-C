//P.3 - ESCIBE UN PROGRAMA QUE SUME DOS VECTORES, INICIALIZE UNO DE LOS VECTORES
#include <iostream>
using namespace std;
int main(){
	int posicion, valor, pibote = 3;
    int vectorZ[4] {7, 2, 16, 4};	
	int vectorY[4];
	int vectorX[4];
    for(posicion=0; posicion<4; posicion++){
    	cout<<("Ingrese un valor dentro del vectorY - posicion ")<<posicion<<endl;
		cin>>valor;
		vectorY[posicion]=valor;
	}
	system ("cls");
    for(posicion=0; posicion<4; posicion++){
		vectorX[posicion]=vectorY[pibote]+vectorZ[posicion];
		cout<<vectorX[posicion]<<" = "<<vectorY[pibote]<<" + "<<vectorZ[posicion]<<endl;
		pibote--;
	}
	system ("pause");
}
