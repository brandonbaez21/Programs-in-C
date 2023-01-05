//programa para crear un arbol binario y recorrer sus nodos 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
#define TRUE 1
int r, c=0;
using namespace std;
class arbol
{
int clave;
arbol *izquierda;
arbol *derecha;
public:
arbol *raiz;
void intro_nodo(void);
void lista_nodos();
void borra_nodo(void);
void lista_preorden(arbol *);
void lista_inorden(arbol *);
void lista_postorden(arbol *);
void borra_raiz(void);
arbol *borra(arbol *, int);
arbol *crea_arbol(arbol *, arbol *,int);
};
arbol* arbol::borra(arbol *raiz,int nodo)
{
arbol *d1, *d2;
if(raiz->clave == nodo)
{
if(raiz->izquierda == raiz->derecha)
{
delete(raiz);
return NULL;
}
else if(raiz->izquierda == NULL)
{
d1 = raiz->derecha;
delete(raiz);
return d1;
}
else if(raiz->derecha == NULL)
{
d1 = raiz->izquierda;
delete(raiz);
return d1;
}
else
{
d2 = raiz->derecha;
d1 = raiz->derecha;
while(d1->izquierda) d1 = d1 ->izquierda;
d1->izquierda = raiz->izquierda;
delete(raiz);
return d2;
}
}
if(raiz->clave < nodo)
raiz->derecha=(arbol *)borra(raiz->derecha,nodo);
else
raiz->izquierda=(arbol *)borra(raiz->izquierda,nodo);
return raiz;
}
arbol *arbol::crea_arbol(arbol *raiz,arbol *aux,int dato)
{
if(!aux)
{
aux = (arbol *) new(arbol);
aux->izquierda = (arbol *)NULL;
aux->derecha = (arbol *)NULL;
aux->clave = dato;
if(!raiz) return aux;
if(dato < raiz->clave) raiz->izquierda = aux;
else raiz->derecha = aux;
return aux;
}
if(dato < aux->clave) (arbol *)crea_arbol(aux,aux->izquierda,dato);
else
if(dato > aux->clave) (arbol *)crea_arbol(aux,aux->derecha,dato);
}
void arbol::intro_nodo(void)
{
int dato;
cout <<"\nIntroduzca un caracter: ";
cin >>dato;
if(!raiz) raiz =(arbol *)crea_arbol(raiz,raiz,dato);
else (arbol *)crea_arbol(raiz,raiz,dato);
return;
}
void arbol::borra_nodo(void)
{
int dato;
cout<<"\nDato a borrar: ";
cin >>dato;
if(dato==raiz->clave)
{ borra_raiz();
return;
}
(arbol *)borra(raiz,dato);
}
void arbol::lista_preorden(arbol *aux)
{int n=1,numNodos;
int orden;
if(!aux) return;
cout <<"\n"<<aux->clave;
lista_preorden(aux->izquierda);
lista_preorden(aux->derecha);
if(!aux)
          return;
     lista_inorden(aux->derecha);

     for(int i=0; i<n; i++)  
         cout<<" LOS NODOS SON:  ";
     cout<< aux->clave <<endl;

     lista_inorden(aux->izquierda);
}
void arbol::lista_inorden(arbol *aux)
{
int orden;
if(!aux) return;
lista_inorden(aux->izquierda);
cout <<"\n"<<aux->clave;
lista_inorden(aux->derecha);
}
void arbol::lista_postorden(arbol *aux)
{
int orden;
if(!aux) return;
lista_postorden(aux->izquierda);
lista_postorden(aux->derecha);
cout<<"\n"<< aux->clave;
}
void arbol::lista_nodos()
{
     arbol *aux;
     int n=0, numNodos;
system("cls");
cout<<"\n\t RECORRIDO DE LOS NODOS DEL ARBOL\n";
cout<<"\t ---------------------------------\n";
cout<<"\t P ..... PREORDEN\n";
cout<<"\t I ..... INORDEN\n";
cout<<"\t S ..... POSORDEN\n";
switch(toupper(getche()))
{
case 'P': lista_preorden(raiz);  
     break;
case 'I': lista_inorden(raiz);
if(!aux)
          return;
     lista_inorden(aux->derecha);

     for(int i=0; i<n; i++)
         cout<<" LOS NODOS SON:  ";

     numNodos++;
     cout<< aux->clave <<endl;

     lista_inorden(aux->izquierda); 
     break;
case 'S': lista_postorden(raiz); 
if(!aux)
          return;
     lista_inorden(aux->derecha);

     for(int i=0; i<n; i++)
         cout<<" LOS NODOS SON:  ";

     numNodos++;
     cout<< aux->clave <<endl;

     lista_inorden(aux->izquierda); 
     break;
}
}
void arbol::borra_raiz(void)
{ arbol *aux; int t, opc;
if(raiz->izquierda==NULL&&raiz->derecha==NULL)
{(arbol *)borra(raiz,raiz->clave); return;}
do{
cout<<"Estas por borrar la raiz, presiona 1 para izquierda y 2 para derecha: ";
cin>>opc;
if(opc==1)
{
if(raiz->izquierda==NULL){cout<<"Opcion incorrecta"; return;}
aux=raiz->izquierda;
for(int i=0; aux->derecha!=NULL; i++)
{aux=aux->derecha;} t=aux->clave;
(arbol *)borra(raiz,aux->clave);
raiz->clave=t;
}
else if(opc==2)
{
if(raiz->derecha==NULL){cout<<"Opcion incorrecta"; return;}
aux=raiz->derecha;
for(int i=0; aux->izquierda!=NULL; i++)
{aux=aux->izquierda;} t=aux->clave;
(arbol *)borra(raiz,aux->clave);
raiz->clave=t;
}
}while(opc!=1&&opc!=2);
}
int main(void)
{ 
arbol objeto;
objeto.raiz = (arbol *)NULL;
while(TRUE)
{
cout<<"\n\t MENU DEL PROGRAMA DE UN ARBOL BINARIO\n";
cout<<"\t -------------------------------\n";
cout<<"\t A ....... ANADIR NODO\n";
cout<<"\t L ....... RECORRIDO DE NODOS\n";
cout<<"\t B ....... BORRAR NODO\n";
cout<<"\t X ....... TERMINAR\n";
switch(toupper(getche()))
{
case 'A' : objeto.intro_nodo(); break;
case 'L' : objeto.lista_nodos();break;
case 'B' : objeto.borra_nodo(); break;
case 'X' : exit(0);
}
}
}
