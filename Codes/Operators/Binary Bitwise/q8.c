#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter the Value:\n");
    scanf("%d",&a);
    printf("Binary form of a given number:");
    int count =0;
    for(i=3;i>=0;i--)
    {   
        j=(a>>i) & 0x01;
       printf("%d",j);
       if(j==1)
       {
        count++;
       }
    }
    printf("No of 1s:%d\n",count);
    return 0;
}