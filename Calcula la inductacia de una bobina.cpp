#include<iostream.h>
#include<math.h>
using namespace std;
class bobina
{
      float L;
      float mu;
      float N;
      float A;
      float d;
public:
       bobina (float, float, float, float);
       void ope();
       void imp();
       };
bobina::bobina(float M, float n, float a, float D)
{
                     mu=M;
                     N=n;
                     A=a;
                     d=D;
}
void bobina::ope()
{
     L=mu*(pow(N,2)*A/d);
}
void bobina::imp()
{
     cout<<"La inductancia es: "<<L<<endl;
     }
int main ()
{
    bobina inductancia (12, 15, 3, 5);
    inductancia.ope ();
    inductancia.imp();
    system("pause");
} 
