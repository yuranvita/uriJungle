#include <iostream>
 
using namespace std;
 
int main() {
 
    int x , y , op=1 , inter=0 , gremio=0 , empate=0 , granal=0;


    while (op==1)
    {
      cin>>x>>y;
      granal++;
      if(x>y){
        inter++;
      }else if(y>x){
        gremio++;
      }else if(x==y){
        empate++;
      }
      cout<<"Novo grenal (1-sim 2-nao)"<<endl;

      while (true)
      {
        cin>>op;

        if(op==2){
          op=2;
          break;
        }else if(op==1){
          op=1;
          break;
        }else if(op!=1){
          cout<<"Novo grenal (1-sim 2-nao)"<<endl;
          continue;
        }
      }
      
    }
    cout<<granal<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl; 
    cout<<"Empates:"<<empate<<endl;
    
    if(inter>gremio){
      cout<<"Inter venceu mais"<<endl;
    }else{
      cout<<"Gremio vendeu mais"<<endl;
    }

    
 
    return 0;
}