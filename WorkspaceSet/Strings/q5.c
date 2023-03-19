#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100
void main()
{
    char s[str_size];
    int i, w;
       printf("\n\nCount the total number of words in a string :\n");
       printf("Input the string : ");
       fgets(s, sizeof s, stdin);	
    i = 0;
    w = 1;
    while(s[i]!='\0')
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
        {
            w++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d\n", w-1);
}