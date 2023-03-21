#include<stdio.h>
int main()
{
    int n,a[20],max=0,min=a[0];
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Greatest element is %d\n",max);
    printf("Smallest element is %d\n",min);
}