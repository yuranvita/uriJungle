#include <iostream>
 
using namespace std;

void test_case(int n1, int n2){
  int countImp = 0;

  if(n1==n2)
  {
    cout<<countImp<<endl;
  }else if(n1>n2)
  { 
    n1-=1;
    for(n1 ; n1>n2 ; n1--)
    {
      if(n1%2!=0){
        countImp+=n1;
      }
    }
    cout<<countImp<<endl;
  }else if(n2>n1)
  {
    n1+=1;
    for(n1 ; n1<n2 ; n1++){
      if(n1%2!=0){
        countImp+=n1;
      }
    }
    cout<<countImp<<endl;
  }

  
  
}
 
int main() {
  
  int n , n1 , n2;

  cin>>n;

  while(n!=0 && cin>>n1>>n2){

    test_case(n1 , n2);
    n--;
  }
    
 
  return 0;
}