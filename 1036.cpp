#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float a,b,c,x,y,z,R1,R2 ;
    cin>>a>>b>>c ;

    x=b*b-4*a*c ;
    if(x<0){
        cout<<"Impossivel calcular"<<endl;
    }
    else if(a==0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        y = -b + sqrt(x) ;
        z = -b - sqrt(x) ;
        R1 = y/(a+a) ;
        R2 = z/(a+a) ;

        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl ;
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl ;
    }


    return 0 ;
}

