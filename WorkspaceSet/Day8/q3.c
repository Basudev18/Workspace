#include<stdio.h>
double cube(double n);
int main()
{
   int n;
   double cu;
   printf("Enter any number:");
   scanf("%d",&n);
   cu = cube(n);
   printf("Cube of the number %d:%f",n,cu);
   return 0;
}
double cube(double n)
{
    return (n * n *n);
}