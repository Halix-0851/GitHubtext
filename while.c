//This is practics for while statement 
#include<stdio.h>
int main(){
    int n,p,count;
    float r,si;
    count =1;
    while(count<=3){
        printf("\nEnter values of n,p,r;-\n");
        scanf("%d %d %f",&n,&p,&r);
        si=n*p*r/100;
        printf("The Calculated simple interest is:- Rs.%f",si);
        count =count+1;
    }
    return 0;
}