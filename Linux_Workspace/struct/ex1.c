#include<stdio.h>
#include<string.h>
#pragma pack(1)
struct emp
{
    int empno;
    char ename;
    double sal;
}e={10,20.14,'A'};

int main()
{
    printf("%d\n",sizeof(e));
    printf("%d\t %d\t %d\t %d\t ",&e,&e.empno,&e.ename,&e.sal);
}
