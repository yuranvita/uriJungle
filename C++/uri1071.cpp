#include <iostream>
 
using namespace std;
 
int main() {
  
  int X,Y, soma = 0;

  while (cin>>X>>Y)
  {
    if(X>Y)
    {
      for(int i=X-1; i > Y; i--)
      {
        if(i%2!=0)
        {
          soma += i;
        }
      }
    }
    else if(X<Y)
    {
       for(int i=X+1; i < Y; i++)
      {
        if(i%2!=0)
        {
          soma += i;
        }
      }
    }
    else if(X==Y)
    {
      soma = 0;
    }

    cout<<soma<<endl;
    soma=0;
  }
  
  
  return 0;
}