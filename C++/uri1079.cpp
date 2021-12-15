#include <iostream>
#include <iomanip>
 
using namespace std;


void test_case(float n1 , float n2 , float n3){
  float media;
  
  media = ((n1*2) + (n2*3) + (n3*5)) / 10;

  cout<<fixed<<setprecision(1)<<media<<endl;

}
 
int main() {
 
  int n;
  float n1 , n2 , n3;

  while (cin>>n)
  {
    for(int i=0 ; i<n; i++){
      cin>>n1>>n2>>n3;
      test_case(n1 , n2 , n3);
    }
  }
  
  
  return 0;
}