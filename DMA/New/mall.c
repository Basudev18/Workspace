#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p,n=2;
	p=(int *) malloc(n*sizeof(int));
	printf("%x",p);
	for(i=0;i<n;i++)
	{
	printf("%d",p[i]);
	}
	getchar();
}
