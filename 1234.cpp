#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string text ;
    while(getline(cin,text)){
    int length = text.size() ;
    int test = 1 ;
    for(int i=0; i<length;i++)
    {
        if((text[i]>='a'&&text[i]<='z')||(text[i]>='A'&&text[i]<='Z')){
            if(test%2==0&&(text[i]>='A'&&text[i]<='Z')){
                text[i] = 'a'+(text[i]-'A')  ;
                test++ ;
            }
            else if(test%2==1&&(text[i]>='a'&&text[i]<='z')){
                text[i] = 'A'+(text[i]-'a')  ;
                test++ ;
            }
            else{
                test++ ;
            }
        }
        }
        if(length!=0){
            cout<<text<<endl ;
        }

    }


    return 0 ;
}

