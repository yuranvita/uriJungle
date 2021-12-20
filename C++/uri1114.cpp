#include <iostream>

 
using namespace std;
 
int main() {
 
  int senha=2002, inputPassword; 

  while (cin>>inputPassword)
  {
    if(inputPassword!=senha)
    {
      cout<<"Senha Invalida"<<endl;
    }
    else
    {
      cout<<"Acesso Permitido"<<endl;
      break;
    }
  }
  
 
  return 0;
}