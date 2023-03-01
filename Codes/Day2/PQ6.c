#include<stdio.h>
int main()
{
    int nodays,y,m,d;
    printf("Input no. of Days:");
    scanf("%d",&nodays);
    y=(int)nodays/365;
    nodays=nodays-(365*y);
    m =(int)nodays/30;
    d =(int)nodays-(m*30);
    printf("%d years(s) \n%d Month(s) \n%d Day(s)",y,m,d);
    return 0;
}
