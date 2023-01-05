//PROGRAMA PARA CALCULAR LA SERIE DE FIBONACCI CON FORMAS ITERATIVA Y RECURSIVA, DANDO EL TIEMPO TARDADO
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <ctime>

using namespace std;

void delay(int secs)
{
     for(int i = (time(NULL)+secs); 
     time (NULL) !=i;
     time (NULL));
} 

class fibo
{
      int i;
      public:
             
      int hora();
      int time2();
      int fibitera(void);
      int fibrecur(void);
      long long Fibonacci(long long i);
};

int fibo::fibitera(void)
{
    
    clock_t time = clock(); //
    
    int n,x3,x2=1,x1=0,i,op,a;
    do{
    system("cls");
    cout << "\nCuantos terminos quieres visualizar?: ";
    cin >> n;
    cout << "\n";
    for(i=1;i<=n;i++)
    {
        x3=x1+x2;
        x1=x2;
        x2=x3;
      cout <<x1<<" ";
    }
    
    hora();
    time = (clock() - time)/1000; //Para que de en segundos.
    cout << endl << "El tiempo transcurrido fue: "<<time<<"s";//
    getch();
    return 0;
    
    //cout <<"\n\n\nPresiona cualquier tecla para continuar, esc para volver al menu.";
    op=getch();
    x2=1;
    x1=0;
    
    }while(op!=27);
   return(0);
}

int fibo::fibrecur(void)
{
    clock_t time = clock();//
    
    int j, op, num;
    do{
         system("cls");
         cout <<"Cuantos terminos quieres visualizar?: ";
         cin >> num;
         cout << "\n";
         for(j = 0; j < num; j++)
         {
               cout << Fibonacci(j);
               cout << " ";
         }
               hora();
               time = (clock() - time)/1000; //Medir el tiempo en segundos
               
               cout << std::setprecision(10)<<endl<<"El tiempo transcurrido fue"<< time <<"s";
               getch();
               return (0);
               
               //cout <<"\n\n\nPresiona cualquier tecla para continuar, esc para volver al menu.";
               op=getch();
         }while(op!=27);
       return(0);
}

long long fibo::Fibonacci(long long i)
{
     if((i == 0) || (i == 1)) 
     {
     return (1);
     }
     return (Fibonacci(i - 1) + Fibonacci(i - 2));
}

int fibo :: hora()
{
    time_t timer;
    struct tm *tblock;
    
    //Coge el tiempo actcual//
    timer = time (NULL);
    //Convierte el tiempo del dato a una estructura//
    tblock = localtime (&timer);
    
    cout <<std::setprecision(10)<< endl <<endl << "El tiempo en este momento es: " << asctime(tblock);
}
int main(void)
{

    system("cls");
    cout <<"\nPROGRAMA PARA CALCULAR LA SERIE DE FIBONACCI\n";
    cout <<"\nFORMAS ITERATIVA Y RECURSIVA";
    getche();
    for(;;)
    {
           fibo objeto;
           int opc;
           system("cls");

           cout <<"\nPROGRAMA PARA CALCULAR LA SERIE DE FIBONACCI\n";
           cout <<"-------------------------------------";
           cout <<"\n 1.- FUNCION ITERATIVA.";
           cout <<"\n 2.- FUNCION RECURSIVA.";
           cout <<"\n 3.- SALIR";
           cout <<"\n opcion: ";
           cin >>opc;
           switch(opc)
           {
                      case 1:objeto.fibitera();break;
                      case 2:objeto.fibrecur();break;
                      case 3:cout << "\n FIN!!"; getch(); exit(0);
           }
   }
}
