#include <iostream>
 
using namespace std;
 
int main() {
  
  int value , count;

  for(int i =0 ; i <5 ; i++)
  {
    cin>>value;
    if(value%2==0)
    {
      count++;
    }
  }  
  cout<<count<<" valores pares"<<endl;
  return 0;
}