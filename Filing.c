#include<stdio.h>
/*int main(){
	char ch;
FILE *fpt;
fpt=fopen("Text.txt","r");
while(1){
	ch=fgetc(fpt);
	if (ch== EOF){
	break;
	}
	printf("%c",ch);
}
fclose(fpt);


return 0;
}*/
/*
main(){
	FILE *f1;
	FILE *f2;
	char ch;
	f1=fopen("Text1.txt","r");
	if (f1==NULL){
		puts("Error Opening File");
		exit(1);
	}
	f2=fopen("Text.txt","w");
		if (f2==NULL){
		puts("Error Opening File");
		exit(1);
	}
	while(1){
		ch=fgetc(f1);
		if(ch==EOF){
			break;
		}
		fputc(ch,f2);
	}
	fclose(f1);
	fclose(f2);
}*/
/*
#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr;
	char ch[100];
	ptr=fopen("NationalAnthem.txt","w");
	if(ptr == NULL){
		printf("Error Opening file!\n");
}
	fprintf(ptr,"%s","I AM YOUR NATIONAL ANTHEM!");
 fclose(ptr);
 return 0;
 }*/
 /*#include<stdio.h>
 int main(){
 	char ch[100];
 	FILE *ptr;
 	FILE *ptr1;
 	ptr=fopen("NationalAnthem.txt","r");
 	if (ptr==NULL){
 		printf("error opening file!\n");
 		exit(1);
	 }
	 ptr1=fopen("Text1.txt","a");
	 	if (ptr1==NULL){
 		printf("error opening file!\n");
 		exit(1);
	 }
	 while(1){
	 	ch[100]=fgetc(ptr);
	 	if (ch!=EOF){
		 fputc(ch,ptr1);
		 }
		 break;

	 	
	 }
	  fclose(ptr);
	 fclose(ptr1);
 	
 	
 	
 	
 	return 0;
 }*/
/* #include<stdio.h>
 void main(){
 	FILE *ptr;
 	char ch;
 	
 	ptr=fopen("Text.txt","r");
 	if (ptr==NULL){
 		printf("Error Opening File\n");
	 }
 while(1){
 	ch=fgetc(ptr);
 	if(ch==EOF){
 		break;
	 }
	  printf("%c",ch);
 }
fclose(ptr);
 
}*/

 
 
 
 
 
 
 
 
 
 
 