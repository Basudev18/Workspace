#include<stdio.h>
#include<string.h>
struct emp
{
    int empno;
    float sal;
    char ename[20];
};

int main()
{
    struct emp e1,e2,e3={30,50000,"Annie"};
    e1.empno=10;
    e1.sal=1000;
    (strcpy(e1.ename,"Alex"));
    e2.empno=20;
    e2.sal=2000;
    (strcpy(e2.ename,"Ammy"));
    printf("\nEmployee 1\n");
    printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",e1.empno,e1.ename,e1.sal);
     printf("\nEmployee 2\n");
    printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",e2.empno,e2.ename,e2.sal);
    printf("\nEmployee 3\n");
    printf("Employee no=%d\nEmployee name=%s\nEmployee salary=%.2f\n",e3.empno,e3.ename,e3.sal);
}