//LISTA SIMPLEMENTE ENLAZADA CON LISTADO RECURSIVO
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
		void intro_dato(void);
		void lista_datos(void);	
		void contador_datos(void);
		void promedio_datos(void);
		dato *busca_dato(void);
		void borra(void);
		void intro_UNdato(void);
		void par(void);
		
		void recursividad(dato* indice);
};
		
		
void dato::intro_UNdato(void)
{    
	int xdato;
    int a=0;
	
	cout<<"Dame el dato (entero): ";
	cin>>xdato;
	indice=primero;
	
	while(indice!=NULL)
	{  
		if (xdato==indice->x)
		{
			a++;
		}
			
		indice=indice->sig;
	}
	
	if(a>1)
	{ 
		cout<<a<<xdato;
	}
	
	if (a==1)
	{
		cout<<"Ya existe un dato igual a "<<xdato<<endl;
	}
		
	else
	{
		if(asigna_memoria()==NULL)return;
		
		indice->x=xdato;
		indice->sig = NULL;
	}return;
	
	cout << endl;
		system("pause");
	system("cls");
}

     
void  dato::contador_datos ()
{
	int cont=0;
	if(primero == NULL)
	{
		cout <<"\n LISTA VACIA "; return;
	}
	
	indice = primero;
	
	do 
	{
		indice = indice->sig;
		cont++;
	} while (indice != NULL);

	cout<< "No de datos: " <<cont;
	cout << endl;
	system("pause");
	system("cls");
}


void dato::promedio_datos()
{
    float prom=0;
    float res;
    int cont=0;
    
    if(primero == NULL)
	{
		cout <<"\n LISTA VACIA "; return; 
	}
	
	indice = primero;
	
	do 
	{
		prom+=indice ->x;
		cont++;
		indice = indice->sig;
	} while (indice != NULL);

	res=(prom/cont);
	cout<<"El promedio es :"<<res<<endl;;
	cout << endl;
	system("pause");
	system("cls");
}

     
dato *dato::asigna_memoria(void)
{
	nuevo = (dato *)new(dato);
	
	if(nuevo == NULL)
	{ 
		cout <<"\n No hay espacio de memoria";
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

	cout << endl;
		system("pause");
	system("cls");	
}

/*void dato::intro_dato(void)
{
if(asigna_memoria()==NULL)return;
cout <<"\n Dame el dato (entero):";
cin >> indice->x;
indice->sig = NULL;
}/*/


void dato::lista_datos(void)
{
	if(primero == NULL)
	{
		cout <<"\n LISTA VACIA "; return; 
	}
	
	indice = primero;
	
	recursividad(indice);
	
	cout << endl;
	system("pause");
	system("cls");
}


void dato::recursividad(dato* indice)
{
	if(indice != NULL)
	{
		cout <<"\nDATO= " <<indice ->x;
		recursividad(indice->sig);	
	}
}

/*
void dato::lista_datos(void)
{
	if(primero == NULL)
	{
		cout <<"\n LISTA VACIA "; return; 
	}
	
	indice = primero;
	
	do 
	{
		cout <<"\nDATO= " <<indice ->x;
		indice = indice->sig;
	} while (indice != NULL);
	
	cout << endl;
	system("pause");
	system("cls");
}*/


dato *dato::busca_dato(void)
{
	int xdato;
	
	cout <<"\n BUSQUEDA DE UN DATO ";
	cout <<"\n Dato a buscar : ";
	cin >>xdato;
	
	if(primero == NULL)
	{
		cout <<"\n LISTA VACIA "; return(NULL); 
	}
	
	indice = primero;
	
	do 
	{
		if(xdato == indice->x)
		{ 
			cout <<"\n Si esta el dato "<< indice->x <<" en la lista ";
			return(indice);
		}
		
		indice = indice->sig;
	} while (indice != NULL);

	cout <<"\n NO SE ENCONTRO el dato " << xdato << " en la lista";
	return(NULL);
	
		system("pause");
	system("cls");
}


void dato::borra(void)
{
	dato *y;

	cout <<"\n BORRADO DE UN DATO \n";
	cout <<"\n Primero se verificara que se encuentre el dato a borrar.\n";
	y = busca_dato();
	
	if(y == NULL) return;
	
	cout <<"\n Dato que sera borrado : " << y->x;
	indice = y;
	
	if(y == primero)
	{
		primero = primero->sig; y->sig = NULL;
		cout << "\n SE BORRO EL DATO"; getch();
		return;
	}
		
	indice=primero;
	
	while(indice ->sig != y)
	indice = indice->sig;
	indice -> sig = y->sig;
	free(y);
	cout << "\n SE BORRO EL DATO"; getch();
	
		system("pause");
	system("cls");
}

void dato::par(void)
{
	int i=0, j=0;
     if(primero == NULL)
		{	
			cout <<"\n El numero de elementos es: 0 "; return; }
			indice = primero;
			do 
			{
				if((indice->x)%2==0)
					i++;
				
				else
					j++;
				
				indice = indice->sig;
				
				
			} while (indice != NULL); 
			
	cout <<"\nEl numero de datos pares es = " <<i;
	cout <<"\nEl numero de datos impares es = " <<j;
	
		system("pause");
	system("cls");
}


main(void)
{
	dato objeto;
	objeto.primero=NULL;
	objeto.indice=NULL;
	objeto.nuevo=NULL;
	int opcion;

	for(;;)
	{
		cout <<"\n\n LISTA SIMPLEMENTE ENLAZADA";
		cout <<"\n 1. Introducir un dato a lista";
		cout <<"\n 2. Listar la lista ";
		cout <<"\n 3. Buscar un dato ";
		cout <<"\n 4. Borrar un dato ";
		cout <<"\n 5. No de datos";
		cout <<"\n 6. Obtener el promedio de datos";
		cout <<"\n 7. Pares e Impares";
		cout <<"\n 8. Fin del programa";
		cout <<"\n Opcion : ";
		cin >>opcion;
		system("cls");

		switch(opcion)
		{ 
			case 1: objeto.intro_UNdato();
			break;
			
			case 2: objeto.lista_datos();
			break;
			
			case 3: objeto.busca_dato();
			break;
			
			case 4: objeto.borra();
			break;
			
			case 5: objeto.contador_datos();
			break;
			
			case 6: objeto.promedio_datos();
			break;
			
			case 7: objeto.par();
			break;
			
			case 8: cout <<"\nFIN";
			getch();
			exit(0);
		}
	}
}
