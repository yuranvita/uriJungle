#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  int X;
  float Y, kml;



  cin>>X>>Y;
  kml=X/Y;



  cout<<fixed<<setprecision(3)<<kml<<" km/l"<<endl;
 
  return 0;
}