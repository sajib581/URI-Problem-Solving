#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);
    int flag = true ;
    int first[5];
    int second[5] ;
    for(int i=0;i<5;i++){
        cin>>first[i] ;
    }
    for(int i=0;i<5;i++){
        cin>>second[i] ;
        if(first[i]==second[i]){
            flag = false ;
        }
    }
    if(flag){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl ;
    }




    return 0 ;
}

