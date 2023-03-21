#include <stdio.h>
int main() {
	int a;
	printf("Even numbers between 1 to 50 (inclusive):\n");
	for (a = 1; a <= 50; a++) 
	{
		if(a%2 == 0) 
		{
		  printf("%d ", a);
		}
	}
	return 0;
}