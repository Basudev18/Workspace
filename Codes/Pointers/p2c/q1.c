#include<stdio.h>
int add(int a,int b)
{
    return a + b;
}
int sub(int a,int b)
{
    return a -b;
}
int mul(int a,int b)
{
    return a * b;
}
int div(int a,int b)
{
    return a/b;
}
int (*func)(int,int);
int main()
{
    char c;
    int a,b,result;
    printf("Enter an operator");
    scanf("%c",&c);
    switch (c)
    {
    case '+':func=&add;
            result=(*func)(20,10);
            printf("sum=%d\n",result);
            break;
    case '-':func=&sub;
             result=(*func)(20,10);
             printf("diff=%d\n",result);
             break;
    case '*':func=&mul;
             result=(*func)(20,10);
             printf("product=%d\n",result);
             break;

    case '/':func=&div;
             result=(*func)(20,10);
             printf("div=%d\n",result);
             break;
    default: printf("invalid operator");
             break;
    }
}