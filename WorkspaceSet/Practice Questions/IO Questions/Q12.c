#include<stdio.h>
int main()
{
    int x =10;
    {
        extern int x;
        printf("Value of global x is %d\n",x);
    }
    printf("Value of local x is %d\n",x);
}