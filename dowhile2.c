/*This code reverses the number using do while*/
#include<stdio.h>
int main(){
    int num=0,r_num,rem;
    printf("Enter Number:-\t");
    scanf("%d",&num);
    r_num=0;
    do{
        rem=num % 10;
        r_num=r_num*10 + rem;
        num=num/10;
    }while(num!=0);
    printf ("The reversed number of is %d",r_num);
    return 0;
    }