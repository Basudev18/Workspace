#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=5,b=4;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}