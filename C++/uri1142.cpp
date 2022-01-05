#include <iostream>
 
using namespace std;
 
int main() {

  int n , aux=1;

  cin>>n;
  
  for(int i = 0 ; i<7 ; i++){
    cout<<aux<<" "<<aux+1<<" "<<aux+2<<" PUM"<<endl;
    aux+=4;
  }
  
  
 
  return 0;
}