#include <iostream>
 
using namespace std;

void execute(int x , int y){
  if(x<y){
    for(int i = x+1 ; i<y ; ++i)
      {
        if(i%5 == 2 || i%5==3){
          cout<<i<<endl;
      }
    }
  }else{
    for(int i = y+1 ; i<x ; ++i)
      {
        if(i%5 == 2 || i%5==3){
          cout<<i<<endl;
        }
      }
  }
}
 
int main() {
  
  int x , y;


  while (cin>>x>>y)
  {
    execute(x , y);
  }
  
   
  return 0;
}