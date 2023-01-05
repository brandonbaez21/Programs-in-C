//programa que muestra la tabla ASCII en decimal, hexadecimal y octal
#include<conio.h>
#include<string.h>
#include<iostream>
//#include<iomanip.h>
using namespace std;
// PROGRAMA No.1
int main(void)
{
unsigned char c;
cout<<" TABLA ASCII"; cout<<"\n\n\n Este programa despliega en la pantalla la tabla ASCII";
cout<<"\n En modo caracter y sus valores en decimal y hexadecimal \n\n";
getch();
system("cls");
cout<<"------------------------------------------------------------"<<endl;
cout<<"| CARACTER º DECIMAL º HEXADECIMAL °OCTAL |"<<endl;
cout<<"------------------------------------------------------------"<<endl;
for(c=0;c<128;c++)
{
cout<<endl<<"| "<<c<<" |"<<"\t"<< oct << (int)c <<" |"<< hex << (int)c <<" |";
getch();
}
cout<<endl<<"| "<<c<<" |"<<"\t"<< oct << (int)c <<" |"<< hex << (int)c <<" |";
cout <<endl;
cout<<"----------------------------------------";
getch();
return(0);
}
