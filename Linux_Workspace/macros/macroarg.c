#include<stdio.h>
void check(int);
#define EVEN(n) check(n) 
int main()
{
   int a;
   printf("Enter the integer");
   scanf("%d",&a);
   EVEN(a);
}
void check(int x)
{
	printf(" %s",(x%2==0)? "EVEN NUMBER": "ODD NUMBER");
}
