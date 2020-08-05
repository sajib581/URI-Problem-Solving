#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float x,y,price ;
    cin>>x>>y ;
    if(x==1){
        price = 4.00*y ;
    }
    else if(x==2){
        price = 4.50*y ;
    }
    else if(x==3){
        price = 5.00*y ;
    }
    else if(x==4){
        price = 2.00*y ;
    }
    else if(x==5){
        price = 1.50*y ;
    }

    cout<<"Total: R$ "<<fixed<<setprecision(2)<<price<<endl ;


    return 0 ;
}

