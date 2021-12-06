#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
  
  double a , b ,c ,r1,r2, delta;


  cin>>a>>b>>c;

  delta = (pow(b,2)-4*a*c);

  if(a==0 || delta<0){
    cout<<"Impossivel calcular"<<endl;
    return 0;
  }
  
  r1 = ((-b) + sqrt((pow(b,2) - 4*a*c)))/(2*a);
  r2 = ((-b) - sqrt((pow(b,2) - 4*a*c)))/(2*a);


  cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
  cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;



  
  return 0;
}