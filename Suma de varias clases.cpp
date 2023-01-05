#include<iostream>
using namespace std;
class clase2;
class clase1
{
	int x, y, r;
	public:
		clase1 (){x= 5, y= 10;}
		void suma (clase2);
		void visualiza (clase2);	
};
class clase2
{
	int a, b;
	public:
		clase2(){a= 20; b= 15;}
		friend void clase1::suma (clase2 c);
		friend void clase1::visualiza (clase2 c);
};
void clase1::suma(clase2 c)
{
	r=x+y+c.a+c.b;
	cout<<"El resultado es: "<<r<<endl;
}
void clase1::visualiza (clase2 c)
{
	cout<<"x"<<x<<endl;
	cout<<"y"<<y<<endl;
	cout<<"a"<<c.a<<endl;
	cout<<"b"<<c.b<<endl;
}
int main ()
{
	clase1 obj1;
	clase2 obj2;
	obj1.suma (obj2);
	obj1.visualiza (obj2);
}
