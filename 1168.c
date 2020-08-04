
#include<stdio.h>
#include<string.h>

int main(){
    char num[50] ;
    scanf("%s",num) ;
    int length = strlen(num) ;
    for(int i=0; i<length;i++){
        char n=num[i] ;
        printf("%c\n",n) ;
        if(n == "a"){
            printf("hello") ;
        }
    }
    return 0 ;
}

