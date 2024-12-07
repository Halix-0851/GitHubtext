//This cod checks if a triangle is valid and what type is it?
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the length of the side of the triangle:-\n");
    scanf("%d",&s1);
    printf("Enter the length of the side of the triangle:-\n");
    scanf("%d",&s2);
    printf("Enter the length of the side of the triangle:-\n");
    scanf("%d",&s3);
    if ((s1+s2)>s3){
        if(s1==s2 && s1==s3 ){
            printf("This is an Equilateral Triangle\n");
        }else if(s1 ==s2 || s2==s3 || s1==s3){
            printf("This is an isosceles triangle\n");
        }else {
            printf("This is a Scalene Triangle\n");
        }
    }else{
        printf("This is an invalide Triangle");
    }
    return 0;
}