// The program explains Arithmatic operations usage opeartors - +,-,*,/,%
// syntax - a + b

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b;
    int mod = a % b;
    printf("the Additon is: %d\n", sum);
    printf("the Subtraction: %d\n", sub);
    printf("the Multi: %d\n", multi);
    printf("the Div: %d\n", div);
    printf("the Mod: %d\n", mod);
    return 0;
}