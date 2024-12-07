/*this is a practice for loop code*/
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter Number:-\n");
    scanf("%d",&n);
    for(i=n;i!=0;i--){
        sum=sum+i;

    }
    printf("The sum of natural numbers till %d is %d:-\n",n,sum);
    return 0;
}