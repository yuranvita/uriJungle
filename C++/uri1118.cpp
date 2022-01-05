#include <iostream>
#include <iomanip>
 
using namespace std;


void calcular_media(float x , float y){
    cout<<fixed<<setprecision(2)<<"media = "<<(x+y)/2<<endl;
}

int main() {
    
    float x , y;  
    int op=1;

    while (op==1)
    {
        while (cin>>x)
        {
            if(x>=0 && x<=10)
            {
            break;
            }
            else
            {
            cout<<"nota invalida"<<endl;
            }
        }
        while (cin>>y)
        {
            if(y>=0 && y<=10)
            {
            break;
            }
            else
            {
            cout<<"nota invalida"<<endl;
            }
        }

        calcular_media(x , y);

        cout<<"novo calculo (1-sim 2-nao)"<<endl;

        while (cin>>op)
        {
            if(op==2){
                break;
            }
            else if(op!=1){
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
            }else if(op==1){
                break;
            }
        }
    
    }
    
    
    return 0;
}