#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int time ;
    cin>>time ;
    cout<<time/3600<<":" ;

    time = time%3600 ;
    cout<<time/60<<":" ;

    time=time%60 ;
    cout<<time<<endl ;

    return 0 ;
}

