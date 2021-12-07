#include <iostream>
#include <iomanip>
 
using namespace std;
 
  float price(int n , int qtd){
   if(n==1){
     return qtd*4;
   }else if(n==2){
     return qtd*4.50;
   }else if(n==3){
     return qtd*5;
   }else if(n==4){
     return qtd*2;
   }else if(n==5){
     return qtd*1.50;
   }
 }

int main() {
 
  

  int n , qtd;

  while (cin>>n>>qtd)
  {
    float valor = price(n,qtd);

    cout<<fixed<<setprecision(2)<< "Total: R$ "<<valor<<endl;
  }
  
  



 
  return 0;
}