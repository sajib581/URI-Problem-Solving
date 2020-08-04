#include<bits/stdc++.h>

using namespace std ;

int main(){

    int N ;
    cin>>N ;
    getchar() ;
    for(int cas =0; cas<N; cas++){
    string str ;
    int x ;
    getline(cin,str) ;
    cin>>x ;
    int length = str.size() ;
    if(length>50){
        return 0 ;
    }
    for(int i=0;i<length;i++){
    if(str[i]-x<65){
        char a = str[i] - x+26 ;
        cout<<a ;
    }
    else{
        char a = str[i] - x ;
        cout<<a ;
    }
    }
    cout<<endl ;
    getchar() ;
    }

    return 0 ;
}

