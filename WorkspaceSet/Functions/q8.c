#include<stdio.h>
int main()
{
    register int a=1;
    for(a=1;a<=10;a++)
    {
        printf("%d\t",&a);
    }
    return 0;
}