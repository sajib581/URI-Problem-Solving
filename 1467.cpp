#include<bits/stdc++.h>
#include<iostream>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int a,b,c ;
    while(cin>>a>>b>>c){

    if(a==b&&b==c&&c==a){
        cout<<"*"<<endl ;
    }
    else if(a==b){
        cout<<"C"<<endl ;
    }
    else if(b==c){
        cout<<"A"<<endl ;
    }
    else if(c==a){
        cout<<"B"<<endl ;
    }
    }

    return 0 ;
}
