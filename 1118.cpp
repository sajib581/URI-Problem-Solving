#include<bits/stdc++.h>
using namespace std ;

int main(){

    float n[2], x ;
    int  i=0 ;
    while(1){
        if(i==2){
            i=0 ;
        }
        cin>>x ;
        if(x==2){
            return 0 ;
        }
        if(x>=0&&x<=10){
            n[i] = x ;
            if(i==1){
                cout<<"media = "<<fixed<<setprecision(2)<<(n[0]+n[1])/2.0<<endl ;
                while(1){
                    int z ;
                    cin>>z ;
                    if(z==2){
                        return 0 ;
                    }
                    cout<<"novo calculo (1-sim 2-nao)"<<endl ;
                    if(z==1){
                        break ;
                    }
                }
            }
            i++ ;
        }else{
            cout<<"nota invalida"<<endl ;
        }
    }

    return 0 ;
}


