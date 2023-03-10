#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int *p=a;
    for (int i = 0; i <10; i++)
    {
       printf("value of a= %d from %p \n",a[i],&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d %x\n",*(p+i),(p+i));
    }

}