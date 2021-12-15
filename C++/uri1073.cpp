#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  
  long N;

  while (cin>>N)
  { 
    if(N > 5 && N < 2000)
    {
        for(int i=1 ; i<=N ; i++)
      { 
        if(i%2==0)
        {
          cout<<fixed<<setprecision(0)<<i<<"^2 = "<<pow(i,2)<<endl;
        }
      }
    }
   
  }
  
 
  return 0;
}