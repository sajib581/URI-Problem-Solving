#include<bits/stdc++.h>
using namespace std ;

int main(){

    int T ;
    cin>>T ;
    getchar() ;
    for(int cas = 0; cas<=T; cas++){
        string text ;
    getline(cin,text) ;

    int length = text.size() ;
    int i,j ;
    int target = length/2 ;
    for(i=target-1; i>=0 ;i-- ){
        cout<<text[i] ;
    }
    for(i=length-1; i>=target ;i-- ){
        cout<<text[i] ;
    }
    cout<<endl ;
    }


    return 0 ;
}

