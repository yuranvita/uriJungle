#include <iostream>
 
using namespace std;
 
int main() {
 
  string strVI , strT , strN;

  while(cin>>strVI>>strT>>strN)
  {
    
    if(strVI == "vertebrado")
    {
      if(strT == "ave"){
        if(strN == "carnivoro")
        {
          cout<<"aguia"<<endl;
        }else
        {
          cout<<"pomba"<<endl;
        }
      }else{
        if(strN == "onivoro")
        {
          cout<<"homem"<<endl;
        }
        else
        {
          cout<<"vaca"<<endl;
        }
      }
    }
    else
    {
      if(strT == "inseto")
      {
        if(strN == "hematofago")
        {
          cout<<"pulga"<<endl;
        }
        else
        {
          cout<<"lagarta"<<endl;
        }
      }
      else
      {
        if(strN == "hematofago")
        {
          cout<<"sanguessuga"<<endl;
        }
        else
        {
          cout<<"minhoca"<<endl;
        }
      }
    }
  }

  return 0;
}

