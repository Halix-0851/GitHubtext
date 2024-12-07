/*This is Lab 07 Task 05*/
#include<stdio.h>
int main(){
    int temperature[7];
    int ET=0,sum=0;
    float avg=0;
    for ( int i=0;i<7;i++){
    printf("Enter temperature:-\t");
    scanf("%d",&temperature[i]);
    sum =sum+temperature[i];
    } 
    for (int i = 0; i < 7; i++) {
        if (temperature[i] > 40 || temperature[i] < 0) {
            ET = i+1; 
    }
    }
    avg=sum/7;
    printf("Average Temperature: %f,Extreme Temperatures on day %d",avg,ET);
    return 0;
}