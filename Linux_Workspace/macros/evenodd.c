#include<stdio.h>

#define EVEN(n)\
if(n%2==0){ \
	printf("Even");\
} \
else{ \
	printf("Odd");\
} \
int main()
{
	int a=11;
	EVEN(a);
}
