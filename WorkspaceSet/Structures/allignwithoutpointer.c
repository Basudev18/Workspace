#include<stdio.h>
int main()
{
    int a;
    int b=((int)&a)%(sizeof(a));
    if(b==0)

    {
        printf("alligned memory space");
    }
    else
    {
        printf("unalligned");
    }
}