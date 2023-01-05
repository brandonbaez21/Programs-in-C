#include <iostream>
#include <string.h>

using namespace std;
class Persona
{
      string nom;
      int edad;
      string RFC;
      int sal;
      public:
    	void iniPersona(string,int,string,int);
        void impPersona();
};
class cuentabiente:public Persona
{
	string numdecuenta;
	char saldo[20];
	public:
		cuentabiente(char*);
		void inicuentabiente(string);
		void impcuentabiente();
		friend class contabilidad;
};
class contabilidad
{
	char saldocont[20];
	public:
	contabilidad(char*);
	float HH;
	float opsaldo();
	void impslado();
	void cambio(cuentabiente*,char*);
	friend class cajero;
};
class cajero
{
	float cajerosaldo;
	public:
		void cambio(contabilidad*,char*);
		void retiro();
		void deposito();
		void consulta();
		void compraTA();
};
void Persona::iniPersona(string N,int E,string R,int S)
{
	nom=N; edad=E; RFC=R; sal=S;
}
void Persona::impPersona()
{
	cout<<"Nombre:  "<<nom<<endl;
    cout<<"Edad:   "<<edad<<endl;
    cout<<"RFC:   "<<RFC<<endl;
    system("pause");
}

void cuentabiente::inicuentabiente(string nu)
{
	numdecuenta=nu;
}
void cuentabiente::impcuentabiente()
{
	cout<<"Numero de cuenta:"<<numdecuenta<<endl;
}
float contabilidad::opsaldo()
{
	float HH,S,SALDO;
	HH=S+SALDO;
}
void contabilidad::impslado()
{
	cout<<"Tu saldo es:"<<HH;
}
void cajero::consulta()
{

}
void cajero::deposito()
{
		
}
void cajero::retiro()
{

}
cuentabiente::cuentabiente(char*s)
{
	strcpy(cuentabiente::saldo,s);
}
contabilidad::contabilidad(char*sc)
{
	strcpy(contabilidad::saldocont,sc);
}
int main()
{
	Persona hombre;

	int i,i1,i2,n,opc,opc2,opc3,opc4,o,h,h1,h2,h3,h4,h5,h6,h7;
	int R;
	do
	{//inicio do while
		cout<<"Elije una opción"<<endl;
		cout<<" 1 RETIRO"<<endl;
		cout<<" 2 DEPOSITO"<<endl;
		cout<<" 3 CONSULTA"<<endl;
		cout<<" 4 COMPRA DE TIEMPO AIRE"<<endl;
		cout<<" 5 salir"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{//inicio de switch
		case 1:
		int o,h;
		do
		{
		cout<<"Elija la opcion que desea retirar"<<endl;
		cout<<"1.-$50"<<endl;
		cout<<"2.-$100"<<endl;
		cout<<"3.-$200"<<endl;
		cout<<"4.-$500"<<endl;
		cout<<"5.-Salir"<<endl;
		cin>>h;
    	system("cls");
		switch(h)
		{//inicio de switch
		case 1:
			cout<<"Se han depositado $50 pesos"<<endl;
			cout<<"R=";
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"Se han depositado $100 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:
			cout<<"Se han depositado $200 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 4:
			cout<<"Se han depositado $500 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 5:
			cout<<"Salir";
			break;
			}//fin de switch
			}while (h!=5);
			break;
			
			case 2:
			do
			{
			cout<<"Elija la opcion que desea retirar"<<endl;
			cout<<"1.-$50"<<endl;
			cout<<"2.-$100"<<endl;
			cout<<"3.-$200"<<endl;
			cout<<"4.-$500"<<endl;
			cout<<"5.-Salir"<<endl;
			cin>>h1;
    		system("cls");
			switch(h1)
			{//inicio de switch
			case 1:
			cout<<"Se han retirado $50 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"Se han retirado $100 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:
			cout<<"Se han retirado $200 pesos"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 4:
			cout<<"Se han retirado $500 pesos"<<endl;
			break;
			case 5:
			cout<<"Salir";
			break;
			}//fin de switch
			}while (h1!=5);
			break;
			
			case 3:
			do
			{
			cout<<"Que desea consultar";
			cout<<"Datos personales"<<endl;
			cout<<"Numero de cuenta y saldo"<<endl;
			cout<<"salir"<<endl;
			cin>>h2;
    		system("cls");
			switch(h2)
			{//inicio de switch
			case 1:
    	  	system("cls");
			break;
			case 2:
			system("cls");
			break;
			case 3:
			cout<<"salir"<<endl;
			system("pause");
    	  	system("cls");
			break;
			}//fin de switch
			}while (h2!=3);
			system("cls");
			break;
			
			case 4:
			do
			{
			cout<<"Elija la compañia a la que desea hacer la recarga"<<endl;
			cout<<"1.-Telcel"<<endl;
			cout<<"2.-Movistar"<<endl;
			cout<<"3.-AT&T"<<endl;
			cout<<"4.-UNEFON"<<endl;
			cout<<"5.-Salir"<<endl;
			cin>>h3;
    		system("cls");
			switch(h3)
			{//inicio de switch
			case 1:
			cout<<"WELCOME TELCEL"<<endl;
			do
			{
			cout<<"Elija el monto que desea RECARGAR"<<endl;
			cout<<"1.-100"<<endl;
			cout<<"2.-200"<<endl;
			cout<<"3.-salir"<<endl;
			cin>>h4;
    		system("cls");
			switch(h4)
			{//inicio de switch
			case 1:
			cout<<"La cantida que has recargado es de 100"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"La cantidad que has recargado es de 200"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:

    	  	system("cls");
			break;

			}//fin de switch
			}while (h4!=3);
    	  	system("cls");
			break;
			case 2:
			cout<<"WELCOME TELCEL";
						do
			{
			cout<<"Elija el monto que desea RECARGAR"<<endl;
			cout<<"1.-100"<<endl;
			cout<<"2.-200"<<endl;
			cout<<"3.-salir"<<endl;
			cin>>h5;
    		system("cls");
			switch(h5)
			{//inicio de switch
			case 1:
			cout<<"La cantida que has recargado es de 100"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"La cantidad que has recargado es de 200"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:

    	  	system("cls");
			break;

			}//fin de switch
			}while (h5!=3);
    	  	system("cls");
			break;
			case 3:
			cout<<"WELCOME AT&T";
						do
			{
			cout<<"Elija el monto que desea RECARGAR"<<endl;
			cout<<"1.-100"<<endl;
			cout<<"2.-200"<<endl;
			cout<<"3.-salir"<<endl;
			cin>>h6;
    		system("cls");
			switch(h6)
			{//inicio de switch
			case 1:
			cout<<"La cantida que has recargado es de 100"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"La cantidad que has recargado es de 200"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:

    	  	system("cls");
			break;

			}//fin de switch
			}while (h6!=3);
    	  	system("cls");
			break;
			case 4:
			cout<<"WELCOME UNEFON";
						do
			{
			cout<<"Elija el monto que desea RECARGAR"<<endl;
			cout<<"1.-100"<<endl;
			cout<<"2.-200"<<endl;
			cout<<"3.-salir"<<endl;
			cin>>h7;
    		system("cls");
			switch(h7)
			{//inicio de switch
			case 1:
			cout<<"La cantida que has recargado es de 100"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 2:
			cout<<"La cantidad que has recargado es de 200"<<endl;
			system("pause");
    	  	system("cls");
			break;
			case 3:

    	  	system("cls");
			break;

			}//fin de switch
			}while (h7!=3);
			break;
			case 5:
			cout<<"Salir";
			break;
			}//fin de switch
			}while (h3!=5);
			break;
			case 5:
			break;
		}//fin de switch
	}while (opc!=5);
	
}
