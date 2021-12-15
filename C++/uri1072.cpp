#include <iostream>
 
using namespace std;
 
int main() {
  
  
  int N , aux , in  , out;

  while (cin>>N)
  { 

    int M[N];
    in = 0;
    out = 0;
     
    for(int i = 0 ; i<N; i++)
    {
      cin>>aux;
      M[i] = aux;
    }

    for(int i = 0 ; i<N ; i++)
    {
      if(M[i] >= 10 && M[i] <=20)
      {
        in++;
      }
      else
      {
        out++;
      }
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
  }
  
 
  return 0;
}