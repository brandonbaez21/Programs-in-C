//programa que maneja una simulacion de datos en movimiento con retraso 
#include<conio.h>
#include<string.h>
#include <stdio.h>
#include<iostream>
#include<time.h>
#include<ctime>
using namespace std;
void delay(int secs)
{
for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}
/* La funci�n time(NULL) nos devuelve el segundo exacto en que estamos.
1. Si le sumamos cierta cantidad de segundos obtenemos una fecha en el futuro.
2. En cada vuelta del ciclo se checa si esa fecha en el futuro es diferente a la fecha actual.
3. En cuanto las dos fechas son iguales el ciclo acaba y el programa contin�a. */
int main(void)
{
int i, j;
int xmin=1,xmax=15,ymin=1,ymax=3;
system("cls");
cout<<"\t\t\t\t\tMANEJO DE DATOS ENTEROS\n\t\SIMULACION DE MOVIMIENTO\n\n";
cout<<"\n\n\t\tpresione cualquier tecla para continuar";
getch();
system("cls");
for(j=ymin; j<ymax;j++)
{
for(i=xmin;i<=xmax;i++)
{ cout<<">"; delay(1);
cout <<"\b ";
}cout<<endl;
}
cout<<"\n FIN";
getch();
cout<<"\nfin del programa \n\n\n\n\n\npresione cualquier tecla para salir";
getch();
}
