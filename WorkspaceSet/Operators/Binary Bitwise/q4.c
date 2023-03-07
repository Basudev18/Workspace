#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter the Value:\n");
    scanf("%d",&a);
    printf("Binary form of a given number:");
    for(i=7;i>=0;i--)
    { 
        j=(a>>i) & 0x1;
       printf("%d",j);
        printf("position :%d\n",i);
        printf("binary value :%d\n",j);
    }
   // {
   //     j=(a>>i) & 0x1;
     //   printf("%d",j);
       // printf("position :%d\n",i);
        //printf("binary value :%d\n",j);32
    //}
    return 0;
}