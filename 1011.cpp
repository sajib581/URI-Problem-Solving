#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    double area ;
    int r ;
    cin>>r ;
    area = (4.0/3)*3.14159*r*r*r ;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<area<<endl ;

    return 0 ;
}

