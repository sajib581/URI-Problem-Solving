#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);
    float o,b,i ;
    string win;
    cin>>o>>b>>i ;

    if(o<b&&o<i){
        win="Otavio" ;
    }
    else if(b<o&&b<i){
        win = "Bruno" ;
    }
    else if(i<o&&i<b){
        win = "Ian" ;
    }
    else{
        win ="Empate" ;
    }

    cout<<win<<endl ;

    return 0 ;
}

