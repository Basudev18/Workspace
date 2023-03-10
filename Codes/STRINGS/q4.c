#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int l,i;
	
       printf("\nPrint individual characters of string in reverse order :\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
	   l=strlen(str);
	   printf("The characters of the string in reverse are : \n");
       for(i=l;i>=0;i--)
        {
          printf("%c", str[i]);
        }
}