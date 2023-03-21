#include<stdio.h>
#define BIG(x,y) (x,y)?x:y
int main()
{
	int a=5,b=7,result;
	char x='A',y='Z';
	float u=6.8,v=6.4;
	printf("%d",BIG(a,b));
	printf("%c",BIG(x,y));
	printf("%f",BIG(u,v));

}
