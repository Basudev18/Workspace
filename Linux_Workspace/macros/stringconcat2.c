#include<stdio.h>
#include<string.h>
#define Str(s) #s
#define String_concat(s1,s2) Str(s1 ## s2)
int main()
{
	char name[30]= String_concat(PHYTEC,Embedded);
	printf("%s",name);
}
