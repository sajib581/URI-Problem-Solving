
#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float a,b,c ;
    cin>>a>>b>>c ;
    if(a<b+c && b<a+c && c<a+b){
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c <<endl ;
    }
    else{
        cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)*c)/2<<endl  ;
    }

    return 0 ;
}
