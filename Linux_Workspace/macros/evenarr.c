#include<stdio.h>
#define MAX 4
#define EVENS 2,\
4,\
6,\
8
#define NEWLINE printf("\n")
int main()
{
	int even_array={EVENS},i;
	for (i=0;i<MAX;i++)
		printf("%d"even_array[i]);
         NEWLINE
}
