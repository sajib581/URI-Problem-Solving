#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    while(1){
        int L,R ;
        cin>>L>>R ;
        if(L>5&&R>5){
            return 0 ;
        }
        else if(L==0&&R==0){
            return 0 ;
        }
        cout<<L+R<<endl ;
    }

    return 0 ;
}

