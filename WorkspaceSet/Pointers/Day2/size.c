#include<stdio.h>
int main()
{
    int a=3;
    int *p=&a;
    float b=4.0;
    float *q=&b;
    char c='c';
    char *x=&c;
   
   printf("int-%x\n",sizeof(*p));
   printf("float-%x\n",sizeof(*q));
   printf("char%x\n",sizeof(*x));
   printf("int-%x\n",sizeof(p));
   printf("float-%x\n",sizeof(q));
   printf("char%x\n",sizeof( x));
}