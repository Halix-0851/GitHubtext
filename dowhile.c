/*#include<stdio.h>
int main(){
    int num;
    do{
    printf("Enter your Number:-\n");
    scanf("%d",&num);

}while(num!=10);
return 0;
}*/
#include<stdio.h>
int main(){
    int age;
    while (age<18){
        printf("Enter your age\n");
        scanf("%d",&age);
        printf("Your age is %d \t",age);//"/t" prints the statement with space 
        printf("Your age is \n %d",age); //"/n" prints the age on new line
        printf("\n");
    }
    return 0;
}
