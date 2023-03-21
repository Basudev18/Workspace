#include<stdio.h>
#define MAX 10
#define MIN -20
int main()
{
#if MAX
#ifdef MIN
#if (MAX>0&&MIN>0)
	printf("Positive Number");
#else
	printf("Negative Number");
#endif
#else
	printf("MIN not defined");
#endif
#else
	printf("MAX not defined");
#endif
}

