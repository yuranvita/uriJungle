#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  float n1,n2,n3,n4,media;



  while(cin>>n1>>n2>>n3>>n4){


    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;

    if(media < 5){
      cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
      cout<<"Aluno reprovado."<<endl;
    }else if(media >= 5 && media <7){
      cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
      cout<<"Aluno em exame."<<endl;
      cin>>n1;
      media = (media + n1) / 2 ;
      if(media >=5){
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<n1<<endl;
        cout<<"Aluno aprovado."<<endl;
        cout<<fixed<<setprecision(1)<<"Media final: "<<media<<endl;
      }
    }else if(media>=7){
      cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
      cout<<"Aluno aprovado."<<endl;
    }

  }
    
  return 0;
}