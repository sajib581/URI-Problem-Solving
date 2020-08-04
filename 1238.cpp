#include<bits/stdc++.h>

using namespace std ;

int main(){

    int N ;
    scanf("%d",&N) ;
    //getchar() ;
    for(int i=0; i<N ;i++){
    char a[50] ;
    char b[50] ;
    scanf("%s",&a);
    scanf("%s",&b) ;
    int len ;
    int a_len = strlen(a) ;
    int b_len = strlen(b) ;
    if(a_len<b_len){
        len = b_len ;
    }
    else{
        len = a_len ;
    }
    for(int i=0; i<len; i++){
            if(a_len){
                cout<<a[i] ;
                a_len-- ;
            }
            if(b_len){
                cout<<b[i] ;
                b_len-- ;
            }
    }

    cout<<endl ;
    getchar() ;
    }

    return 0 ;
}
