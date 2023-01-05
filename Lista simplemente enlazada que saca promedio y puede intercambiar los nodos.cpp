//lista simplemente enlazada que saca promedio y puede intercambiar los nodos
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
        dato *primero, *nuevo, *indice, *direccion, *direccion2;
        dato *asigna_memoria();
        void intro_dato(void);
        void lista_datos(void);
        dato *busca_dato(void);
        void borra(void);
        void contador(void);
        void paresimpares(void);
        void intercambia(void);
};
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
}
void dato::intro_dato(void)
{
     int xdato;
    cout <<"\n Dame el dato (entero):";
    cin >>xdato;
    if(primero == NULL)
    {
       if(asigna_memoria()==NULL)return;
       indice->x = xdato;
       indice->sig = NULL;
    }
    else
    {
        int i=0;
        indice = primero;
        do 
        {
           if(xdato == indice->x)
           i++;
           indice = indice->sig;
        } while (indice != NULL);
        if(i != 0)
             cout <<"\n El dato es repetido ";
             else
             {
                if(asigna_memoria()==NULL)return;
                indice->x = xdato;
                indice->sig = NULL;
             }
    }
}
void dato::lista_datos(void)
{
    if(primero == NULL)
    {
       cout <<"\n LISTA VACIA "; 
       return; 
    }
    indice = primero;
    do 
    {
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
    {
       cout <<"\n LISTA VACIA "; 
       return(NULL); 
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
{primero = primero->sig; y->sig = NULL;
cout << "\n SE BORRO EL DATO"; getch();
return;
}
indice=primero;
while(indice ->sig != y)
indice = indice->sig;
indice -> sig = y->sig;
free(y);
cout << "\n SE BORRO EL DATO"; getch();
}
void dato::contador(void)
{
     int i=0;
     float j=0, k=0;
     if(primero == NULL)
{cout <<"\n El numero de elementos es: 0 "; return; }
indice = primero;
do {
    i++;
    j=j+indice->x;
indice = indice->sig;
} while (indice != NULL); 
k=j/i;
cout <<"\nEl numero de datos es = " <<i<<"\nY el promedio de los datos es = " <<k;
}
void dato::paresimpares(void)
{
     int i=0,j=0,k;
     if(primero == NULL)
{cout <<"\n LISTA VACIA "; return; }
indice = primero;
do {
    k=indice->x%2;
    if(k==0)
            i++;
    else
    j++;  
indice = indice->sig;
} while (indice != NULL);
cout<<"\nEl numero de pares es"<<i<<"\nEl numero de impares es:"<<j;
}
void dato::intercambia(void)
{
    int xdato, xdato2;
    if(primero == NULL)
    {
       cout <<"\n LISTA VACIA ";
       return; 
    }
    cout <<"\n Intercambio de nodos ";
    cout <<"\n Dato 1 : ";
    cin >>xdato;
    direccion = busca_dato();
    cout <<"\n Dato 2 : ";
    cin >>xdato2;
    direccion2 = busca_dato();
    indice = primero;
    direccion->x=xdato2;
    direccion2->x=xdato;
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
cout <<"\n\n 1. Introducir un dato a lista";
cout <<"\n 2. Listar datos ";
cout <<"\n 3. Buscar un dato ";
cout <<"\n 4. Borrar un dato ";
cout <<"\n 5. Contador y promedio de los datos ";
cout <<"\n 6. Numero de pares e impares ";
cout <<"\n 7. Intercambio de nodos ";
cout <<"\n 8. Salir";
cout <<"\n\n opcion : ";
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
case 5: objeto.contador();
break;
case 6: objeto.paresimpares();
break;
case 7: objeto.intercambia();
break;
case 8: cout <<"\nFIN";
getch();
exit(0);
}
}
}
