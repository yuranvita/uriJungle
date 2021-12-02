#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  double a ,b ,c;

  double areaT,areaC,areaTr,areaQ,areaR;


  
  cin>>a>>b>>c;

  areaT= (a*c)/2;
  areaC= pow(c,2)*3.14159;
  areaTr= ((a+b)*c)/2;
  areaQ=b*b;
  areaR=a*b;

  cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<areaT<<endl;
  cout<<fixed<<setprecision(3)<<"CIRCULO: "<<areaC<<endl;
  cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<areaTr<<endl;
  cout<<fixed<<setprecision(3)<<"QUADRADO: "<<areaQ<<endl;
  cout<<fixed<<setprecision(3)<<"RETANGULO: "<<areaR<<endl;

 
  return 0;
}