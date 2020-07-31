#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int time,speed;
    float liters;

    cin>>time>>speed ;

    liters = (1.0*time*speed)/12 ;

    cout<<fixed<<setprecision(3)<<liters<<endl ;

    return 0 ;
}

