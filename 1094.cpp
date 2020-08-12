#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int N, n, rabit_total=0, rat_total = 0, frog_total=0 ;
    char c ;
    cin>>N ;

    for(int cas=0;cas<N;cas++){
        cin>>n>>c ;
        if(c=='C'){
            rabit_total+=n ;
        }
        else if(c=='R'){
            rat_total+=n ;
        }
        else if(c=='S'){
            frog_total+=n ;
        }
        if(n>15){
        return 0 ;
    }
    }
    int total = rabit_total + rat_total + frog_total ;
    cout<<"Total: "<<total<<" cobaias"<<endl ;
    cout<<"Total de coelhos: "<<rabit_total<<endl ;
    cout<<"Total de ratos: "<<rat_total<<endl ;
    cout<<"Total de sapos: "<<frog_total<<endl ;

    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(rabit_total*100.00)/total<<" %"<<endl ;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(rat_total*100.00)/total<<" %"<<endl ;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(frog_total*100.00)/total<<" %"<<endl ;



    return 0 ;
}

