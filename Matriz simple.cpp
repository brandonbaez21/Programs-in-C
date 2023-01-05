
#include<iostream>
#define t 10
void llenar (int mat[t][t], int  fil, int col);
void imp (int matri[t][t], int  fila, int colu);
using namespace std;
int main ()
{
    int x[10][10], y[10][10], m, n;
    cout<<"Da las filas"<<endl;
    cin>>m;
    cout<<"Da las columnas"<<endl;
    cin>>n;
    cout<<"Matriz x"<<endl;
    llenar (x, m, n);
    cout<<"Matriz y"<<endl;
    llenar (y, m, n);
    cout<<"Datos matriz x"<<endl;
    imp (x, m, n);
    cout<<"Datos matriz y"<<endl;
    imp (y, m, n);
    system("pause");
    }
void llenar (int mat[t][t], int  fil, int col)
{
     int i, j;
     for (i=0; i<fil; i++)
     {
         for (j=0; j<col; j++)
         {
             cin>>mat[i][j];
             }
             }
             }
void imp (int matri[t][t], int  fila, int colu)
{
     int i, j;
     for (i=0; i<fila; i++)
     {
         for (j=0; j<colu; j++)
         {
          cout<<matri[i][j]<<endl;
          }
          }
          }
