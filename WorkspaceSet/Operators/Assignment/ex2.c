// lvalue = lvalue = lvalue = expression

#include<stdio.h>
int main()
{
    int a=2, b=3, c=4;
    a = b+(c*=4);
    printf("Value of a :%d",a);
    printf("Value of b :%d",b);
    printf("Value of c :%d",c);
}