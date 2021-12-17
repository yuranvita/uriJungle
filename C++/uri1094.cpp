#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  int  n=0 , qtd , total ;
  float frog, mouse=0 , rabit=0;
  char type;

  cin>>n;
  
  
  while(n!=0)
  {

    cin>>qtd>>type;


    if(type=='C')
    {
      rabit += qtd;
    }else if(type=='R'){
      mouse += qtd;
    }else if(type=='S'){
      frog += qtd;
    }

    n--;
  }
  total = mouse + frog + rabit;
  cout<<"Total: "<<total<<" cobaias"<<endl;
  cout<<"Total de coelhos: "<<rabit<<endl;
  cout<<"Total de ratos: "<<mouse<<endl;
  cout<<"Total de sapos: "<<frog<<endl;
  cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<rabit/total*100<<" %"<<endl;
  cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<mouse/total*100<<" %"<<endl;
  cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<frog/total*100<<" %"<<endl;
    
  
 
  return 0;
}