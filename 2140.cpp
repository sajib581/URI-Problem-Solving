
#include<bits/stdc++.h>
using namespace std ;

int main(){

    int arr[6] = {2,5,10,20,50,100} ; // not accepted
    while(1){
    int n,m,flag = 0 ;
    cin>>n>>m ;
    double d ;

    if(m==0 && n==0){
        return 0 ;
    }
    int r = m-n ;
    if(r>100)r-=100 ;
    else if(r>100)r-=100 ;
    else if(r>50)r-=50 ;
    else if(r>20)r-=20 ;
    else if(r>10)r-=10 ;
    else if(r>5)r-=5 ;
    else if(r>=2)r-=2 ;

    cout<<r<<endl ;
    for(int i=0 ; i<6 ; i++ ){
        d=r-arr[i] ;
        if(d==0){
            flag = 1 ;
        }
    }
    if(flag == 1){
        cout<<"possible"<<endl ;
    }
    else{
        cout<<"impossible"<<endl ;
    }

    }
    return 0 ;
}
