#include<stdio.h>
#include<string.h>
#define MAX 10
struct employee
{
    int empno;
    float sal;
    char ename[20];
    int *poi;
};

int main()
{
    struct employee emp={10,50000,"Annie"},*poi;
    printf("\nEmployee\n");
    printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",emp.empno,emp.ename,emp.sal);
    poi=&emp;
    printf("%d",poi->empno);
}