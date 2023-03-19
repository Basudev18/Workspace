#include<stdio.h>
int main()
{
    enum week{Mon=2,tue=3,wed=4,thu=5,fri=6,sat=7,sun=1};
    enum week day;
    day=fri;
    printf("Its the %dth day of the week",day);
}