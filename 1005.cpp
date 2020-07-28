#include<stdio.h>
#include <iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float A,B,MEDIA ;
    cin>>A>>B ;

    MEDIA = (A*3.5+B*7.5)/(3.5+7.5) ;
    printf("MEDIA = %.5f\n",MEDIA) ;

    return 0 ;

}

