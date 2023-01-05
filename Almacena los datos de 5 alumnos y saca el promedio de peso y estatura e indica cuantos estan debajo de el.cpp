//programa que almacena los datos de 5 alumnos y saca el promedio de peso y estatura e indica cuantos estan debajo de el
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main (void)
{
int i;
float ppeso, pest,s, s2,pesof[5];
system("cls");
cout <<"\n\t PROGRAMA # 5";
cout<<"\n Este programa lee, almacena y muestra datos de 5 alumnos ";
cout<<"\n e indica cuantos alumnos están por debajo del promedio";
cout<<"\n de peso y estaura";
getch();
struct alumno
{
char nombre [50];
char boleta[12];
float peso;
float estatura;
}x[5];
system("cls");
for(i=0; i<5;i++)
{
cout<<"\n\n\nCAPTURA DE DATOS DEL ALUMNO # "<< i+1;
cout<<"\nNombre: ";
fflush(stdin);
gets(x[i].nombre);
cout<<"\nBoleta: ";
//fflush(stdin);
gets(x[i].boleta);
cout<<"\nPeso: ";
cin>>x[i].peso;
cout<<"\nEstatura:";
cin>>x[i].estatura;
system("cls");
}
cout<<"\n Datos Capturados";
for(i=0;i<5;i++)
{
cout<<"\nAlumno "<<i+1;
cout<<"\n\n\nboleta: "<<x[i].boleta<<"\t Nombre: "<<x[i].nombre;
cout<<"\nestatura: "<<x[i].estatura <<"\t Peso: "<< x[i].peso;
getch();
system ("cls");
}
s=0;
s2=0;
for(i=0;i<5;i++)
{
s=s+x[i].peso;
s2=s2+x[i].estatura;
}
ppeso=s/5.0;
pest=s2/5.0;
system("cls");
cout<<"\nPROMEDIO DE PESO: "<<ppeso;
cout<<"\nPROMEDIO DE ESTATURA: "<<pest;
getch();
system("cls");
for(i=0;i<5;i++)
{
if(ppeso>x[i].peso)
{
cout<<"\n\t"<< x[i].nombre <<" pesa "<< x[i].peso <<" esta por debajo del promedio de peso que es "<<ppeso;
}
}
getch();
system("cls");
for(i=0;i<5;i++)
{
if(pest>x[i].estatura)
{
cout<<"\n\t"<< x[i].nombre <<" mide "<< x[i].estatura <<" esta por debajo del promedio de estatura que es "<<pest;
}
}
getch();
}
