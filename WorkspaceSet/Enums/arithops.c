#include<stdio.h>
int main()
{
    int ch;
    int a=10,b=5;
    enum{add=1,sub=2,mul=3,div=4,square=5};
    printf("\n\n1-Add\n2-Subtraction\n3-Multiplication\n4-Division\n5-Square\n\nEnter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case add:
        printf("Addition=%d",a+b);
        break;
    case sub:
        printf("Subtaction=%d",a-b);
        break;
    case mul:
        printf("Multiplication=%d",a*b);
        break;
    case div:
        printf("Division=%d",a/b);
        break;
    case square:
        printf("Square of a=%db=%d",a*a,b*b);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}