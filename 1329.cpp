
#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    while(1){
    int test,play ;
    int mary=0,john=0 ;
    cin>>test ;
    if(test==0){
        return 0 ;
    }
    for(int i=0;i<test;i++){
        cin>>play ;
        if(play==0){
            mary++ ;
        }
        else if(play==1){
            john++ ;
        }
        else{
            return 0 ;
        }
    }
    cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl ;
    }

    return 0 ;
}
