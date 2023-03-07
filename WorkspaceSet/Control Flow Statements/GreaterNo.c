#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("Greater number=%d\n",a);
	else
		printf("Greater number=%d\n",b);
	return 0;
}