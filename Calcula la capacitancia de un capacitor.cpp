#include<iostream.h>
#include<math.h>
using namespace std;
class capacitor
{
      float Cap;
      float Area;
      float Distancia;
      float Const;
public:
       capacitor(float);
       void ini(float, float);
       float ope();
};
capacitor::capacitor(float E)
{
       Const=E;
       
}
void capacitor::ini(float A, float D)
{
     Area=A;
     Distancia=D;
}
float capacitor::ope()
{
      Cap=Const*(Area/Distancia);
      return(Cap);
}
int main ()
{
    capacitor capacitancia((8.85)*(pow(10,-12)));
    capacitancia.ini(11,5);
    capacitancia.ope();
    cout<<"La capacitancia es: "<<capacitancia.ope()<<endl;
    system("pause");
}
