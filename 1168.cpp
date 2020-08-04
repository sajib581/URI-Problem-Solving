
#include<bits/stdc++.h>
#include<string.h>
using namespace std ;

int main(){

    int N ;
    cin>>N ;
    if(N>2000){
        return 0 ;
    }
    for(int cas =0; cas<N ;cas++){
        char num[500] ;
    int sum =0 ;
    cin>>num ;
    int length = strlen(num) ;
    for(int i=0; i<length;i++){
        int n=num[i] ;
        if(n == 48)sum+=6 ;
        else if (n == 49)sum+=2 ;
        else if (n == 50)sum+=5 ;
        else if (n == 51)sum+=5 ;
        else if (n == 52)sum+=4 ;
        else if (n == 53)sum+=5 ;
        else if (n == 54)sum+=6 ;
        else if (n == 55)sum+=3 ;
        else if (n == 56)sum+=7 ;
        else if (n == 57)sum+=6 ;
    }
    cout<<sum<<" leds"<<endl ;
    }


    return 0 ;
}
