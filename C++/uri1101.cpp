#include <iostream>
 
using namespace std;
 
int main() {
 
  int m , n , aux , sum;


  while (cin>>m>>n && m>0 && n>0)
  {

    sum = 0;

    if(n>m){
      aux = n;
      n = m;
      m = aux;
    }

    for(n ; n<=m ; n++)
    {
      cout<<n<<" ";
      sum+=n;     
    }
    cout<<"Sum="<<sum<<endl;
  }
  
  
  
  return 0;
}