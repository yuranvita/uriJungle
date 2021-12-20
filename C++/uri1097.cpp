#include <iostream>
 
using namespace std;
 
int main() {
 
  int i , j , control=7;


  for(i=1 ; i<=9 ; i+=2){
    for(j=control ; j>=control-2 ; j--){
      cout<<"I="<<i<<" J="<<j<<endl;
    }
    control +=2;
  }
  
  return 0;
}