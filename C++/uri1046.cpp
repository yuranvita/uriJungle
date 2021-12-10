#include <iostream>
 
using namespace std;
 
int main() {
 
  int Hi , Hf , Dt;

  while (cin>>Hi>>Hf)
  {
    if(Hi>=Hf)
    { 
      Dt = (24-Hi)+Hf;
      cout<<"O JOGO DUROU "<<Dt<<" HORA(S)"<<endl;
    }
    else
    {
      Dt = Hf - Hi;
      cout<<"O JOGO DUROU "<<Dt<<" HORA(S)"<<endl;
    }
  }

  return 0;
}