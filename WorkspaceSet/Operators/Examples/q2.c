#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The Number is even",n);
    }
    else
    {
        printf("The Number is odd",n);
    }
    return 0;
}