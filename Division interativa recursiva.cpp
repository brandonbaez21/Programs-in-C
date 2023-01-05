//el programa realiza la suma de las divisiones para llegar a un numero entero (entre 2) usando recursividad u funcion interativa
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class funciones
{
	int n;
	
	public:
		int fr(int n);
		int fi(int n);
};


int funciones::fr(int n)
{
	if(n==1) return(0);
	return (fr(n/2)+1);
}

//La funcion realiza la suma de las divisiones para llegar al numero

int funciones::fi(int n)
{
	int e=0;
	
	while(n != 1)
	{
		n=n/2;
		e++;
	}
	
	return e;		
}



int main(void)
{
	int n, rec, rec2;
	funciones a;
	cout<< "La funcion realiza la suma de las divisiones para llegar al numero"<<endl;
	
	
	cout << "Dame el numero entero: ";
	cin >> n;
	
	
	rec = a.fr(n);
	cout <<"FORMA RECURSIVA : " << rec << endl;
	
	rec2 = a.fi(n);
	cout <<"FORMA ITERATIVA : " << rec2;
	
	getch();
}
