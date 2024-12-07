#include<stdio.h>
int main(){
    int temp;
    printf("Enter the Temperature:-\n");
    scanf("%d",&temp);
    if (temp>=30){
        if(temp>=40){
            printf("very hot outside\n");
        }else{
            printf("hot outside\n");
        }
    }else if(temp>=20 && temp<30){
        printf("Warm outside\n");
    }else if(temp>=10 && temp<20){
        printf("Cool outside\n");
    }else{
        printf("Very cold outside\n");
    }
    return 0;
}