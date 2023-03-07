#include<stdio.h>
int si(int p, int r,int t)
{
    int s;
    s=(p*t*r)/100;
    return s;
}
int main()
{
    int a,b,c,interest;
    printf("Enter the principal amount:\n");
    scanf("%d",&a);
    printf("Enter the year:\n");
    scanf("%d",&b);
    printf("Enter the rate:\n");
    scanf("%d",&c);
    interest= si(a,b,c);
      printf("Simple Interest is:%d\n",interest);
}