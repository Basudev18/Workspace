#include<stdio.h>
int main()
{
    double a, b, temp;
    printf("Enter Value of a:\n");
    scanf("%lf",&a);
    printf("\nEnter Value of b:");
    scanf("%lf",&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping: a= %.2f b= %.2f",a,b);
    return 0;
}