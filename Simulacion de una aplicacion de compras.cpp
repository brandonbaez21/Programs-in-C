#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

class banco
{
      float saldo;
      int cuenta;
      string nom;
      float costo;
      
      public: 
              void ini(string,float,int);
              float op(float);
};

void banco::ini(string N,float S, int C)
{
     nom=N;
     saldo=S;
     cuenta=C;
}

float banco::op(float co)
{
      costo=co;
      saldo-=costo;
      cout<<"Tu saldo total es:"<<saldo<<endl;
      return(saldo);
}

class tienda
{
      string mod;
      float precio;
      int piezas;
      float saldo;
      
      public:
             void ini(string, float,int,float);
             float op();
             void imp();
};

void tienda::ini(string M, float Pre, int P, float S)
{
     mod=M;
     precio=Pre;
     piezas=P;
     saldo=S;
}

float tienda::op()
{
      piezas--;
      saldo+=precio;
      return(saldo);
}
      
void tienda::imp()
{
     cout<<"El total de piezas son:"<<piezas<<endl;
     cout<<"Tu saldo actual es:"<<saldo<<endl;
}

int main()
{
    int op;
    float saldo,R;
    banco cliente;
    tienda cel,samsumg,lg,ipad;
    
    do
    {
           cout<<"Elige un articulo"<<endl;
           cout<<"1-samsumg"<<endl;
           cout<<"2-lg"<<endl;
           cout<<"3-Ipad"<<endl;
           cout<<"4-Salir"<<endl;
           cin>>op;
           
          
           
    switch(op)
    {
           case 1:
                do
                {
                   cout<<"Ipod"<<endl;
                   cout<<"1-Comprar"<<endl;
                   cout<<"2-No comprar"<<endl;
                   cout<<"3-Salir,Gracias por visitar la pagina"<<endl;
                   cin>>op;
                   
           switch(op)
           {
                     case 1:
                     cel.ini("samsung", 1400,1000,1000);
                     cliente.ini("brandon",50000,440);                  
                     R=cliente.op(saldo);
                     saldo=cel.op();
                     
                     if(R>=0)
                     {
                      cout<<"Compra exitosa"<<endl;
                      cel.imp();
                      }
    
                      else 
                      {
                      cout<<"Tu Saldo es insuficiente"<<endl;
                      }
                      
                      break;
                      case 2:
                           cout<<"Gracias por su visita:"<<endl;
                      break;
                      case 3:
                      break;
            }
            }while (op!=3);
                      break;
                    
                              
            case 2:
                 do
                 {
                   cout<<"lg"<<endl;
                   cout<<"1-Comprar"<<endl;
                   cout<<"2-No comprar"<<endl;
                   cout<<"3-Salir,Gracias por visitar la pagina"<<endl;
                   cin>>op;
                   
                   switch(op)
           {
                     case 1:
                    lg.ini("lg", 1400,1000,1000);
                     cliente.ini("brandon",50000,4400);                    
                     R=cliente.op(saldo);
                     saldo=lg.op();
                     
                     if(R>=0)
                     {
                      cout<<"Compra exitosa"<<endl;
                      lg.imp();
                      }
    
                      else 
                      {
                      cout<<"Tu Saldo es insuficiente"<<endl;
                      }
                   
                      break;
                      case 2:
                           cout<<"Gracias por su visita:"<<endl;
                      break;
                      case 3:
                      break;
            }
            }while (op!=3);
                   break;
                   
             case 3:
                  do
                 {
                   cout<<"Ipad"<<endl;
                   cout<<"1-Comprar"<<endl;
                   cout<<"2-No comprar"<<endl;
                   cout<<"3-Salir,Gracias por visitar la pagina"<<endl;
                   cin>>op;
                   
                   switch(op)
           {
                     case 1:
                     ipad.ini("ipad",1400,1000,1000);
                     cliente.ini("brandon",5000,4400);                
                     R=cliente.op(saldo);
                     saldo=ipad.op();
                     
                     if(R>=0)
                     {
                      cout<<"Compra exitosa"<<endl;
                      ipad.imp();
                      }
    
                      else 
                      {
                      cout<<"Tu Saldo es insuficiente"<<endl;
                      }
                   
                      break;
                      case 2:
                           cout<<"Gracias por su visita:"<<endl;
                      break;
                      case 3:
                      break;
            }
            }while (op!=3);
                   break;      
                   
            case 4:
                 break;
                 
                      system("PAUSE>null");
                      }
            }
            while(op!=4);
            system("PAUSE");
}

