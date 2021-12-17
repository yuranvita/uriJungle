#include <iostream>
 
using namespace std;
 
int main() {

  int N , aux;
 
  while (cin>>N)
  { 
    int M[N];

    for(int i = 0 ; i<N ; i++)
    { 
      cin>>aux;
      M[i] = aux;
    }
    

    for(int i = 0 ; i<N ; i++)
    { 
      if( M[i]%2==0 && M[i]<0 )
      {
        cout<<"EVEN NEGATIVE"<<endl;
      }
      else if( M[i]%2==0 && M[i]>0 )
      {
        cout<<"EVEN POSITIVE"<<endl;
      }
      else if(  M[i]%2!=0 && M[i]<0 )
      {
        cout<<"ODD NEGATIVE"<<endl;
      }
      else if( M[i]%2!=0 && M[i]>0 )
      {
        cout<<"ODD POSITIVE"<<endl;
      }
      else if(M[i] == 0 )
      {
        cout<<"NULL"<<endl;
      }
    }
    
  }
  
 
  return 0;
}