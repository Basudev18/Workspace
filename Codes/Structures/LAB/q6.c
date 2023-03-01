#include<stdio.h>
struct emp
{
    char *name;
    int sal;
};
int main()
{
    struct emp e,e1;
    e.name="Sridhar";
    e1=e;
    printf("%s\n%s",e.name,e1.name);
    return 0;
}