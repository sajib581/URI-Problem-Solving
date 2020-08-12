#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    while(1){
    int N,A,B,A_score=0,B_score=0 ;
    cin>>N ;

    if(N==0){
        return 0 ;
    }
    for(int i=0;i<N;i++){
        cin>>A>>B ;
        cout<<"OK" ;
        if(A==B){

        }
        else if(A>B){
            A_score++ ;
        }
        else{
            B_score++ ;
        }
    }
    cout<<A_score<<" "<<B_score<<endl ;
    }

    return 0 ;
}
