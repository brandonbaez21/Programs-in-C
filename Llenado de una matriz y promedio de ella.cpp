#include<iostream>
#define t 10
float  prom (int matriz[t][t], int filas, int columnas);
void llenar (int mat[t][t], int  fil, int col);
void imp (int matri[t][t], int  fila, int colu);
using namespace std;
int main ()
{
    int x[t][t], y[t][t], m, n;
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
float  prom (int mat[t][t], int filas, int columnas)
{
	float i, j, s=0, p;
	for (i=0; i<filas; i++)
	{
		for (j=0; j<columnas; j++)
		{
			s+= mat[i][j];
		}
	}
	p=s/(filas*columnas);
	return (p);
}
