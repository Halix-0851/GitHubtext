//This code checks if a year is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter Year:- \n");
    scanf("%d",&year);
    if (year % 4 ==0 && year % 100 !=0){
    printf("This is a leap year");
}else if(year % 400 ==0){
    printf("This is a leap year");
}else{
    printf("This is not a leap year");
}
return 0;
}
