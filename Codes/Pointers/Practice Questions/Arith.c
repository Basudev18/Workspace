#include<stdio.h>
int add(int *,int*);
int sub(int *,int*);
int mul(int *,int*);
int div(int *,int*);
int main()
{
    int a=20;
    int b=10;
    printf("Addition of a and b is:%d",add(&a,&b));
     printf("Subtraction of a and b is:%d",sub(&a,&b));
      printf("Multiplication of a and b is:%d",mul(&a,&b));
       printf("Division of a and b is:%d",div(&a,&b));
}
int add(int *x,int *y)
{
    return *x + *y;
}
int sub(int *x,int *y)
{
    return *x - *y;
}
int mul(int *x,int *y)
{
    return *x * *y;
}
int div(int *x,int *y)
{
    return *x / *y;
}