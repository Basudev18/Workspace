#include<stdio.h>
int count();
int main()
{
    count();
    count();
    count();
    count();
}
int count()
{
    int count=0,address;
    printf("Address of count:%d %d",address,count);
    count++;
}