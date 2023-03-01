#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(sizeof(n%5==0))
    {
        printf("Expression is true",n);
    }
    else
    {
        printf("Expression is false",n);
    }
    return 0;
}
