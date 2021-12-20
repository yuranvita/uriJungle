#include <iostream>
 
using namespace std;
 
int main() {
 
  
  float i , j , control;

  for(control=1,i=0;i<=2.1;i+=0.2){
    for(j=0;j<3;j++){
      cout<<"I="<<i<<" "<<"J="<<control+j+i<<endl;
    }
  }
 
  return 0;
}