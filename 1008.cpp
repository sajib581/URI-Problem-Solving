#include<iostream>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);

    int number,working_time ;
    float rate,SALARY ;

    cin>>number>>working_time>>rate ;

    cout<<"NUMBER = "<<number<<endl ;
    SALARY = rate * working_time  ;
    printf("SALARY = U$ %.2f\n",SALARY) ;

    return 0 ;
}

