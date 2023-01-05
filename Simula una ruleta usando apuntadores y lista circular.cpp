//programa que simula una ruleta usando apuntadores y lista circular
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class dato
{
    int x;
    dato *sig;
    public:
    dato *primero, *nuevo, *indice;
    dato *asigna_memoria();
    void intro_dato(int n);
    void lista_datos(void);
    void circular(void);
    void lista_circular(void);
    void lista_n_circular(int h);
    void ruleta(void);
    int azar(int n);
};

dato *dato::asigna_memoria(void)
{
    nuevo = (dato *)new(dato);
    if(nuevo == NULL)
    { 
	    cout <<"\n No hay  memoria";
        return(nuevo);
    }
    if( primero == NULL)
    primero = indice = nuevo;
    else
    { 
	    indice = primero;
        while(indice ->sig != NULL)
        indice = indice ->sig;
        indice->sig = nuevo;
        indice = nuevo;
    }
    return(nuevo);
}

void dato::intro_dato(int n)
{
     int a=0;
    for(int i=0;i<=n;i++)
    {
	if(asigna_memoria()==NULL)return;
	indice->x=i;
    indice->sig = NULL;
    }
}

int dato::azar(int n)
{
	int v2=0, z=0;
    srand(time(0));
    v2=rand()%n+20;
	cout<<"El valor aleatorio es:"<<v2<<endl;     
    return v2;
}

void dato::circular(void)
{
    cout << "\n LISTA CIRCULAR";
    indice = primero;
    do{ 	
        cout <<"\n DATO= " <<indice ->x;
        indice = indice->sig;
        if(indice->sig == NULL)
        {
            cout << "\n DATO= " <<indice ->x;
            indice->sig = primero;
            break;
        }
    }while (indice != NULL);
    cout<<endl << "\n La Ruleta empieza a girar \n "<<endl;
}

void dato::lista_circular(void)
{
    cout<< "\n LISTA DE ELEMENTOS QUE FORMAN LA LISTA CIRCULAR";
    if(primero == NULL)
    {
	    cout <<"\n LISTA VACIA "; return; 
	}
    indice = primero;
    if(indice==primero) 
	{
	    cout<<"la lista es lineal\n"<<endl; return;
    }
    do{
        cout <<"\nDATO= " <<indice ->x<<endl;
        indice = indice->sig;
    }while (indice != primero);
}

void dato::lista_n_circular(int h)
{
    if(primero == NULL)
    {
	    cout <<"\n LISTA VACIA "; return; 
	}
    indice = primero;
    for (int i=0; i<h; i++)
    {
        indice = indice->sig;
		cout <<"N. de la ruleta " <<indice ->x<<endl; 
    }
    cout<<endl<<"el ganador es: "<<indice->x<<endl;;
    getch();
}

void dato::ruleta(void)
{
	int n=0,h=0;
    cout<<"Ingrese el numero de elementos que quiere en la ruleta: ";
    cin>>n;
	intro_dato(n);	
    circular();
    h=azar(n);
    lista_n_circular(h);
    system("pause>null");
}

int main (void)
{
    int opc;
	dato ruleta1;
    do
    {
        ruleta1.primero=NULL;
        ruleta1.indice=NULL;
        ruleta1.nuevo=NULL;
		system("cls");
		ruleta1.ruleta();
		cout<<endl<<"Reiniciar la ruleta 1-SI o 2-NO"<<endl;
		cin>>opc;
    }while(opc!=2);
    cout<<endl<<"FIN DEL PROGRAMA "<<endl;
    return 0; 	
}
