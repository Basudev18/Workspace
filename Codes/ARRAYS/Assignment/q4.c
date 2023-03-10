#include<stdio.h>
int main()
{
    int n=5,a[5];
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("odd numbers= ");
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
        {
            printf(" %d",a[i]);
        }
    }
}