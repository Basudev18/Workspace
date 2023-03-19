#include<stdio.h>
int main()
{
    enum exp{
        val1=10,
        val2=20,
        val3=30,
    };
    enum exp e;
    e=val1;
    printf("Value of val1=%d\n",e);
    e=val2;
    printf("Value of val1=%d\n",e);
    e=val3;
    printf("Value of val1=%d\n",e);
    return 0;
}