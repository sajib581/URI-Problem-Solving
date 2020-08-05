#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    float a,b,c,d,e;
    double avg,avrg  ;
    cin>>a>>b>>c>>d ;

    avg = (a*2+b*3+c*4+d*1)/(10.0) ;
    cout<<"Media: "<<fixed<<setprecision(1)<<avg<<endl ;
    if(avg>=7.0){
        cout<<"Aluno aprovado."<<endl ;
    }
    else if(avg<5.0){
        cout<<"Aluno reprovado."<<endl ;
    }
    else if(avg>=5.0&&avg<=6.9){
        cout<<"Aluno em exame."<<endl ;
        cin>>e ;
        cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<endl ;
        avrg=(avg+e)/2 ;

    if(avrg>=5.0){
        cout<<"Aluno aprovado."<<endl ;
    }
    else if(avrg<=4.9){
        cout<<"Aluno reprovado."<<endl ;
    }

    cout<<"Media final: "<<fixed<<setprecision(1)<<avrg<<endl ;
    }


    return 0 ;
}

