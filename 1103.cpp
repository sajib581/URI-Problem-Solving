#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    while(1){
        int h1,m1,h2,m2 ;

    cin>>h1>>m1>>h2>>m2 ;

    if(h1>23||m1>59||h2>23||m2>59){
        return 0 ;
    }
    if(h1==0&&h2==0&&m1==0&&m2==0){
        return 0 ;
    }

    int current_min = h1*60+m1 ;
    int alarm_min = h2*60+m2 ;

    if(current_min>alarm_min){
        alarm_min = alarm_min +24*60 ;
    }

    int reminder_min = alarm_min-current_min ;
    cout<<reminder_min<<endl ;
    }

    return 0 ;
}

