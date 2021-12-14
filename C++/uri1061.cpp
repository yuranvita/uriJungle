#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
  int dia , h , m , s;
  int diaF, hF, mF, sF;
  char dias[4];
  char ponto[3];

  cin.get(dias,4);
  cin>>dia;
  cin>>h;
  cin.get(ponto , 3);
  cin>>m;
  cin.get(ponto, 3);
  cin>>s;
  cin.getline(dias,0);
  cin.get(dias,4);
  cin>>diaF;
  cin>>hF;
  cin.get(ponto,3);
  cin>>mF;
  cin.get(ponto,3);
  cin>>sF;

  long duration = (diaF*86400 + hF*3600 + mF*60 + sF) - (dia*86400 + h*3600 + m*60 + s);

  cout<<duration/86400<<" dia(s)"<<endl;
  cout<<(duration%86400)/3600<<" hora(s)"<<endl;
  cout<<((duration%86400)%3600)/60<<" minuto(s)"<<endl;
  cout<<((duration%86400)%3600)%60<<" segundo(s)"<<endl;



 
  return 0;
}