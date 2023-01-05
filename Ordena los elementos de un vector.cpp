//P.5 - ESCRIBE UN PROGRAMA QUE ORDENE LOS ELEMENTOS DENTRO DE UN VECTOR
#include<iostream>
using namespace std;
main(){
	int num,aux;
	cout<<"Cuantos numeros seran: ";
	cin>>num;
	int arreglo[num];
	cout<<endl<<"***CAPTURA DE NUMEROS***"<<endl;
	for(int x=1;x<=num;x++){
		cout<<"Ingresa el numero "<<x<<" de la serie: ";
		cin>>arreglo[x];
		cout<<endl;
	}
	system ("cls");
	cout<<"***MUESTRA DE NUMEROS***"<<endl;
	for(int y=1;y<=num;y++){
		cout<<"Numero "<<y<<".- "<<arreglo[y]<<endl;
	}
	for(int z=1;z<=num;z++){
		for(int v=0;v<num;v++){
			if(arreglo[v]>arreglo[v+1]){
				aux = arreglo[v];
				arreglo[v] = arreglo [v+1];
				arreglo[v+1] = aux;
			}
		}
	}
	cout<<endl<<"***NUMEROS ARREGLADOS***"<<endl;
	for(int w=1;w<=num;w++){
		cout<<"Numero "<<w<<".- "<<arreglo[w]<<endl;
	}
	system ("pause");
}
