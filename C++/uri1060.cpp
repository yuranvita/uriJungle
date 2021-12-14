#include <iostream>
 
using namespace std;
 
int main() {
  
  int count=0 ;
  float value;
  
  for(int i=0; i<6 ; i++){
    cin>>value;
    if(value>0){
      count++;
    }
  }
  cout<<count<<" valores positivos"<<endl;
  return 0;
}