#include<stdio.h>
int add();
int sub();
float pro();
float div();
int main()
{
        printf("addition of two numbers:%d\n",add(30,10));
        printf("Subtraction of two numbers:%d\n",sub(30,10));
        printf("Multiplication of two numbers:%d\n",pro(30,10));
        printf("Division of two numbers:%d\n",div(30,10));
        return 0;
}
int add(int a,int b)
{
        return a+b;
}
int sub(int a,int b)
{
        return a-b;
}
float pro(int a,int b)
{
        return a/b;
}
float div(int a,int b)
{
        return a/b;
}
