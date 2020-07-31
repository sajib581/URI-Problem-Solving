#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float x1,y1,x2,y2 ;
    cin>>x1>>y1 ;
    cin>>x2>>y2 ;
    float result = pow((x2-x1),2) + pow((y2-y1),2) ;
    float distance = sqrt(result) ;
    cout<<fixed<<setprecision(4)<<distance<<endl ;

    return 0 ;
}

