#include<stdio.h>
int reg(int a)
{
    printf("%d\t",a);
}
int main()
{
    int a=1,address = 79;
    //reg(a);
    printf("Address:%d\n",&address);
    return 0;
}