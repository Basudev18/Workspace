#include<stdio.h>
int main()
{
    int n,a[20],num;
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched:\n");
    scanf("%d",&num);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==num)
        {
            printf("Number is at index %d\t",i+1);
            break;
        }
    }
}