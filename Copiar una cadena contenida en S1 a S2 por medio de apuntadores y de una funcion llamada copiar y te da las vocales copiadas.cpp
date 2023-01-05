//Este programa sirve para copiar una cadena contenida en S1 a S2
//por medio de apuntadores y de una funcion llamada copiar y te da las vocales copiadas
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
//PROGRAMA #12
int copiar (char *s1, char *s2, char *s3)
{
int k=0;
while (*s1!='\0')
{
*s2=*s1;
k++;
s1++;
s2++;
}
*s2='\0';
return(k);
}
int copiarvocales (char *s1, char *s2, char *s3)
{
int k=0;
while (*s1!='\0')
{
*s2=*s1;
if(*s1=='a'|| *s1=='e'|| *s1=='i'|| *s1=='o'|| *s1=='u')s1++;
s2++;
}
*s2='\0';
return(k);
}
int main(void)
{
char cad1[50], cad2[50], cad3[50];
char *cadena1, *cadena2, *cadena3;
int tam;
system("cls");
cout<<"\n\n\n\t Este programa sirve para copiar una cadena contenida en S1 a S2";
cout<<"\n\n\t por medio de apuntadores y de una funcion llamada copiar";
cout<<"\n\n\n\n\n\n\n\n\t\t\tPRESIONE <ENTER> para continuar";
getch();
cadena1=cad1;
cadena2=cad2;
cadena3=cad3;
cout<<"\n COPIADO DE UNA CADENA";
cout<<"\n\n Ingrese la cadena a copiar:\n\t";
fflush(stdin);
gets(cad1);
cout<<"\n\n\t La cadena a copiar es: "<< cad1;
tam=copiar(cadena1, cadena2, cadena3);
cout<<"\n\n\t La cadena copiada fue: "<< cadena2;
cout<<"\n\n\t Se copiaron "<<tam <<" caracteres";
cout<<"\n\n\t La cadena copiada fue: "<< cadena2;
cout<<"\n\n\t Se copiaron estas vocales "<<tam <<" caracteres";
getch();
}
