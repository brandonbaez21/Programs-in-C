//Programa que te muestra el uso de apuntadores y cambios el
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
//PROGRAMA #10
int main (void)
{
int a, *x, aa, *m;
float b, *y, bb, *n;
char c, *z, cc, *o;
system("cls");
cout<<"\nEste programa muestra el uso de apuntadores";
a=123;
b=171.78;
c='A';
aa=79;
bb=85.5;
cc='B';
x=&a;
y=&b;
z=&c;
m=&aa;
n=&bb;
o=&cc;
system("cls");
cout<<"\nContenido de las variables";
cout<<" \n a="<<a;
cout<<" \n b="<<b;
cout<<" \n c="<<c;
cout<<" \n aa="<<aa;
cout<<" \n bb="<<bb;
cout<<" \n cc="<<cc;
cout<<"\nContenido de las variables a las que se apunta";
cout<<" \n *x="<< *x;
cout<<" \n *y="<< *y;
cout<<" \n *z="<< *z;
cout<<" \n *m="<< *m;
cout<<" \n *n="<< *n;
cout<<" \n *o="<< *o;
cout<<"\nDirección a la que se apunta";
cout<<" \n x="<< x;
cout<<" \n y="<< y;
cout<<" \n z="<< z;
cout<<" \n m="<< m;
cout<<" \n n="<< n;
cout<<" \n o="<< o;
cout<<"\nDirección en la que se encuentra la variable";
cout<<" \n &a="<<&a;
cout<<" \n &b="<<&b;
cout<<" \n &c="<<&c;
cout<<" \n &aa="<<&aa;
cout<<" \n &bb="<<&bb;
cout<<" \n &cc="<<&cc;
cout<<"La suma de a y aa es= "<<*x+*m<<endl;
cout<<"La suma de b y bb es= "<<*y+*n<<endl;
getch();
}
