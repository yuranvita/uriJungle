#include <iostream>
 
using namespace std;

 void calcular_qtd_cell(int n){
  int b;

  cout<<n<<endl;
  cout << n/100 << " nota(s) de R$ 100,00" << endl;
  b = n%100;
  cout << b/50 << " nota(s) de R$ 50,00" << endl;
  b = b%50;
  cout << b/20 << " nota(s) de R$ 20,00" << endl;
  b = b%20;
  cout << b/10 << " nota(s) de R$ 10,00" << endl;
  b = b%10;
  cout << b/5 << " nota(s) de R$ 5,00" << endl;
  b = b%5;
  cout << b/2 << " nota(s) de R$ 2,00" << endl;
  b = b%2;
  cout << b/1 << " nota(s) de R$ 1,00" << endl;  
  
 }

int main() {
 
  int n;

  cin>>n;

  if(0<n<1000000){
    calcular_qtd_cell(n);
  }else{
    cout<<"O valor está a baixo de 0 ou acima de 1000000"<<endl;
  }

  return 0;
}