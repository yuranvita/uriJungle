#include <iostream>
 
using namespace std;
 
int main() {
 
    

  int op , gasolina=0 , diesel=0, alcool=0;

  while (cin>>op)
  {
    if(op==1){
      alcool++;
    }else if(op==2){
      gasolina++;
    }else if(op==3){
      diesel++;
    }else if(op==4){
      cout<<"MUITO OBRIGADO"<<endl;
      cout<<"Alcool: "<<alcool<<endl;
      cout<<"Gasolina: "<<gasolina<<endl;
      cout<<"Diesel: "<<diesel<<endl;

      break;
    }
  
  }
    
 
    return 0;
}