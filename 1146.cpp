#include<bits/stdc++.h>
using namespace std ;

int main(){


    while(1){
        int x ;
        cin>>x ;
        if(x==0){
            return 0 ;
        }
        for(int i=1; i<=x; i++){
            cout<<i ;
            if(i!=x){
                cout<<" " ;
            }
            else if(i==x){
                cout<<endl ;
            }
        }
    }

    return 0 ;
}

