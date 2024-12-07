/*#include<stdio.h>
void main(){
	FILE *fp;
	fp=fopen("Text.txt","r");
	char ch;
	int noc,nos,nol,numot=0;
	if (fp==NULL){
		printf("Error! Opening File");
	}
	while(1){
		ch=fgetc(fp);
		if (ch==EOF){
			break;
		}
		noc++;
		if (ch=='\n'){
			nol++;
		}
		if (ch=='\t'){
			numot++;
		}
		if (ch==' '){
			nos++;
		}
		
	}
	printf("Number of lines:- %d\n",nol);
	printf("\nNumber of spaces:- %d\n",nos);
	printf("Number of characters:- %d\n",noc);
	printf("Number of tabs:- %d\n",numot);
	fclose(fp);
}*/
#include<stdio.h>
void main(){
	FILE *fp;
	char str[100];
	fp=fopen("Faria.txt","w");
	printf("File Created! and Data Stored!");
	str[100]=fputs("My name is Faria and I am dumb",fp);
fclose(fp);
}
