//PROGRAMA # 7: ingresa x materias, te imprime su nombre, clave y creditos que tiene y te suma los creditos de todas
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
typedef struct
{
long clave;
char descr[50];
float cred;
}asig;
int main(void)
{
asig *curr;
short n, i;
float total;
cout<<"Indique el numero de asignaturas de su CV: ";
cin>>n;
/* La variable n almacena el número de elementos de tipo
asignatura que debe tener nuestro arreglo. */
curr = (asig*) malloc(n * sizeof(asig));
if(curr == NULL)
{
cout<<"Memoria insuficiente.\n";
cout<<"La ejecucion se interrumpira.\n";
cout<<"Pulse una tecla para terminar ... ";
getch();
exit(0);
}
for(i = 0 ; i < n ; i++)
{
cout<<"\n\nAsignatura: "<<i + 1;
cout<<"\nclave : ";
cin>>(curr + i)->clave;
cout<<"\nMateria: ";
fflush(stdin);
gets((curr + i)->descr);
cout<<"\ncreditos: ";
cin>>(curr + i)->cred;
}
// Listado ...
for(i = 0 ; i < n ; i++)
{
cout<<"\n\tclave: "<<(curr + i)->clave;
cout<<"\n\tMateria: "<<(curr + i)->descr;
cout<<"\n\tcreditos: "<<(curr + i)->cred<<"\n\n";
total=total+(curr + i)->cred;
cout<<"El total de creditos es: "<<total<<endl;
}
getch();
}
