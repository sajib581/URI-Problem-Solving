#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

    int N,M,value,result;
    while(scanf("%d%d",&N,&M) != EOF){

    if(N<0||N>1000||M<0||M>1000){
        return 0 ;
    }
    result = 0 ;
    for(int i = 1;i<=N;i++){
        cin>>value ;
        if(i>N-M){
           result = result + value ;
        }
    }
    cout<<result<<endl ;
    }

    return 0 ;
}

