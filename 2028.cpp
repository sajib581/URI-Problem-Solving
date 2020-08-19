#include<bits/stdc++.h>
using namespace std ;

int main(){

    int n ;
    int cas = 1 ;
    while(cin>>n){

    if(n>200){
        return 0 ;
    }

    int total = 1 ;
    int arr[250] ;
    arr[0] = 0 ;
    int num=1 ;

    for (int i=0; i<=n;i++){
        for(int j = 0; j<i ; j++){
            arr[total] = i ;
            total++ ;
        }
    }

    cout<<"Caso "<<cas<<": "<<total<<" numero"<<endl ;
    for(int i=0; i<total; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl ;
    cout<<endl ;
    cas++ ;
    }

    return 0 ;
}
