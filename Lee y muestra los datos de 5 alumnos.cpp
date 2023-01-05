#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main (void)
{
int i;
float ppeso, pest,s, s2,pesof[5];
system("cls");
cout<<"\n Este programa lee, almacena y muestra datos de 5 alumnos ";
cout<<"\n e indica cuantos alumnos est�n por debajo del promedio";
cout<<"\n de peso y estaura";
getch();
struct alumno
{
char nombre [50];
char boleta[12];
float peso;
float estatura;
//}x[5];
};
alumno *ap[5];
system("cls");
for(i=0; i<5;i++)
{
cout<<"\n\n\nCAPTURA DE DATOS DEL ALUMNO # "<< i+1;
ap[i]=new (alumno);
cout<<"\nNombre: ";
fflush(stdin);
//gets(x[i].nombre);
gets(ap[i]->nombre);
cout<<"\nBoleta: ";
//fflush(stdin);
gets(ap[i]->boleta);
//gets(x[i].boleta);
cout<<"\nPeso: ";
cin>>(ap[i]->peso);
//cin>>(x[i].peso);
cout<<"\nEstatura:";
cin>>(ap[i]->estatura);
//cin>>(x[i].estatura);
system("cls");
}
cout<<"\n Datos Capturados";
for(i=0;i<5;i++)
{
cout<<"\nAlumno "<<i+1;
//ut<<"\n\n\nboleta: "<<(x[i].boleta)<<"\t Nombre: "<<(x[i].nombre);
cout<<"\n\n\nboleta: "<<(ap[i]->boleta)<<"\t Nombre: "<<(ap[i]->nombre);
//cout<<"\nestatura: "<<(x[i].statura <<"\t Peso: "<<(x[i].eso);
cout<<"\nestatura: "<<(ap[i]->estatura) <<"\t Peso: "<<(ap[i]->peso);
getch();
system ("cls");
}
s=0;
s2=0;
for(i=0;i<5;i++)
{
//s+x[i].peso;
s=s+ap[i]->peso;
//s2=s2+x[i].estatura;
s2=s2+ap[i]->estatura;
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
//if(ppeso>x[i].peso)
if(ppeso>ap[i]->peso)
{
//cout<<"\n\t"<< x[i].nombre <<" pesa "<< x[i].peso <<" esta por debajo del promedio de peso que es "<<ppeso;
cout<<"\n\t"<< ap[i]->nombre <<" pesa "<< ap[i]->peso <<" esta por debajo del promedio de peso que es "<<ppeso;
}
}
getch();
system("cls");
for(i=0;i<5;i++)
{
//if(pest>x[i].estatura)
if(pest>ap[i]->estatura)
{
//cout<<"\n\t"<< x[i].nombre <<" mide "<< x[i].estatura <<" esta por debajo del promedio de estatura que es "<<pest;
cout<<"\n\t"<< ap[i]->nombre <<" mide "<< ap[i]->estatura <<" esta por debajo del promedio de estatura que es "<<pest;
}
}
getch();
}
