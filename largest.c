//This code check for the maximum number in three inputs
#include<stdio.h>
int main(){
    int num_1,num_2,num_3;
    printf("Enter your first number:- \n");
    scanf("%d",&num_1);
    printf("Enter your second number:- \n");
    scanf("%d",&num_2);
    printf("Enter your third number:- \n");
    scanf("%d",&num_3);
    if (num_1>num_2 && num_1>num_3){
        printf("The largest number is;- %d \n",num_1);
    }else if(num_2>num_1 && num_2>num_3){
        printf("The Largest number is:- %d \n",num_2);
    } else {
        printf("The Largest Number is;- %d \n",num_3);
    }
   return 0;
}
