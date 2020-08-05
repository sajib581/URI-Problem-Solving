#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int h1,m1,h2,m2,h,m ;
    cin>>h1>>m1>>h2>>m2 ;

    if(h1==h2&&m1==m2){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl ;
        return 0 ;
    }

    if(m2<m1){
        m2+=60 ;

        h1++ ;
        if(h2<h1){
        h2+=12 ;
        }
    }
    if(h2<h1){
        h2+=12 ;
    }
    m =m2-m1 ;
    h =h2-h1 ;

    if(m<1||h>24){
        return 0 ;
    }
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl ;



    return 0 ;
}

