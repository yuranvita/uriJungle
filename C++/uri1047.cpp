#include <iostream>
 
using namespace std;
 
int main() {
 
  int Hi , Hf , Mi , Mf , Dt;
  
  cin>>Hi>>Mi>>Hf>>Mf;
  
  Dt = ((Hf*60)+Mf) - ((Hi*60)+Mi);

  if(Dt<=0)
  {
    Dt += 24*60;
  }

  cout<<"O JOGO DUROU "<<Dt/60<<" HORA(S) E "<<Dt%60<<" MINUTO(S)"<<endl;

  return 0;
}