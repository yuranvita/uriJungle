#include <iostream>
#include <iomanip>


using namespace std;
 
int main() {
 
  int velocityM , time;
  double distance,liter;

  cin>>time>>velocityM;

  distance = time*velocityM;
  liter = distance/12;

  cout<<fixed<<setprecision(3)<<liter<<endl;
  
    

  return 0;
}