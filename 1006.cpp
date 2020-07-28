#include<stdio.h>
#include <iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float A,B,C,MEDIA ;
    cin>>A>>B>>C ;

    MEDIA = (A*2 + B*3+ C*5)/(2+3+5) ;
    printf("MEDIA = %.1f\n",MEDIA) ;
    return 0 ;

}

