#include<stdio.h>
int main()
{
    int a=100;
    int *p=&a;
    p+=5;
    printf("%u %u\n",a,p);
}