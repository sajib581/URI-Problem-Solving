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

    int st_min = h1*60+m1 ;
    int end_min = h2*60+m2 ;

    if(end_min<st_min){
        end_min = 24*60 + end_min ;
    }
    int total_min = end_min - st_min ;
    h = total_min/60 ;
    m = total_min%60 ;
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl ;




    return 0 ;
}


