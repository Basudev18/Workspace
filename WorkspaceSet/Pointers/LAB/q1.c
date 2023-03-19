#include <stdio.h>
int main()
{
   int m, n, *p, *q, sum;
   printf("Enter two integers to add\n");
   scanf("%d%d", &m, &n);
   p = &m;
   q = &n;
   sum = *p + *q;
   printf("Sum of the numbers = %d\n", sum);
   return 0;
}