#include<bits/stdc++.h>
using namespace std ;

int main(){
    int T, pa,pb, year ;
    float g1, g2 ;
    cin>>T ;
    for(int cas=0; cas<T; cas++){
        year = 0 ;
        cin>>pa>>pb>>g1>>g2 ;

        while(pa<=pb){
            pa = pa + ((pa*g1)/100) ;
            pb = pb + ((pb*g2)/100) ;
            year++ ;
            if(year>100){
                break ;
            }
        }

        if(year>100){
            cout<<"Mais de 1 seculo."<<endl ;
        }
        else{
            cout<<year<<" anos."<<endl ;
        }

    }


    return 0 ;
}

