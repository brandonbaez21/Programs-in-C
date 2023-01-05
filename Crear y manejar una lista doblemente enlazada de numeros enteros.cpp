//Programa que sirve para crear y manejar una lista doblemente enlazada de números enteros que puede sacar promedio,
//introducion un nuevo elemento en una posicion determinada y los pares e impares
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class dato
{
int x;
struct dato *sig;
struct dato *ant;
public:
dato *primero, *nuevo, *indice, *ultimo;
void asigna_memoria(void);
void intro_dato(void);
void lista_datos1(void);
void lista_datos2(void);
void intronuevo(void);
void promedio(int a);
void pi();
dato *busca_dato(void);
void borra_dato(void);
};
void dato::asigna_memoria(void)
{
nuevo= new (class dato);
if(nuevo == NULL)
cout <<"\n No hay espacio de memoria";
else
cout <<"\n Se asigna espacio de memoria para el nuevo elemento";
}
void dato::intro_dato(void)
{
asigna_memoria();
if(nuevo == NULL) return;
if( primero == NULL)
{
primero = indice = ultimo = nuevo;
nuevo->sig = NULL;
nuevo->ant = NULL;
}
else
{ indice = primero;
while(indice ->sig != NULL)
indice = indice ->sig;
indice->sig = nuevo;
nuevo->sig = NULL;
nuevo->ant = indice;
indice = ultimo = nuevo;
}
cout <<"\n Dame el dato (entero):";
cin >> indice->x;
}
void dato::lista_datos1(void)
{
cout <<"\n LISTA LOS DATOS DEL PRINCIPIO AL FINAL ";
if(primero == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = primero;
do {
cout <<"\nDATO= "<<indice ->x;
indice = indice->sig;
} while (indice != NULL); cout << "\n";
}
void dato::lista_datos2(void)
{
cout <<"\n LISTA LOS DATOS DEL FINAL AL PRINCIPIO";
if(primero == NULL || ultimo == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = ultimo;
do {
cout <<"\nDATO= "<<indice ->x;
indice = indice->ant;
} while (indice != NULL); cout << "\n";
}
dato *dato::busca_dato(void)
{
int xdato;
cout <<"\n BUSQUEDA DE UN DATO ";
cout <<"\n Dato a buscar : ";
cin >>xdato;
if(primero == NULL)
{cout <<"\n LISTA VACIA "; return(NULL); }
indice = primero;
do {
if(xdato == indice->x)
{ cout <<"\n Si esta el dato "<<indice->x << " en la lista";
return(indice);
}
indice = indice->sig;
}while (indice != NULL);
cout <<"\n NO SE encontro el dato "<< xdato << " en la lista";
return(NULL);
}
void dato::borra_dato(void)
{
dato *y;
cout <<"\n BUSQUEDA DEL DATO A BORRAR ";
y = busca_dato();
if(y == NULL) return;
cout <<"\n Se encontro el dato a borrar : "<< y->x << " y se procede a borrar\n";
indice = y;
if(y == primero)
{
primero = primero->sig; y->sig = NULL;
if(primero != NULL) primero->ant = NULL;
delete(y);
return;}
if(y == ultimo)
{
ultimo = ultimo->ant; y->ant = NULL;
if( ultimo != NULL) ultimo->sig = NULL;
delete(y);
return;}
indice=primero;
while(indice ->sig != y)
indice = indice->sig;
indice -> sig = y->sig;
y->sig->ant = indice;
delete (y);
}
void dato::promedio(int a)
{
	int e=0;
	
	cout << "\nPROMEDIO"<<endl;
	indice=primero;
	if(indice == NULL)
	{cout <<"\n LISTA VACIA ";getch(); return; }
	
	indice = primero;
	
	do 
	{
		e += indice ->x;
		indice = indice->sig;
		a++;
	} while (indice != NULL);
	
	cout<<"\nSUMA DE ELEMENTOS   : "<<e;
 	cout<<"\nNUMERO DE ELEMENTOS : "<<a;
 	cout<<"\nPROMEDIO            : " << (float)e/a;
 	getch();
}
void dato::pi()
{
	int i=0,j=0;
	cout <<"\n N"<<char(233)<<"MERO DE PARES E IMPARES \n";
	if(primero == NULL)
	{ cout <<"\n LISTA VACIA "; getch(); return; }
	indice = primero;
	do 
	{
		if(indice->x%2 == 0) i++;
		if(indice ->x%2 != 0) j++;
		indice = indice->sig;
	} while (indice != NULL); cout << "\n";
	cout<<" El numero de pares es: "<<i<<endl;
	cout<<" El numero de impares es: "<<j<<endl;
	getch();
}
void dato::intronuevo(void)
{
if(primero == NULL) { cout <<"\n LISTA VACIA. "; getch(); return; }
	int i=0, posicion=0, n;
	indice=primero;
	while ( indice != NULL){i++; indice = indice->sig;}
	cout<<endl<<"i: "<<i<<endl;
	cout <<"\n INSERTAR DATO \n";
	cout <<"\n 1.- De inicio a fin \n";
	cout <<"\n 2.- De fin a inicio \n"<<endl;
	cin>>n;
	
	cout<<"\n "<<char(168)<<"En que posicion desea insertar el nuevo dato"<<char(63);
	cout<<"\n\n Posicion: "<<endl;
	cin>>posicion;
	if(n==2){posicion=(i-posicion)+2;}
	if(posicion<1)posicion=1;
	asigna_memoria();
	if(nuevo == NULL) return;
	indice=primero;
	if(posicion == 1)
	{
		
		nuevo->sig=indice;
		nuevo->ant=indice->ant;
		indice->ant=nuevo;
		primero=nuevo;
		indice=nuevo;
		cout <<"\n El dato se ingresara al principio de la lista.\n";	
	}
	if(1<posicion && posicion<=i)
	{
		int j=1;
		while(j<posicion){ j++; indice = indice ->sig;}
		nuevo->sig=indice;
		nuevo->ant=indice->ant;
		indice->ant=nuevo;
		indice=nuevo->ant;
		indice->sig=nuevo;
		indice=nuevo;
 	}
	if (posicion>i)
	{
		while(indice ->sig != NULL)
		indice = indice ->sig;
		indice->sig = nuevo;
		nuevo->sig = NULL;
		nuevo->ant = indice;
		indice = ultimo = nuevo;
		cout <<"\n El dato se ingresara al final de la lista.\n";	
	}
	cout<<endl<<" Ingrese el nuevo dato: ";
	cin >> indice->x;
}
main(void)
{
          int a=0;
dato lista;
int opcion;
lista.primero=NULL;
lista.nuevo=NULL;
lista.indice=NULL;
lista.ultimo=NULL;
for(;;)
{
cout <<"\n MANEJO DE UNA LISTA DOBLEMENTE ENLAZADA";
cout <<"\n 1. Introducir un dato a lista";
cout <<"\n 2. Listar la lista del principio al final";
cout <<"\n 3. Listar la lista del final al principio";
cout <<"\n 4. Busqueda de un dato";
cout <<"\n 5. Borrado de un dato";
cout <<"\n 6. Promedio de los datos";
cout <<"\n 7. Pares e impares";
cout <<"\n 8. Introducir un elemento en una posicion determinada";
cout <<"\n 9. Salir";
cout <<"\n opcion : ";
cin >>opcion;
switch(opcion)
{ case 1: lista.intro_dato();
break;
case 2: lista.lista_datos1();
break;
case 3: lista.lista_datos2();
break;
case 4: lista.busca_dato();
break;
case 5: lista.borra_dato();
break;
case 6: lista.promedio(a);
break;
case 7: lista.pi();
break;
case 8: lista.intronuevo();
break;
case 9: cout << "\nFIN";
getch();
exit(0);
}
}
}
