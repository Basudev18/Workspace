#include<stdio.h>
#include<math.h>
int main()
{
   int b,n,res;
   printf("Enter the base value:\n");
   scanf("%d",&b);
   printf("Enter the power value:\n");
   scanf("%d",&n);
   res=pow(b,n);
   printf("%d to the power %d is %d",b,n,res);
   return 0;
}