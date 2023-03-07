#include<stdio.h>
int main()
{
    enum state{working=1,failed=0};
    enum state s; 
     printf("\n\nENTER :");
    scanf("%d",&s);
    if(s == working)
    {
        printf("Working");
    }
    else
      printf("Not working");
}