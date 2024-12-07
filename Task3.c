#include<stdio.h>
int main(){
    int salary,taxrate,remsalary=0;
    float taxpay=0;
    printf("Enter Employee Salary:");
    scanf("%d",&salary);
    printf("Enter Tax Rate (enter in percentage)");
    scanf("%d",&taxrate);
    taxpay = salary*(taxrate*0.01);
    printf("The amount of tax to be paid by Employee is;- %f \n",taxpay);
    remsalary= salary - taxpay;
    printf("The Remaining Salary of the employee after Tax deduction is:- %d \n",remsalary );

    
 return 0;
}