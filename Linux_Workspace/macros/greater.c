#include<stdio.h>
#define INTEGER int
#define CONDITION if
int main()
{
	INTEGER a=10,b=20;
	CONDITION(a>b)
	{
		printf("A is greater");
	}
	else
		printf("B is greater");
}
