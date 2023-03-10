#include<stdio.h>
int main()
{
    int num, sum=0, firstdigit, lastdigit;
    printf("Enter any no.:");
    scanf("%d",&num);
    lastdigit = num%10;
    firstdigit = num;
    while(num>=10)
    {
        num = num/10;
    }
    firstdigit = num;
    sum = firstdigit + lastdigit;
    printf("Sum is:%d",sum);
    return 0;
}