#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string T ;
    getline(cin,T) ;

    int length = T.length() ;

    if(length>=1 && length <=500){

    if(length>140){
    cout<<"MUTE"<<endl ;
    }
    else{
        cout<<"TWEET"<<endl ;
    }
    }


    return 0 ;
}

