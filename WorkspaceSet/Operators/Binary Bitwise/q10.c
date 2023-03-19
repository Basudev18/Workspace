#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter the Value:\n");
    scanf("%d",&a);
    printf("Binary form of a given number:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        printf("Binary Value: %d",j);
    }
    a=~a;
    printf("1's Compliment form of a given number:\n");
    for(i=7;i>=0;i--)
    {
        j=(a>>i) & 0x1;
        printf("Binary Value: %d\n",j);
    }
    return 0;
}