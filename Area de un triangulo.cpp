#include<iostream.h>

float area(float base, float altura);

int main ()
{
    int s, n, i, cont, opc, x;
    float b, a, h;
    s= 0,cont=0;
    do
    {
       cout<<"Elije una opcion "<<endl;
       cout<<"1.- Serie 1+2+3... "<<endl;
       cout<<"2.- Area del triangulo "<<endl;
       cout<<"3.- Imprimir 2, 4, 6, 8 ....n "<<endl;
       cout<<"4.- Salir"<<endl;
       cin>>opc;
       switch (opc)
       {
              case 1:
                    x=1;
                    cout<<"Da el limite"<<n<<endl;
                    cin>>n;
                    while (x<=n)
                    {
                          s+=x;
                          x++;
                          }
                    cout<<"La serie es "<<endl;
                    break;
                    case 2:
                         cout<<"Da la base y la altura "<<b<<h<<endl;
                         cin>>b>>h;
                         a=area(b, h);
                         cout<<"El area es "<<a<<endl;
                         break;
                    case 3:
                         cout<<"Da el limite "<<n<<endl;
                         cin>>n;
                         for (i=0; i<n; i++)
                         {
                             cout<<(cont +=2)<<endl;
                             }
                             break;
                    case 4:
                         break;
                         }
                         }while (opc !=4);
                         system("pause");
                         system("cls");
                         }

float area(float base, float altura)
{
      float r;
      r=(base*altura)/2;
      return (r);
}
                             
