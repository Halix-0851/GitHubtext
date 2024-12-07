//Pattern *
#include<stdio.h>
int main(){
    int i=0;
    for (i=1;i<=6;i++){
        if(i==1 || i==6){
            printf("*       *");
        }else{
            printf("* * * * *\n");
        }
    }
    return 0;
    }