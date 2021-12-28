#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
  
  
  float x ,y , media ;
  
  
  while (cin>>x)
  {
    if(x>=0 && x<=10)
    {
      break;
    }
    else
    {
      cout<<"nota invalida"<<endl;
    }
  }
  while (cin>>y)
  {
    if(y>=0 && y<=10)
    {
      break;
    }
     else
    {
      cout<<"nota invalida"<<endl;
    }
  }

  media = (x+y)/2;

  cout<<"media = "<<media<<endl;
  
  
  return 0;
}