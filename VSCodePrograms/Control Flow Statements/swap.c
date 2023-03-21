#include<stdio.h>
int main()
{
    int b,a;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    printf("Your entered values are, a:%d b=%d\n",a,b);
    if(a>b)
    {
       a=a+b;
       b=a-b;
       a=a-b;
       printf("Swapping succesful, a:%d b=%d\n",a,b);
    }
    else               
    {
       printf("Swapping not done, a:%d b=%d\n",a,b);
    }
}