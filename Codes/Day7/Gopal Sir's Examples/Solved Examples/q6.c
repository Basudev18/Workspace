#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("It is an alphabet",c);
    else
    printf("It is not an alphabet");
    return 0;
}