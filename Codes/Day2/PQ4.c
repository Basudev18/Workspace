#include<stdio.h>
int main()
{
    double W1,P1,W2,P2,result;
    printf("Weight of item1:");
    scanf("%lf",&W1);
    printf("Number of item1:");
    scanf("%lf",&P1);
    printf("Weight of item2:");
    scanf("%lf",&W1);
    printf("Number of item2:");
    scanf("%lf",&P2);
    result= ((W1*P1)+(W2*P2))/(P1*P2);
    printf("Average= %f\n:",result);
    return 0;
}