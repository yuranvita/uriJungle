#include <iostream>
 
using namespace std;
 
int main() {
 
  int X;
  while (cin>>X)
  {
    for(int i=X; i<=X+11; i++)
    {
      if(i%2==1){
        cout<<i<<endl;
      }
    }
  }
  
 
  return 0;
}