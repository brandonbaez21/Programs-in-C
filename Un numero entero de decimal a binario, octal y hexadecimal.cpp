
//programa que convierte un numero entero de decimal a binario, octal y hexadecimal 
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
if(n%2)//residuo
{ r[x]=1; }
else
{ r[x]=0; }
x++;//aumentar la x
n=n/2;
} while(n!=0);//Para detener
for(x=15;x>=0;x--)//para poder imprimirlo de manera correcta
{ cout<<"°"<<r[x]; 
}//termina binario
getch();
int p,o[64],y;//declaras variables y el arreglo
for(y=0;y<64;y++)
{ o[y]=0; }
cout<<"    "<<endl;
cout<<"------------------------Conversión de decimal a octal---------------------";
cout<<"   "<<endl;
cout<<"Numero entero positivo que desea convertir: ";
cin>>p;
y=0;
do {
{ o[y]=n%8; }
y++;//aumentar la x
p=p/8;
} while(p!=0);//Para detener
for(y=63;y>=0;y--)//para poder imprimirlo de manera correcta
{ cout<<"°"<<o[y]; 
}//termina octal
getch();
cout<<"  "<<endl;
int w,q[128],z;//declaras variables y el arreglo
for(z=0;z<128;z++)
{ q[z]=0; }
cout<<"------------------------Conversión de decimal a hexadecimal---------------------";
cout<<"   "<<endl;
cout<<"Numero entero positivo que desea convertir: ";
cin>>w;
z=0;
do {
{ q[z]=w%16; }
z++;//aumentar la x
w=w/16;
} while(w!=0);//Para detener
for(z=127;z>=0;z--)//para poder imprimirlo de manera correcta
{ cout<<"°"<<q[z]; 
}//termina hexadecimal
getch();
}


