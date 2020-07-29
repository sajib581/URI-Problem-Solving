#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float a,b,c ;
    cin>>a>>b>>c ;

    float tringle = 0.5*a*c ;
    float circle = 3.14159*c*c ;
    float trapiziam = 0.5*(a+b)*c ;
    float square = b*b ;
    float rectengle = a*b ;

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tringle<<endl ;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle<<endl ;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapiziam<<endl ;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl ;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectengle<<endl ;

    return 0 ;
}

