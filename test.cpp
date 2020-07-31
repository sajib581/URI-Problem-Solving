#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){

    float N ;
    cin>>N ;
    if(0 < N && N < 1000000)
    { //if section
    float money[12] = {100,50,20,10,5,2,1,.50,.25,.10,.05,.01} ;
    string str = " nota(s) de R$ " ;
    cout<<"NOTAS:"<<endl ;
    float k;
    for(int i=0;i<12;i++)
        {//for section
       k= floor(N/money[i]);
       printf("%.f",k);
       cout<<str<<fixed<<setprecision(2)<<money[i]<<endl ;

       N = fmod(N,money[i]) ;

       if(money[i]==2.0)
        {
        cout<<"MOEDAS:"<<endl ;
        str = " moeda(s) de R$ " ;
        }

        }//for end section
    }//if end section
    else{
        return 0 ;
    }
    return 0 ;
}
