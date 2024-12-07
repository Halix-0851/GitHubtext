#include<stdio.h>
int main(){
    int marks;
    printf("Enter your MARKS\n");
    scanf("%d",&marks);
    if (marks>=80){
        if (marks>=90){
            printf("Your Grade is A\n");
        }else if(marks>80 && marks<=89){
            printf("Your Grade is B\n");
        }
    }else if(marks <80){
        if (marks>60 && marks<79){
        printf("YOur Grade is C\n");
        }else{
            printf("Your Grade is F\n");
        }


    }
    return 0;
        }
    