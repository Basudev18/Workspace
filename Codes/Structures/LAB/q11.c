#include<stdio.h>
 struct zoho
{ 
    int employees;  
    char comp[5];
    struct founder
    {
        char ceo[10];
    }p;
};
int main()
{
    struct zoho zs = {4000, "zoho", "sridhar"};
    printf("%d %s %s", zs.comp,zs.employees,zs.p.ceo);
    return 0;
}