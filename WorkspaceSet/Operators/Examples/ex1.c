#include<stdio.h>
int main()
{
    int a,b,great;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a,&b);
    great=a>b?a:b;
    printf("\nGreatest number:%d",great);
    return 0;
}