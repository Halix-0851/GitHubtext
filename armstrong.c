#include<stdio.h>
int main(){
    int number,arm=0,c,r,n;
    printf("Enter any Number:-\n");
    scanf("%d",&n);
    c=n;
    while (n>0){
        r=n %10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if (c==arm){
        printf("The Number is an Armstrong Number\n");
    }else{
        printf("Not an Armstrong number\n");
    }
    return 0;
}