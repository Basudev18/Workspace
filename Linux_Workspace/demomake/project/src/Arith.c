#include<stdio.h>
int add(int,int);
int sub(int,int);
int main()
{
	int a=10,b=20,c,d;
	c=add(a,b);
	d=sub(a,b);
	printf("%d\t",c);
	printf("%d\t\n",d);
}
