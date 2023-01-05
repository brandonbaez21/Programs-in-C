//PROGRAMA QUE MANEJA UNA UNION Y DESPLIEGA LOS VALORES ALMACENADOS
//EL PROGRAMA ALMACENA LA CADENA DE CARACTERES AEIOU EN 
//UN ELEMENTO DE LA UNION Y DESPLIEGA LO ALMACENADO EN LOS OTROS ELEMENTOS
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
system("cls");
cout<<"\n\n PROGRAMA No. 7";
cout<<"PROGRAMA QUE MANEJA UNA UNION Y DESPLIEGA LOS VALORES ALMACENADOS";
cout<<"\n EL PROGRAMA ALMACENA LA CADENA DE CARACTERES AEIOU EN ";
cout<<"\n UN ELEMENTO DE LA UNION Y DESPLIEGA LO ALMACENADO EN LOS OTROS ELEMENTOS";
getch();
union x
{
char vocal[6];
short int a[3];
float x;
}v;
strcpy(v.vocal, "AAAAA");
cout<<"\n\n\nv.vocal= "<<v.vocal;
cout<<"\n\nv.a[0]= "<<v.a[0];
cout<<"\n\nv.a[1]= "<<v.a[1];
cout<<"\n\nv.a[2]= "<<v.a[2];
cout<<"\n\nv.vocal[0]= "<<v.vocal[0];
cout<<"\n\nv.vocal[1]= "<<v.vocal[1];
cout<<"\n\nv.vocal[2]= "<<v.vocal[2];
cout<<"\n\nv.vocal[3]= "<<v.vocal[3];
cout<<"\n\nv.vocal[4]= "<<v.vocal[4];
cout<<"V.X= "<<v.x<<endl;
getch();
}
