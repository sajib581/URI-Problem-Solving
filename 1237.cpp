#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string str1, str2 ;
    getline(cin,str1) ; //This Solution doesn't fulfill the output
    getline(cin,str2) ;

    int count=0 ;
    int str1_size = str1.size() ; //This Solution doesn't fulfill the output
    int str2_size = str2.size() ;

    for(int i=0; i<str1_size; i++){
        for(int j=0; j<str2_size; j++){
            if(str1[i]==' '){
                continue;
            }
            else if(str1[i]==str2[j]){
                count++ ;
                str2[j] = ' ' ;
                break ;
            }
        }
    }
    cout<<count<<endl ;


    return 0 ;
}

