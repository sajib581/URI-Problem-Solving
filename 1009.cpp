#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string name ;
    getline(cin,name) ;

    double salary ,sell,TOTAL ;
    cin>>salary>>sell ;

    TOTAL =  salary+sell*0.15 ;

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<TOTAL<<endl ;

    return 0 ;
}
