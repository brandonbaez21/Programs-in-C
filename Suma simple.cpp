#include<iostream>
using namespace std;
template<class T>
class op
{
	T a, b, res;
	public:
		op(T Aa, T Ab){a=Aa; b=Ab;}
		void imp () { cout<<"La suma es: "<<res<<endl;}
		void suma();
};
template <class T>
void op<T>::suma()
{
	res=a+b;
}
int main ()
{
	op <int>obj (10, 8); op <float>obj2 (7.4, 4.9);
	obj.suma();
	obj.imp();
	obj2.suma();
	obj2.imp();
	system("pause");
}
