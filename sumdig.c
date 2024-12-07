//This is the sum of digits (While practice)
#include<stdio.h>
int main(){
    int number,dig,sum;
     printf("Enter Number:- \n");
        scanf("%d",&number);
   sum =0;
while(number!=0){
        dig=number %10;
        sum = sum+dig;
        number=number/10;

    }
    printf("The sum of digits is:- %d \n",sum);
    return 0;
}