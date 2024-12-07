/*This code makes use of Array Task 08*/
#include<stdio.h>
int main(){
    int max,min;
    int numbers[10]={4,1,6,8,10,21,8,9,2,6};
    max=-1;
    min=10000000;
    for (int i=0;i<10;i++){
        if (numbers[i]>max){
            max=numbers[i];
        }if (numbers[i]<min){
            min=numbers[i];
        }
    }
    printf("The Maximum number is:- %d\n",max);
    printf("The minimum number is:-  %d\n",min);
return 0;
}