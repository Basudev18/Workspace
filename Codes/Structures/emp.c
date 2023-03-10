#include<stdio.h>
#include<string.h>
struct emp
{
    int empno;
    float sal;
    char ename;
}employee;

int main()
{
    employee.empno=10;
    employee.sal=1000;
    employee.ename='a';// take value of ename[20], then it comes 4+4+20=28
    //(strcpy(employee.ename,"SDI"));
    printf("%u",sizeof(employee));
}