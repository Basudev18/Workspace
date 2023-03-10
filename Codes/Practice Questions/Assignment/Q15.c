#include<stdio.h>
int main()
{
	int num,r,s,temp;
	printf("Enter the number: \n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		r=num%10;
		s=s+(r*r*r);
		num=num/10;
	}
	if(temp==s)
		printf("Amstrong Number");
	else
		printf("Not an Amstrong Number");
	return 0;
}
