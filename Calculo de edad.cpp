#include<iostream.h>
using namespace std;
int main ()
{
    int opc
    do
    {
    cout<<"1.-Leer datos: "<<endl;
    cout<<"2.-Escribir datos: "<<endl;
    cout<<"3.-Calcular: "<<endl;
    cout<<"4.-Terminar: "<<endl;
    cin>>opcion;
    system("cls");
    switch(opc);
    {
    int nom, bol,edad;
    float horas=24, dias=365;
    case 1:
         cout<<"Da tu nombre"<<nom<<endl;
         cin>>nom;
         cout<<"Da tu boleta"<<bol<<endl;
         cin>>bol;
         cout<<"Da tu edad"<<edad<<endl;
         system("pause");
         system("cls");
         cin>>edad;
         break;
    case 2:
         cin>>bol;
         cin>>nom;
         cin>>edad;
         system("pause"):
         system("cls");
         break;
    case 3:
         Dias=(edad*dias);
         cin>>Dias;
         return Dias;
         cout<<"Edad en dias: "<<Dias<<endl;
         Horas=(edad*horas);
         cin>>Horas;
         return Horas;
         cout<<"Edad en horas: "<<Horas<<endl;
         system("pause");
         system("cls");
         break;
    case 4:
         cout<<"Finalizar"<<endl;
         break;
}
}while(opc!=4);
}
    
    
