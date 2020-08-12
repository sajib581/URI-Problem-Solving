#include<bits/stdc++.h>
using namespace std ;

int main(){


    int a,b ;
    cin>>a>>b ;
    if(a<0 || b<0){
        return 0 ;
    }
    if(a>b){
        swap(a,b) ;
    }
    a++ ;
    for(int i=a; i<b; i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl ;
        }

    }

    return 0 ;
}

