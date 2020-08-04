#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
int arr[2002] ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int N,x ;
    cin>>N ;
    for(int i=0;i<N;i++){
        cin>>x ;
        if(x>2000){
            return 0 ;
        }
        arr[x]++ ; ;
        if(arr[x]>20){
            return 0;
        }
    }

    for(int i=1;i<=2000;i++){
        if(arr[i]!=0){
            cout<<i<<" aparece "<<arr[i]<<" vez(es)"<<endl ;
        }
    }

    return 0 ;
}

