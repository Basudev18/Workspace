#include <stdio.h>
int main() 
{
    char c;
    printf("Enter C to display uppercase alphabets:\n");
    scanf("%c", &c);
    if (c == 'C') 
    {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } 
    else 
    {
        printf("An invalid character.");
    }

    return 0;
}