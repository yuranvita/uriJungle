#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

  float S , reajust;


  while (cin>>S)
  {
    if(S >= 0.00 && S<=400.00){
      reajust = S * 0.15;
      S = S + reajust; 
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<endl;
      cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<reajust<<endl;
      cout<<fixed<<setprecision(0)<<"Em percentual: "<<15<<" %"<<endl;
    }else if(S>=400.01 && S<=800.00){
      reajust = S * 0.12;
      S = S + reajust; 
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<endl;
      cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<reajust<<endl;
      cout<<"Em percentual: "<<12<<" %"<<endl;
    }else if(S>=800.01 && S<=1200.00){
      reajust = S * 0.10;
      S += reajust; 
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<endl;
      cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<reajust<<endl;
      cout<<"Em percentual: "<<10<<" %"<<endl;
    }else if(S>=1200.01 && S<=2000.00){
      reajust = S * 0.07;
      S = S + reajust; 
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<endl;
      cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<reajust<<endl;
      cout<<"Em percentual: "<<7<<" %"<<endl;
    }else if(S>2000.00){
      reajust = S * 0.04;
      S = S + reajust; 
      cout<<fixed<<setprecision(2)<<"Novo salario: "<<S<<endl;
      cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<reajust<<endl;
      cout<<"Em percentual: "<<4<<" %"<<endl;
    }
  }
  
    
  return 0;
}