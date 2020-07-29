
#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int code , unit ;
    float price,total =0 ;

    for(int i=0;i<2;i++){
        cin>>code>>unit>>price ;
        total = total + unit* price ;
    }
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl ;


    return 0 ;
}
