#include<stdio.h>
int main()
{
    struct str;
    {
        int s1;
        char st[30];
    };
    struct str s[3] = {{1,"struct1"},{2,"struct2"},{3,"struct3"}};
    printf("%d %s", s[2].s1,(*(s+2)).st);
}