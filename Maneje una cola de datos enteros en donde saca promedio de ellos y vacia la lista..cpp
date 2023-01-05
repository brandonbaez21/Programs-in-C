// Programa que maneje una cola de datos enteros en donde saca promedio de ellos y vacia la lista.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>

using namespace std;

class cola
{
	int elemento;
	struct cola *sig;

	public:
		cola *frente, *nuevo, *final;
		cola *asigna_memoria(void);
		void insertar(int &a);
		void remover(int &a);
		void listar(void);
		void promedio(int &a);
		void vaciar(int &a);
};


cola *cola::asigna_memoria(void)
{
	nuevo=(cola*) new(class cola);
	if(nuevo==NULL)
	{
		system("cls");
		printf("\nESPACIO INSUFICIENTE EN MEMORIA");
		getch();
	}
	
	return(nuevo);
}


void cola::insertar(int &a)
{
	if(asigna_memoria() == NULL) return;
	
	if(frente==NULL)
	{
		frente=final=nuevo;
		nuevo->sig=NULL;
	}
	
	else
	{
		a++;
		final->sig=nuevo;
		nuevo->sig = NULL;
		final = final->sig;
	}
	
	system("cls");	
	cout << "\nELEMENTO A INTRODUCIR: ";
	cin >> nuevo->elemento;
	system("cls");
	cout << "\nELEMENTO INTRODUCIDO: " << nuevo->elemento;
	getch();
}


void cola::remover(int &a)
{
	cola *indice;
	
	if(frente==NULL)
	{
		system("cls");
		cout << "\nCOLA VACIA!!";
		getch();
	}
	
	else
	{
		if(a!=1)
			a--;
			
		system("cls");
		indice = frente;
		cout << "\nDATO SACADO DE LA COLA: "<< frente->elemento;
		getch();
		frente = frente->sig;
		indice->sig=NULL;
		free(indice);
	}
}


void cola::listar(void)
{
	cola *indice;
	
	cout << "\nLISTA DE DATOS"<<endl;
	
	if(frente == NULL)
	{cout <<"\n LISTA VACIA "; getch(); return; }

	indice = frente;
	
	do 
	{
		cout <<"\nDATO= " <<indice ->elemento;
		indice = indice->sig;
	} while (indice != NULL);
	getch();
}
void cola::promedio(int &a)
{
	int e=0;
	cola *indice;
	
	
	if(frente == NULL)
	{cout <<"\n LISTA VACIA ";getch(); return; }
	
	indice = frente;
	
	do 
	{
		e += indice ->elemento;
		indice = indice->sig;
	} while (indice != NULL);
	
	cout<<"\nSUMA DE ELEMENTOS   : "<<e;
 	cout<<"\nNUMERO DE ELEMENTOS : "<<a;
 	cout<<"\nPROMEDIO            : " << (float)e/a;
 	getch();
}
void cola::vaciar(int &a)
{
	int i=0, j=0, l=a;
	cola *indice;
	
	if(frente==NULL)
	{
		system("cls");
		cout << "\nCOLA VACIA!!";
		getch();
	}
		
	else
	{
		for(int e=0; e<l; e++)
		{
			if(a!=1)
				a--;
			
			system("cls");
			indice = frente;
			
			if(frente->elemento%2 == 0)
				i++;
				
			else
				j++;
				
			frente = frente->sig;
			indice->sig=NULL;
			free(indice);
		}
		
		cout << "\nLISTA VACIA";
		cout << "\n\nNUMERO DE ELEMNTOS PARES E IMPARES DE LA LISTA ";
		cout << "\nPARES  : " << i;
		cout << "\nIMPARES: " << j;
		getch();
	}
}
main(void)
{ 
	int a=1;
 cola objeto;
	
	for(;;)
	{
		system("cls");
		cout<<"\nMANEJO DE UNA COLA DE ENTEROS";
		cout<<"\n---------------------------";
		cout<<"\nI: INTRODUCIR ELEMENTO";
		cout<<"\nS: SACAR ELEMENTO";
		cout<<"\nL: LISTAR ELEMENTOS";
		cout<<"\nP: PROMEDIO DE ELEMENTOS";
		cout<<"\nV: VACIAR LISTA DE ELEMENTOS";
		cout<<"\nT: TERMINAR CON EL PROGRAMA";
		cout<<"\n\n\n";
		
		switch(toupper(getche()))
		{
			case 'I': objeto.insertar(a);break;
			case 'S': objeto.remover(a);break;
			case 'L': objeto.listar();break;
			case 'P': objeto.promedio(a);break;
			case 'V': objeto.vaciar(a);break;
            
            case 'T': exit(0);
		}
	}
}
