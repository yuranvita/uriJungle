#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
 
  float x1,x2,y1,y2 , distance;

  cin>>x1>>y1>>x2>>y2;

  distance = sqrt((pow(x2-x1,2)+pow(y2-y1,2)));


  cout<<fixed<<setprecision(4)<<distance<<endl;

 
  return 0;
}