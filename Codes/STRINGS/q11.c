#include <stdio.h>
#include <string.h>
void main()
{
  char str[100],temp;
  int i,j,k; 
  printf("Input the string : ");
  fgets(str, sizeof str, stdin);
  k=strlen(str);
  for(i=1;i<k;i++)
    for(j=0;j<k-i;j++)
	if(str[j]>str[j+1])
	{
	  temp=str[j];
	  str[j] = str[j+1];
	  str[j+1]=temp;
	}
   printf("After sorting the string appears like : \n");
   printf("%s\n",str);
  }