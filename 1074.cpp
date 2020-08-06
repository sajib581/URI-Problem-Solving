
#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int N,X ;
    cin>>N ;
    for(int i=0;i<N;i++){
        cin>>X ;
        if(X==0){
            cout<<"NULL"<<endl ;
        }
        else if(X%2!=0){
            if(X>0){
                cout<<"ODD POSITIVE"<<endl ;
            }else{
                cout<<"ODD NEGATIVE"<<endl ;
            }
        }
        else if(X%2==0){
            if(X>0){
                cout<<"EVEN POSITIVE"<<endl ;
            }else{
                cout<<"EVEN NEGATIVE"<<endl ;
            }
        }
    }

    return 0 ;
}
