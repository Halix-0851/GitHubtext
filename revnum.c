//This is the reverse number code:
#include<stdio.h>
int main(){
    int num,rnum=0,rem;
    printf("Enter Number:-\n");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        rnum=rnum*10+rem;
        num=num/10;
    }
    printf("The reversed number is:- %d\n",rnum);
}