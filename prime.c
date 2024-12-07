#include<stdio.h>
int main(){
    int n,i,count=0;
     int a = 0, b = 1, nextTerm;
    printf("Enter Number;-\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n % i ==0){
            count = count + 1;
        }
    }if(count ==2){
        printf("The number is Prime\n");
        printf("Fibonacci sequence up to %d:\n", n);
    
    printf("%d ", a);

    while (b <= n) {
        printf("%d ", b);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
        }else{
            printf("The number is not prime\n");
        }
        return 0;  
}


