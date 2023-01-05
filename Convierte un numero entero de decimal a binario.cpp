//programa que conviernte un numero entero de decimal a binario
#include<conio.h>
#include<string.h>
#include<iostream>
//programa No.3
using namespace std;
int main()
{
int n,r[16],x;//declaras variables y el arreglo
for(x=0;x<16;x++)
{ r[x]=0; }
cout<<"------------------------Conversión de decimal a binario---------------------\n\n";
cout<<"Numero entero positivo que desea convertir: \n";
cin>>n;
x=0;
do {
{ r[x]=n%2; }
x++;//aumentar la x
n=n/2;
} while(n!=0);//Para detener
for(x=15;x>=0;x--)//para poder imprimirlo de manera correcta
{ cout<<"°"<<r[x]; }
getch(); //MODIFICARLO EN CLASE
}
