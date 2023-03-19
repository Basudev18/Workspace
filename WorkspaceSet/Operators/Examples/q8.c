#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter values of a and b:\n",a,b);
    scanf("%d %d",&a,&b);
    if(a>b)
    {
       temp=a;
       a=b;
       b=temp;
       printf("swapping takes place:%d %d",a,b);
    }
    else
    {
        printf("No Swapping takes place");
    }
}