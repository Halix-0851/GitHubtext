//Lab Task 08
#include<stdio.h>
int main(){
    int i;
    for (i=65;i<=69;i++){
        if(i==65){
        printf("%c %c %c %c %c \n",i,i+1,i+2,i+3,i+4);
        }else if(i==66){
            printf(" %c  %c \n",i+1,i+4);
        }else if(i==67){
            printf("  %c  \n",i+2);
        }else if(i==68){
            printf(" %c %c \n",i+1,i+4);

    }else if(i==69){
        printf("%c %c %c %c %c\n",i,i+1,i+2,i+3,i+4);
    }
    }
    return 0;
}
