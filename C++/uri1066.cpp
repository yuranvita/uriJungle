#include <iostream>
 
using namespace std;
 
int main() {
  
  int value , par=0 , impar=0 , pos=0 ,neg=0;

  for(int i =0 ; i <5 ; i++)
  {
    cin>>value;
    if(value%2==0)
    {
      par++;
      if(value==0){

      }
      else if(value>0)
      {
        pos++;
      }
      else
      { 
        neg++;
      }
    }
    else
    {
      impar++;
      if(value<0)
      {
        neg++;
      }
      else
      {
        pos++;
      }
    }
  }  
  cout<<par<<" valor(es) par(es)"<<endl;
  cout<<impar<<" valor(es) impar(es)"<<endl;
  cout<<pos<<" valor(es) positivo(s)"<<endl;
  cout<<neg<<" valor(es) negativo(s)"<<endl;
  return 0;
}