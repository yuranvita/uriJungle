#include <iostream>
#include <math.h>
 
using namespace std;

void verifyTriang(double a , double b , double c ) {

  double  A , B , C;
  A = pow(a,2);
  B = pow(b,2);
  C = pow(c,2);
  
  if(a>=(b+c) || b>=(a+c) || c>=(b+a) ){
    cout<<"NAO FORMA TRIANGULO"<<endl;
  }else if( A==(B+C) || B==(A+C) || C==(B+A) ){
    cout<<"TRIANGULO RETANGULO"<<endl;
  }else if( A>(B+C) || B>(A+C) || C>(B+A)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
  }else if( A<(B+C) || B<(A+C) || C<(B+A)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
  }
  
  
  if(a == b && a == c){
    cout<<"TRIANGULO EQUILATERO"<<endl;
  }
  
  if(a==b && a != c || b==c && b != a || c==a && c != b){
    cout<<"TRIANGULO ISOSCELES"<<endl;
  }
}

int main() {
  
  double a , b , c ;

  ;

  while (cin>>a>>b>>c)
  {
    verifyTriang(a,b,c);
  }
  

  
 
  return 0;
}