//Programa que empleando apuntadores a variables tipo caracter sirve
//para devolver el tamaño de una cadena cualquiera usando una funcion
//llamada longitud (con solo letras)
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
//PROGRAMA #11
int longitud (char*ap)
{
int k=0;
while (*ap!='\0')
{
k++;
ap++;
}
return(k);
};
int vocales (char*ap)
{
int k=0;
while (*ap!='\0')
{
if(*ap=='a'|| *ap=='e'|| *ap=='i'|| *ap=='o'|| *ap=='u')k++;
ap++;
}
return(k);
};
int main(void)
{
char cadena[40], *ap;
system("cls");
cout<<"\n\n\nPrograma que empleando apuntadores a variables tipo caracter sirve";
cout<<"\npara devolver el tamaño de una cadena cualquiera usando una funcion";
cout<<"\nllamada longitud";
cout<<"\n\n\n\n\n\tPRESIONE <ENTER> para continuar";
getch();
cout<<"\n\n\t\t\t TAMAÑO DE UNA CADENA";
cout<<"\n\n\t Ingrese una cadena cualquiera:\n\t";
fflush(stdin);
gets(cadena); ap = cadena;
cout<<"\n\n\n La longitud de la cadena:\n\t"<< cadena<<"\n\tes ";
cout<<longitud(ap);
cout<<"\n\n\n Las vocales son:\n\t"<< vocales<<"\n\tes ";
cout<<vocales(ap);
getch();
}
