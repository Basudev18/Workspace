#include<stdio.h>
#include<string.h>
/*int main()
{
    char s[50];
    printf("Enter the string:");
  gets(s);
  puts(s);
    return 0;
}*/

int main()
{
char str[30];
printf("Input the string:");
fgets(str, sizeof str,stdin);
printf("\n%s",str);
}