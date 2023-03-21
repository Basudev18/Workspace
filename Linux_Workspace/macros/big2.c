#include<stdio.h>
#define BIG(x,y) (x,y)?x:y
int main()
{
	int a,b,c;
	printf("3 integers");
	scanf("%d%d%d\n",&a,&b,&c);
	printf("Integers %d\n",BIG(BIG(a,b),c));
}
