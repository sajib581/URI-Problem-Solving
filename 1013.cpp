
#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int a,b,c ;
    cin>>a>>b>>c ;
    int mab=(a+b+abs(a-b))/2 ;
    int result =  (mab+c+abs(mab-c))/2 ;

    cout<<result<<" eh o maior"<<endl ;
    return 0 ;
}
