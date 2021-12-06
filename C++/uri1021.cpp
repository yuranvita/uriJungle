#include <iostream>
 
using namespace std;

 void calcular_qtd_cell(double n){
  int b = (int)n;
    cout << "NOTAS:\n";
    cout << b/100 << " nota(s) de R$ 100.00\n";
    b = (b%100);
    cout << b/50 << " nota(s) de R$ 50.00\n";
    b = (b%50);
    cout << b/20 << " nota(s) de R$ 20.00\n";
    b = (b%20);
    cout << b/10 << " nota(s) de R$ 10.00\n";
    b = (b%10);
    cout << b/5 << " nota(s) de R$ 5.00\n";
    b = (b%5);
    cout << b/2 << " nota(s) de R$ 2.00\n";
    b = (b%2);
    cout << "MOEDAS:\n";
    cout << b/1 << " moeda(s) de R$ 1.00\n";

    b = n*100;

    b = b%100;
    cout <<  b/50 << " moeda(s) de R$ 0.50\n";
    b = b%50;
    cout <<  b/25 << " moeda(s) de R$ 0.25\n";
    b = b%25;
    cout <<  b/10 << " moeda(s) de R$ 0.10\n";
    b = b%10;
    cout <<  b/5 << " moeda(s) de R$ 0.05\n";
    b = b%5;
    cout <<  b/1 << " moeda(s) de R$ 0.01\n";
  
 }

int main() {
 
  double n;

 

  while (cin>>n)
  {
    calcular_qtd_cell(n);
  }
  

  return 0;
}