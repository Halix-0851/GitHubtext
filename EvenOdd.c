//This Code checks if a number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter Number:- \n");
    scanf("%d",&num);
    if (num==0){
        printf("You entered 0 \n");
    }
    else{
    if (num % 2==0){
        printf("The number you have entered is EVEN \n");
    }else if(num %2 !=0){
        printf("The number you have entered is ODD \n");
    }
    }
    return 0;
}
