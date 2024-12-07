#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter Number of elements to enter:-\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        printf("Enter Number:-\t");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("\n\t%d\n\t",*(ptr+i));
    }
}