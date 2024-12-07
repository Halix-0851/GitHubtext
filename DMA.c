#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr=(int*)malloc(3*sizeof(*ptr));
	for(int i=0;i<5;i++){
	printf("Enter Array Element %d :-\n",i);
	scanf("%d",&ptr[i]);
}for(int i=0;i<5;i++){
	printf("%d\n",ptr[i]);
}
free(ptr);
}

	
	
