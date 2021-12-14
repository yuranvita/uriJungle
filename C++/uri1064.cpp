#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
  
  int count=0 ;
  float value , media;
  
  for(int i=0; i<6 ; i++){
    cin>>value;
    if(value>0){
      media += value;
      count++;
    }
  }
  cout<<count<<" valores positivos"<<endl;
  cout<<fixed<<setprecision(1)<<(media/count)<<endl;
  return 0;
}