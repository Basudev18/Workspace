#include<stdio.h>
void power(int,int,int);
void main()
{
    int a,b,c;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    power(a,b,c);
}
void power(int a,int b,int c)
{
    int res = 1,i;
    for(i=1;i<=(b+c);i++)
    {
        res *=a;
    }
    printf("%d^(%d + %d)=%d",a,b,c,res);
}