#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
  
  string name;
  double salaryF, totalV;



  cin>>name;
  cin>>salaryF>>totalV;

  cout<<fixed;
  cout<<setprecision(2)<<"TOTAL = R$ "<<salaryF+totalV*0.15<<endl;



 
  return 0;
}