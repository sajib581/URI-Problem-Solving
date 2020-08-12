#include<bits/stdc++.h>
using namespace std ;

int main(){

    while(1){
        int m,n,max,min, sum=0 ;
        cin>>m>>n ;
        if(m<=0||n<=0){
            return 0 ;
        }
        max=m;
        min=n ;
        if(max<min){
            swap(max,min) ;
        }

    for(int i=min; i<=max; i++){
            cout<<i<<" " ;
            sum+=i ;
        }
        cout<<"Sum="<<sum<<endl ;

        } //end while

        return 0 ;
    }




