#include<stdio.h>
int main()
{
    int a;
    int *p=&a;
    if((*p)%(sizeof(a))==0)
    {
        printf("alligned memory space");
    }
    else
    {
        printf("unalligned");
    }

}