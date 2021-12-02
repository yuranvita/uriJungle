#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
  
  int nF , hT;
  float sH;

  cin>>nF>>hT>>sH;


  
  cout<<"NUMBER = "<<nF<<endl;
  cout<<fixed;
  cout<<setprecision(2)<<"SALARY = U$ "<<hT*sH<<endl;
 
  return 0;
}