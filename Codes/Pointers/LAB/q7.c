#include <stdio.h>
void Fact(int,int*);
int main()
{
         int fact;
         int n;
		printf(" Input a number : ");
		scanf("%d",&n);		 
         Fact(n,&fact);
         printf("Factorial is : %d \n",fact);
         return 0;
        }
void Fact(int n,int *f)
		{
        int i;
       *f =1;
       for(i=1;i<=n;i++)
       *f=*f*i;
       }