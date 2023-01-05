//programa que te muestra una asignatura, los creditos que tiene y sus convocatorias 
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>;
#include<iostream>
using namespace std;
//PROGRAMA #8
typedef struct
{
unsigned short dia;
unsigned short mes;
unsigned short anyo;
}fecha;
typedef struct
{
unsigned long clave;
char descripcion[50];
double creditos;
fecha c[3];
}asignatura;
int main(void)
{
asignatura asig;
time_t bloquehoy;
struct tm *hoy;
bloquehoy = time(NULL);
hoy = localtime(&bloquehoy);
asig.clave = 10102301;
*asig.descripcion = '\0';
strcat(asig.descripcion,"fundamentos de informatica");
asig.creditos = 7.5;
asig.c[0].dia = 15;
asig.c[0].mes = 1;
asig.c[0].anyo = hoy->tm_year - 100;
asig.c[1].dia = 21;
asig.c[1].mes = 6;
asig.c[1].anyo = hoy->tm_year - 100;
asig.c[2].dia = 1;
asig.c[2].mes = 9;
asig.c[2].anyo = hoy->tm_year - 100;
cout<<"Asignatura: \n"<<asig.clave;
cout<<"\t"<< asig.descripcion;
cout<<"\nCreditos:"<< asig.creditos;
cout<<"\nprimera convocatoria ... ";
cout<<asig.c[0].dia<<" - "<<
asig.c[0].mes<<" - "<<asig.c[0].anyo;
cout<<"\nsegunda convocatoria ... ";
cout<<asig.c[1].dia<<" - "<<
asig.c[1].mes<<" - "<<asig.c[1].anyo;
cout<<"\ntercera convocatoria ... ";
cout<<asig.c[2].dia<<" - "<<
asig.c[2].mes<<" - "<<asig.c[2].anyo;
getch();
}
