#include<stdio.h>
float count(float *a)
{
   *a++;
    a++;
}
int main()
{
    float f=10;
    printf("f=%f\n",f);
    printf(" add f=%x\n",&f);
    count(&f);
    printf("f=%f\n",f);
    printf("add f=%x\n",&f);
}
