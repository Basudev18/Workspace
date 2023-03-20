#include<stdio.h>
void add();
#define ADDITION() add()
int main()
{
   ADDITION();
}
void add()
{
	printf("Sum=%d"10+20);
}
