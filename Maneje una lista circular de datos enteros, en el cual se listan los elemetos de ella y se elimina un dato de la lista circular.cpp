// Programa que maneje una lista circular de datos enteros, en el cual se listan los elemetos de ella y se elimina un dato de la lista circular
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
dato *busca_dato(void);
void borra(void);
void circular(void);
void lista_circular(void);
void lista_n_circular(void);
void borrado_lista_n_circular(void);
};
dato *dato::asigna_memoria(void)
{
nuevo = (dato *)new(dato);
if(nuevo == NULL)
{ cout <<"\n No hay espacio de memoria";
return(nuevo);
}
if( primero == NULL)
primero = indice = nuevo;
else
{ indice = primero;
while(indice ->sig != NULL)
indice = indice ->sig;
indice->sig = nuevo;
indice = nuevo;
}
return(nuevo);
}
void dato::intro_dato(void)
{
if(asigna_memoria()==NULL)return;
cout <<"\n Dame el dato (entero):";
cin >> indice->x;
indice->sig = NULL;
}
void dato::lista_datos(void)
{
if(primero == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = primero;
do {
cout <<"\nDATO= " <<indice ->x;
indice = indice->sig;
} while (indice != NULL);
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
{ cout <<"\n Si esta el dato "<< indice->x <<" en la lista ";
return(indice);
}
indice = indice->sig;
} while (indice != NULL);
cout <<"\n NO SE ENCONTRO el dato " << xdato << " en la lista";
return(NULL);
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
{primero = primero->sig; y->sig = NULL; delete(y);
cout << "\n SE BORRO EL DATO"; getch();
return;
}
indice=primero;
while(indice ->sig != y)
indice = indice->sig;
indice -> sig = y->sig;
delete(y);
cout << "\n SE BORRO EL DATO"; getch();
}
void dato::circular(void)
{
cout << "\n CREA LISTA CIRCULAR";
indice = primero;
do {
cout <<"\nDATO= " <<indice ->x;
indice = indice->sig;
if(indice->sig == NULL)
{
cout << "\nDATO= " <<indice ->x;
indice->sig = primero;
break;
}
} while (indice != NULL);
cout << "\n LISTA CIRCULAR CREADA";
}
void dato::lista_circular(void)
{
cout<< "\n LISTA LOS ELEMENTOS QUE FORMAN LA LISTA CIRCULAR";
if(primero == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = primero;
do {
cout <<"\nDATO= " <<indice ->x;
indice = indice->sig;
} while (indice != primero);
}
void dato::lista_n_circular(void)
{
int n=0;
cout<< "\n LISTA N ELEMENTOS DE LA LISTA CIRCULAR";
cout << "\n Dame el numero de elementos a listar: "; cin>> n;
if(primero == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = primero;
for (int i=0; i<n; i++)
{
cout <<"\nDATO= " <<indice ->x;
indice = indice->sig;
} getch();
}
void dato::borrado_lista_n_circular(void)
{
 dato *y;
cout <<"\n BORRADO DE UN DATO \n";
cout <<"\n Primero se verificara que se encuentre el dato a borrar.\n";
y = busca_dato();
if(y == NULL) return;
cout <<"\n Dato que sera borrado : " << y->x;
if(y == primero)
{
while(indice->sig!=primero)
{indice=indice->sig;}
if (primero == primero->sig)
{primero = NULL; delete(primero);
cout<<"\n SE BORRO EL DATO";return;}
primero = primero->sig;
indice->sig=primero;
y->sig = NULL; delete(y);
cout<<"\n SE BORRO EL DATO"; getch();
return;
}
indice=primero;
while(indice ->sig != y)
indice = indice->sig;
indice -> sig = y->sig;
delete(y);
cout << "\n SE BORRO EL DATO"; getch();
}
    
int main(void)
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
cout <<"\n 5. Salir";
cout <<"\n 6. Crea lista circular a partir de la lineal";
cout <<"\n 7. Lista la lista circular creada";
cout <<"\n 8. Lista n elementos de la lista circular";
cout <<"\n 9. Borrado de elemento para lista circular";
cout <<"\n opcion : ";
cin >>opcion;
switch(opcion)
{ case 1: objeto.intro_dato();
break;
case 2: objeto.lista_datos();
break;
case 3: objeto.busca_dato();
break;
case 4: objeto.borra();
break;
case 5: cout <<"\nFIN";
getch();
exit(0);
case 6: objeto.circular();
break;
case 7: objeto.lista_circular();
break;
case 8: objeto.lista_n_circular();
break;
case 9: objeto.borrado_lista_n_circular();
break;
}
}
}
