#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of int: %zu \n", sizeof(intType));
    printf("Size of float: %zu \n", sizeof(floatType));
    printf("Size of double: %zu \n", sizeof(doubleType));
    printf("Size of char: %zu \n", sizeof(charType));
    return 0;
}