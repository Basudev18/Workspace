#include<stdio.h>
#include<string.h>
int main()
{
    enum emp_dept{assembly,manufacturing,accounts,stores};
    struct employee
    {
        char name[30];
        int age;
        float salary;
        enum emp_dept department;
    };
    struct employee e;
    strcpy(e.name,"Basudev");
    e.age=22;
    e.salary=36000;
    e.department=manufacturing;
    if(e.department = accounts)
    {
        printf("%s is an accountant\n",e.name);
    }
    else
    {
       printf("%s is not an accountant\n",e.name);
    }
    return 0;
}