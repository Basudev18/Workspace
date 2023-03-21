#include<stdio.h>
int main()
{

int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
if(a<50 && a<b)
{
    printf("It is true");
}
else
{
    printf("It is false");
}
return 0;
}