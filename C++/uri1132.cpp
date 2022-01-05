#include <iostream>
 
using namespace std;
 

void execute(int x , int y){
  int soma = 0;
  if(x>y){
    for(int i = y ; i<=x ; i++){
      if(i%13!=0){
        soma+=i;
      }
    }
  }else{
    for(int i = x ; i<=y ; i++){
      if(i %13 != 0){
        soma+=i;
      }
    }
  }

  cout<<soma<<endl;
}


int main() {
 
   

   int x , y ;


   while (cin>>x>>y)
   {
     execute(x , y);
   }
   
 
    return 0;
}