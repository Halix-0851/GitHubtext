#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n=4;
    ptr=(int *)calloc(2,sizeof(int));
    if (ptr==NULL){
        printf("Memory not available in heap!");
    }
    for(int i=0;i<2;i++){
        printf("Enter Number:-\t");
        scanf("%d",ptr+i);
    }
    ptr=(int*)realloc(ptr,4*sizeof(int));
    for (int i=2;i<4;i++){
        printf("Enter more numbers:-\n");
        scanf("%d",ptr+i);
    }
    for (int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
        printf("%d\t",(ptr+i));

    }
    free(ptr);
    ptr=NULL;
}