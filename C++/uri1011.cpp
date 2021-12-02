#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
  double R , pi=3.14159;
  
  double V;

  cin>>R;


  V= (4/3.0) * pi * pow(R,3);


  cout<<fixed<<setprecision(3)<<"VOLUME = "<<V<<endl;
 
  return 0;
}