#include<stdio.h>
int main()
{
   int b, e;
   long value = 1;
   printf("Enter a base value:");
   scanf("%d", &b);
   printf("Enter an exponent value: ");
   scanf("%d", &e);
   while (e!= 0){
      value *= b;
      --e;
   }
   printf("result = %ld", value);
   return 0;
}