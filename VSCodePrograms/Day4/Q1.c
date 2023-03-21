#include<stdio.h>
int main()
{
    int n;
    printf("Enter a 4 digit number\n");
    scanf("%d", &n);
    float i;
    i=(((n+8)/3)%5)*5;
    printf("%f\n",i);
    return 0;
}