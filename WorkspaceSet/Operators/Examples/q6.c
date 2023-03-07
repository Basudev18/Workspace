#include<stdio.h>
int main()
{
    int pass;
    printf("Ënter the Password:\n");
    scanf("%d",&pass);
    if(pass==2002)
    {
        printf("Correct Password");
    }
    else
    {
    printf("Wrong Password");
    }
    return 0;
}