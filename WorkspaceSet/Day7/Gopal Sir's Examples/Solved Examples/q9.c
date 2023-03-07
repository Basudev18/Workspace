#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the required multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=100;++i)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}