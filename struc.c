#include<stdio.h>
struct student{
    int roll_num;
    char name[50];
    int Age;
};
 void Display(struct student s1){
    printf("You Entered;\n");
    printf("\nRoll Number;-\t%d",s1.roll_num);
    printf("\nStudent Name:-\t%s",s1.name);
    printf("\nStudent Age:-\t%d",s1.Age);

}
void Display(struct student s1);
int main(){
    struct student s1;
    printf("Enter Student Roll Number:-\n");
    scanf("%d",&s1.roll_num);
getchar();
    printf("Enter Student Name:-\n");
    scanf("%[^\n]s",s1.name);
    printf("Enter Student Age:-\n");
    scanf("%d",&s1.Age);    

    Display(s1);
return 0;
}