#include <stdio.h>

void main() {
    char Date[] = "2010-12-07";
    int num,num1,num2;
    

    // Use sscanf to first skip the integer and then capture the string
    sscanf(Date,"%d-%d-%d", &num,&num1,&num2);

    // Print the extracted string
    printf("%d",num);
    printf("\n%d",num1);
    printf("\n%d",num2);
}