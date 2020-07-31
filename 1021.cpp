#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

    float N ;
    cin>>N ;
    if(0 <= N && N <= 1000000){
    float money[12] = {100,50,20,10,5,2,1,.50,.25,.10,.05,.01} ;
    string str = " nota(s) de R$ " ;
    cout<<"NOTAS:"<<endl ;

    for(int i=0;i<12;i++){

        cout<<fixed<<setprecision(0)<<floor(N/money[i]) ;
        cout<<str<<fixed<<setprecision(2)<<money[i]<<endl ;
        N = fmod(N,money[i]) ;

        if(money[i]==2.0){
        cout<<"MOEDAS:"<<endl ;
        str = " moeda(s) de R$ " ;
       }
    }
    }
    else{
        return 0 ;
    }
    return 0 ;
}


