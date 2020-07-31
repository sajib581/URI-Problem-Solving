#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int time ;
    cin>>time ;
    cout<<time/365<<" ano(s)"<<endl ;
        time = time%365 ; //

    cout<<time/30<<" mes(es)"<<endl ;
    time=time%30 ;

    cout<<time<<" dia(s)"<<endl ;

    return 0 ;
}


