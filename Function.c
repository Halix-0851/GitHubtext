//Functions
/*#include<stdio.h>
void USA(){
    printf("\nI am in USA");
}
int main(){
    void USA();
printf("I am in Main\n");
 USA();
 
    return 0;
}*/
/*#include<stdio.h>
int sum(int n1,int n2){
    return (n1+n2);
}
int main(){
    int sum(int n1,int n2);
    int num1,num2;
    printf("Enter Number_1:-\n");
    scanf("%d",&num1);
    printf("Enter Number_2:-\n");
    scanf("%d",&num2);
    printf("%d",sum(num1,num2));
}
*/
/*#include<stdio.h>
int main(){
    void calc( int r, float *a,float *p);
    float area,peri;
    int radius;
    printf("\nEnter Radius:-\n");
    scanf("%d",&radius);
    calc(radius,&area,&peri);  
    printf("\nArea of Circle:\n%f",area);
    printf("\nPerimeter of Circle:\n%f",peri);
    return 0;

}
void calc(int r,float *a,float *p){
    *a=(3.14*r*r);
    *p=(2*3.14*r);

}*/
//RECURSION:-
/*#include<stdio.h>
int main(){
    int factorial(int n);
    int num;
 printf("Enter the Number:-\n");
 scanf("%d",&num);
 printf("%d",factorial(num));
    return 0;
}
int factorial(int n){
    int ans=0;
    if (n==1){
    return 1;
    }
    else{
        ans=n*factorial(n-1);
        return ans;
    }
}*/
#include<stdio.h>
struct student{
    int roll_num;
    char name[40];
    int marks;

};
int main(){
    int i;
    struct student s[i];
    for(i=0;i<5;i++){
    printf("Enter Student Roll Number:-\n");
    scanf("%d",&s[i].roll_num);
    printf("Enter Student Name:\n");
    scanf("%s",s[i].name);
    printf("Enter Student marks;-\n");
    scanf("%d",&s[i].marks);
    }
    for(i=0;i<5;i++){
    printf("DISPLAY:\n");
    printf("\nStudent Roll Number:-%d",s[i].roll_num);
    printf("\nStudent Name:- %s",s[i].name);
    printf("\nStudent Marks:- %d",s[i].marks);
    }




    return 0;
}

