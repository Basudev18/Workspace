#include<stdio.h>
int main()
{
    int a=3;
    float b=4.0;
    char c='c';
   // char *x=&a;
  //  printf("%d",*x);
    void *y=&a;
    printf("a=%d\n",*(int*)y);
    y=&b;
    printf("b=%f\n",*(float*)y);
    y=&c;
    printf("c=%c\n",*(char*)y);
}
   /*int a=3, *p=&a;
   printf("a=%d\n",*p);
   *p++;
   printf("a=%d\n",*p);
   printf("add a=%x\n",p);
   p++;
   printf("add a=%x\n",p);*/

