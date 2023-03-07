#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    printf("Enter the Value:\n");
    scanf("%d",&a);
    printf("Enter the Value:\n");
    scanf("%d",&b);
    printf("Binary form of a:");
    for(i=7;i>=0;i--)
    { 
        j=(a>>i) & 0x01;
       printf("%d",j);
    }
    printf("\nBinary form of b:");
    for(i=7;i>=0;i--)
    { 
        j=(b>>i) & 0x01;
       printf("%d",j);
    }
    printf("\n%d",c =a&b);
    printf("\n%d",d =a|b);
    printf("\nBinary form of a&b:");
    for(i=7;i>=0;i--)
    { 
        j=(c>>i) & 0x01;
       printf("%d",j);
    }
    printf("\nBinary form of a|b:");
    for(i=7;i>=0;i--)
    { 
        j=(d>>i) & 0x01;
       printf("%d",j);
    }
}