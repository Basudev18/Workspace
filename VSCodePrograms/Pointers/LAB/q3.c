#include <stdio.h>
#include <stdlib.h>
void main()
{
 int m,n,*p1=&m,*p2=&n;
   printf(" Input the first number : ");
   scanf("%d", p1);
   printf(" Input the second  number : ");
   scanf("%d", p2); 
 if(*p1>*p2)
 {
  printf("\n %d is the maximum number.\n\n",*p1);
 }
 else
 {
  printf("\n %d is the maximum number.\n\n",*p2);
 }
}