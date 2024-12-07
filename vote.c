//This code will output Vote Eligibility and years to wait to be elligible to Vote
#include<stdio.h>
int main(){
    int age,ywait; //ywait is  variable defining the years left before voting
    printf("Enter your Age;- \n");
    scanf("%d",&age);
    if (age<18){
        printf("You are not elligible for voting \n");
        ywait = 18 - age;
        printf("You have to wait for %d years ",ywait );
    }else {
        printf("You are elligible to vote");
    }
return 0;
}