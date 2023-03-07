#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter a value for arr[%d]:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum=%d",sum);
    return 0;
}