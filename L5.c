#include<stdio.h>
int main(){
    int Age;
    printf("Enter your age:-\n");
    scanf("%d",&Age);
    if(Age>0){
        if(Age>=1 && Age<=12){
            printf("You are a child\n");
        }else if(Age>=13 && Age<=19){
            printf("you are a teenage\n");
        }else if(Age>=20 && Age <=59){
            printf("you are an adult\n");
        }else{
            printf("You are a senior\n");
        }
        }
        return 0;
                }