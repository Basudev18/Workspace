#include<stdio.h>
#include<string.h>

struct dept
{
    char dept[10];
}empdept;


struct employee
{
    int empno;
    float sal;
    char ename[20];
    struct dept empdept;
}e1;

int main()
{
    e1.empno=1;
    strcpy(e1.ename,"Alex");
    e1.sal=1000;
    strcpy(e1.empdept.dept,"MECH");

    printf("Employee no=%d \n name=%s \n salary=%.2f \n %s",e1.empno,e1.ename,e1.sal,e1.empdept.dept);
}