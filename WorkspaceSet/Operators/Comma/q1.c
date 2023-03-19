#include<stdio.h>
int main()
{
    int a,b,c,d;
    a = (b =20,c=40,d=50);
    printf("Value of a: %d",a);
    return 0;
}