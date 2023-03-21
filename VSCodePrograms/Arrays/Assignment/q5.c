#include<stdio.h>
int main()
{
    int n,a[20],max=0,sum=0,min=a[0];
    printf("enter length:\n");
    scanf("%d",&n);
    printf("enter elements of a");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Sum of elements is %d\n",sum);
    printf("Average of elements is %.2f\n",(float)sum/n);
    printf("Greatest element is %d\n",max);
    printf("Smallest element is %d\n",min);
}