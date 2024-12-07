#include<stdio.h>
int main(){
    int distance,abcost,bacost,totalcost,caravg;
    float fuelconsumed;
    printf("Enter the Car Average (KM/litre):-");
    scanf("%d",&caravg);
    distance = 1207;
    abcost = 118;
    bacost = 123;
    totalcost=(distance*118)+(distance*123);
    fuelconsumed=caravg*(2*distance);
    printf("The total fuel cost for the journey is:%d \n",totalcost);
    printf("The total amount of fuel consumed in the journey is:- %f \n",fuelconsumed );
    
    return 0;
}