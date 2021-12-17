#include <iostream>
 
using namespace std;
 
int main() {
  
  int M[100] , larger = 0, index , i=0;



  cin>>M[0];
  larger=M[0];
  
  for(int i=1 ; i<100; i++)
  { 
    cin>>M[i];

    if(M[i]>larger){
      larger = M[i];
      index  = i+1;
    }
  }
  
  cout<<larger<<endl;
  cout<<index<<endl;

 
  return 0;
}