#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    string a,b,c ;
    cin>>a>>b>>c ;
    if(a[0]=='v'){
        if(b[0]=='a'){
            if(c[0]=='c'){
                cout<<"aguia"<<endl ;
            }
            if(c[0]=='o'){
                cout<<"pomba"<<endl ;
            }
        }
        else if(b[0]=='m'){
            if(c[0]=='o'){
                cout<<"homem"<<endl ;
            }
            if(c[0]=='h'){
                cout<<"vaca"<<endl ;
            }
        }
    }
    else if(a[0]=='i'){
        if(b[0]=='i'){
            if(c[2]=='m'){
                cout<<"pulga"<<endl ;
            }
            if(c[2]=='r'){
                cout<<"lagarta"<<endl ;
            }
        }
        else if(b[0]=='a'){
            if(c[0]=='h'){
                cout<<"sanguessuga"<<endl ;
            }
            if(c[0]=='o'){
                cout<<"minhoca"<<endl ;
            }
        }
    }

    return 0 ;
}

