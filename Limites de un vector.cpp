#include<iostream>
#define tam 10
void llenar (int vec[tam], int lim);
void imp (int vec[tam]; int lim);
using namespace std;
int main ()
{
    int x[tam], y[tam], n, i;
    cout<<"Da el limite del vector"<<endl;
    cin>>n;
    cout<<"Datos vector x"<<endl;
    llenar (x,n);
    cout<<"Datos de vector y"<<endl;
    llenar (y,n);
    for (i=0; i<n; i++)
    {
        cout<<"Dato"<<(i+1)<<endl;
        cin>>x[i];
    }
    cout<<"Vector x"<<endl;
    imp(x,n);
    cout<<"Vector y"<<endl;
    imp(y,n);
    system("pause");
}
void llenar (int vec[tam], int lim)
     {
          int i;
          for (i=0; i<lim; i++)
          {
              cout<<"Datos "<<(i+1)<<endl;
              cin>>vec[i];
              }
              }
void imp (int vec[tam]; int lim)
{
     int i;
     for (i=0; i<lim; i+1)
     {
         cout<<"Datos "<<(i+1)<<endl;
         cin>>vec[i];
         }
         }
         
