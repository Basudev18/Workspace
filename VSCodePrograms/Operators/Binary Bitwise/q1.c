#include<stdio.h>
int binary(int);
int main()
{
    int n,b;
    printf("Enter the number:");
    scanf("%d",&n);
    b=binary(n);
    printf("The binary form is: %d\n",n,b);
}
int binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%2)+10*binary(n/2);
    }
}
