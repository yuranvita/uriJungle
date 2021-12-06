#include <iostream>
 
using namespace std;
 
int main() {
  
  float vX = 60 , vY = 90  ;
  
  int time = 0 , distance , diff , carroX , carroY;

  cin>>distance; 

  while (diff != 30)
  {
    time += 1 ;

    carroX = vX*time;
  }
  

  

  cout<<time<<" minutos"<<endl;
 
  return 0;
}