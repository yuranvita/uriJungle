#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  float Salary ,Imposte;

  while(cin>>Salary){
    if(Salary <=2000)
    {
      cout<<fixed<<setprecision(2)<<"Isento"<<endl;
    }
    else if(Salary >2000 && Salary <=3000)
    { 
      Salary -= 2000;
      Imposte = (1000 * 0.08);

      cout<<fixed<<setprecision(2)<<"R$ "<<Salary*0.08<<endl;
    }
    else if(Salary > 3000 && Salary <=4500)
    {
      Salary -= 3000;
      Imposte = (1000 * 0.08) + (Salary * 0.18);
      cout<<fixed<<setprecision(2)<<"R$ "<<Imposte<<endl;
    }
    else if(Salary > 4500)
    {
      Salary -= 4500;
      Imposte = (1000 * 0.08) + (1500 * 0.18) + (Salary * 0.28);
      cout<<fixed<<setprecision(2)<<"R$ "<<Imposte<<endl;
    }
  }
 
  return 0;
}