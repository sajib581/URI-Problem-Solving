#include<bits/stdc++.h>

using namespace std ;

int main(){

    string str ;

    while(getline(cin,str)){
        int len = str.size() ;
    for(int i=0;i<len;i++){
        if(str[i]+0>=97&&str[i]<=122){

            if(str[i]+13>122){
                char a = str[i] + 13-26 ;
                cout<<a ;
            }
            else{
                char a = str[i] + 13 ;
                cout<<a ;
            }
        }
        else if(str[i]+0>=65&&str[i]+0<=90){

            if(str[i]+13>90){
                char a = str[i] + 13-26 ;
                cout<<a ;
            }
            else{
                char a = str[i] + 13 ;
                cout<<a ;
            }
        }
        else{
            cout<<str[i] ;
        }
    }
    cout<<endl;
    }


    return 0 ;
}

