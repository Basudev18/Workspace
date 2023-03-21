#include<stdio.h>
int main()
{
    int pin=1234,p;
    printf("Enter your pin: ");
    scanf("%d",&p);
    if(p==pin)
    {
       printf("Login Sucessful!!!");
    }
    else               
    {
       printf("Invalid Login!");
    }
}