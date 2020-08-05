#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string str ;
    int p ;

    while(cin>>str>>p){

    int length = str.size() ;
    int check=0;
    int count =0 ;

    if(p>10||length>50){
        return 0 ;
    }

    for(int i=0;i<length;i++){
        /*if(str[i]!='W'||str[i]!='R'){
            break ;
        }*/
        if(str[i]=='W'){
            count++ ;
            check = 0 ;
        }
        if(str[i]=='R'){
            if(check==0){
                count++ ;
                check++ ;
            }
            else if(check>0){
                check++;
                if(check==p){
                    check = 0 ;
                }
            }
            }
        }
    cout<<count<<endl ;
    }

    return 0 ;
}

