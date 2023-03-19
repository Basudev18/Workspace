#include<stdio.h>
int add(int *,int*);
int main()
{
    int a=2;
    int b=3;
    printf("Sum of a and b is:%d",add(&a,&b));
}
int add(int *a,int *b)
{
    return *a +*b;
}