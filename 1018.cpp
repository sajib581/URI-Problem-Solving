#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int N,temp ;
    cin>>N ;
    if(0 < N && N < 1000000){
    int money[7] = {100,50,20,10,5,2,1} ;
    int result[7] ;
    cout<<N<<endl ;
    for(int i=0;i<7;i++){
       cout<<N/money[i]<<" nota(s) de R$ "<<money[i]<<",00"<<endl ;
       N=N%money[i] ;
    }
    }
    else{
        return 0 ;
    }
    return 0 ;
}

