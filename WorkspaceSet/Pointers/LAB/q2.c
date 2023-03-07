#include<stdio.h>
int addition(int *, int *);
int main()
{
   int m, n, sum;   
   printf(" Input the first number : ");
   scanf("%d", &m);
   printf(" Input the second  number : ");
   scanf("%d", &n);   
   sum = addition(&m, &n);
   printf(" The sum is %d\n", sum);
   return 0;
}
int addition(int *n1, int *n2) 
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}