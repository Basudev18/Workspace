#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two values:\n",a,b);
    scanf("%d %d",&a,&b);
    if(a == b)
    {
        printf("Values are same\n");
    }
    else if(a < b)
    {
        printf("a is less than b\n");
    }
    else if(a > b)
    {
        printf("a is greater than b\n");
    }
    else if(a >= b)
    {
        printf("a may be greater than or equal to b\n");
    }
    else if(a <= b)
    {
        printf("a may be less than or equal to b\n");
    }
    else(a != b);
    {
        printf("a and b are not equal\n");
    }
    return 0;
}