#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int a,b,c,temp ;
    cin>>a>>b>>c ;
    int x=a,y=b,z=c ;

    if(a>b){
        temp = a ;
        a=b ;
        b=temp ;
    }
    if(a>c){
        temp = a ;
        a=c ;
        c=temp ;
    }
    if(b>c){
        temp = b ;
        b=c ;
        c=temp ;
    }
    cout<<a<<endl ;
    cout<<b<<endl ;
    cout<<c<<endl ;
    cout<<endl ;
    cout<<x<<endl ;
    cout<<y<<endl ;
    cout<<z<<endl ;

    return 0 ;
}

