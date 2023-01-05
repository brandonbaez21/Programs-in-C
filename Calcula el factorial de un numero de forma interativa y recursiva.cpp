//programa que saca el factorial de un numero de forma interativa y recursiva 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
// Factorial de un número entero
class factorial
{
float n;
public:
double facite(double n);
double facrecur(double n);
};
double factorial::facite(double n)
{
double i,fac=1;
for(i=n;i>0;i--)
{
fac=fac*i;
}
return(fac);
}
double factorial::facrecur(double n)
{
if(n==0)return 1;
{
return(n*facrecur(n-1));
}
}
int main(void)
{
factorial objeto;
int opc;
double t,f;
system("cls");
cout <<"\nPROGRAMA DONDE UTILIZAMOS DOS FORMAS DE CALCULAR EL FACTORIAL DE UN NUMERO\nENTERO: FORMA ITERATIVA Y RECURSIVA \n\n";
getch();
for(;;)
{
cout <<"\n FACTORIAL DE UN NUMERO ENTERO >= 0 \n\n";
cout <<"\n 1.- FUNCION ITERATIVA";
cout <<"\n 2.- FUNCION RECURSIVA";
cout <<"\n 3.- SALIR";
cout <<"\n\n\t\t\topcion: ";
cin >>opc;
switch(opc)
{
case 1: system("cls");
cout << "\ndame el valor entero: ";
cin >> f;
t=objeto.facite(f);
cout <<"\nEl factorial de "<< f << " es: "<<t;
getch();
break;
case 2: system("cls");
cout <<"\ndame el valor entero: ";
cin >> f;
t=objeto.facrecur(f);
cout << "\nEl factorial de "<<f << " es:"<<t;
getche();
break;
case 3: system("cls");
cout <<"\n fin del programa"; getch();
exit(0);
}
}
}
