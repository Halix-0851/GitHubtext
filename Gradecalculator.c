//This Code is for a grade Calculator:-
#include<stdio.h>
int main(){
    int marks;
    printf("Enter Your Marks:- \n");
    scanf("%d",&marks);
    if(marks>=90 && marks <=100){
        printf("Your Grade is:A \n");
    }else if(marks >=80 && marks<=89){
        printf("Your Grade is B \n");
    }else if(marks >=70 && marks<=79){
        printf("Your Grade is C \n");
    }else if(marks >=60 && marks<=69){
        printf("Your Grade is D \n");
    }else{
        printf("Your Grade is F \n");
    }
return 0;
}