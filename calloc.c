#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int arr[n];
    printf("Enter Number of elements to enter:-\n");
    scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int));
    if (ptr==NULL){
        printf("Memory Not available");
        exit(1);
    }
for(int i=0;i<n;i++){
    printf("Enter Array Element:-\n");
    scanf("%d",ptr+i);
}
for(int i=0;i<n;i++){
    printf("\n\t%d\n\t",*(ptr+i));
}
free(ptr);
ptr=NULL;
return 0;
}