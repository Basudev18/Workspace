#include<stdio.h>
int main()
{
    int n=10,a[10],s1=0,s2=0;
    printf("enter elements of a");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            s1+=a[i];
        }
        else
        {
            s2+=a[i];
        }
    }
    printf("sum of even numbers=%d,\n sum of odd numbers=%d",s1,s2);
}