#include <iostream>
 
using namespace std;
 
int main() {
 
  int X;
  while (cin>>X)
  {
    for(int i=0; i<=X; i++)
    {
      if(i%2==1){
        cout<<i<<endl;
      }
    }
  }
  
 
  return 0;
}