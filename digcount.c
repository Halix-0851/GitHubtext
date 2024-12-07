#include<stdio.h>
int main(){
    int number,count;
    printf("Enter Number:-\n");
    scanf("%d",&number);
    count=0;
    while (number!=0){
        number=number/10;
        count+=1;
    }
    printf("The Number of digits are:-%d\n",count);
    return 0;
}
