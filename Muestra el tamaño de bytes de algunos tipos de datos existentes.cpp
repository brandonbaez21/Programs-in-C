//programa que muestra el tamaño de bytes de algunos tipos de datos existentes
#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
int main (void)
{
system("cls");
cout << "\n Programa #4";
cout <<"\n\nEste programa muestra el tamaño en bytes de algunos tipos de datos\n\n";
getch();
cout <<" \n \n El tamaño que ocupa un dato del tipo:";
cout <<" \n \n \n char :"<< sizeof(char) <<" byte(s)";
cout <<" \n \n \n int :"<< sizeof(int) <<" byte(s)";
cout <<" \n \n \n short int :"<< sizeof(short int) <<" byte(s)";
cout <<" \n \n \n long int :"<< sizeof(long int) <<" byte(s)";
cout <<" \n \n \n float :"<< sizeof(float) <<" byte(s)";
cout <<" \n \n \n double :"<< sizeof(double) <<" byte(s)";
cout <<" \n \n \n long double :"<< sizeof(long double) <<" byte(s)";
getche();
}
