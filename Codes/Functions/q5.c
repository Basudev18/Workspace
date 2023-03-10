#include<stdio.h>
static int a=10;
int main()
{
    { 
       static int a=20;
    printf("%d",a);
    }
    {
       static int a=30;
        printf("%d",a);
    }
    {
    static int a=40;
    printf("%d",a);
    }
    {
        printf("%d",a);
    }
}