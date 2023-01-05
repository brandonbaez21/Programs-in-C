//Programa para obtener el producto de dos numeros enteros positivos usando funciones interativas y recursivas
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
class producto
{
int a,b;
public:
void menu (void);
void capturadatos();
int fitera(int a, int b);
int frecur(int a, int b);
};
void producto::capturadatos()
{
cout <<"\n DA EL VALOR DE A: ";
cin >> a;
cout <<"\n DA EL VALOR DE B: ";
cin >> b;
//return (a,b);
}
int producto::fitera(int a ,int b)
{
int i,s=0;
for (i=1;i<=b;i++)
{
s=s+a;
}
return s;
}
int producto::frecur(int a,int b)
{
if(b==1)return a;
{
return(frecur(a,(b-1))+a);
}
}
void producto::menu(void)
{
int opc;
system("cls");
cout << "\nPRODUCTO DE DOS ENTEROS POSITIVOS\n\n";
cout << "\n 1.- PRODUCTO ITERATIVO.";
cout << "\n 2.- PRODUCTO RECURSIVO.";
cout << "\n 3.- TERMINAR EL PROGRAMA.";
cout << "\n\n\t\t\tOPCION: ";
cin >> opc;
switch (opc)
{
case 1: system("cls");
capturadatos();
cout <<"\n El resultado de: \n\t\t"<< a << "* "<< b << "= "; //<< fitera(a,b));
cout << fitera(a,b);
getch();
break;
case 2: system("cls");
capturadatos();
cout <<"\n El resultado de:\n\t\t"<< a << "*" << b << "= "; //<< frecur(a,b));
cout << frecur(a,b);
getch();
break;
case 3: system("cls");cout <<"\nFIN!!!!";getche();
exit(0);
default: cout <<"\n Error en su opcion!!!!!";
cout <<"\n\n Vuelva a dar su opcion";
getch();
break;
}
}
int main()
{ producto objeto;
system("cls");
cout <<"\n\tPrograma que sirve para calcular la multiplicación de dos numeros\n";
cout <<"\n\tenteros usando funciones iterativas y recursivas.";
getche();
for(;;)
objeto.menu();
}
