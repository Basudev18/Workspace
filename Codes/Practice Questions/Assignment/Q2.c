#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("\n Enter any No.:");
	scanf("%d",&num);
	printf("%d \n",num);
	while(num>0)
	{
		rem= num%10;
		rev= rev*10+rem;
		num/=10;
	}
	printf("%d \n",rev);
	return 0;
}
