#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {


  float a , b , c , area, perimetro;
  
  while (cin>>a>>b>>c)
  {
    if(a < b+c && b< a+c && c < a+b){
      perimetro = a + b + c;
      cout<<fixed<<setprecision(1)<<"Perimetro = "<<perimetro<<endl;
    }else{
      area = ((a+b)*c)/2;
      cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }
  }
  
  return 0;
}