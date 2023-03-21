#include<stdio.h>
int f(static int);
int main()
{
     int a=2.3;
     f(a);
}
int f(static int a)
{ 
     printf("print a:%d\n",a);
}
