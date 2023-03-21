#include<stdio.h>
int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d",&m); 
    if(m>100)
    {
        printf("invalid input");
    }
    else if(m>90 && m<=100)
    {
        printf("O Grade");
    }
    else if(m>80 && m<=90)
    {
        printf("E Grade");
    }
    else if(m>70 && m<=80)
    {
        printf("A Grade");
    }
    else if(m>60 && m<=70)
    {
        printf("B Grade");
    }
    else if(m>50 && m<=60)
    {
        printf("C Grade");
    }
    else if(m>40 && m<=50)
    {
        printf("D Grade");
    }
    else
    {
        printf("Fail");
    }
}