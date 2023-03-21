#include<stdio.h>
#ifndef NEGATIVE
#define NEGATIVE
#endif
int main()
{
#ifdef POSITIVE
	int a= 10,b=20;
#endif
#ifdef NEGATIVE
int a=-10,b=-20;
#endif
}
