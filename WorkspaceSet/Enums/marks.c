#include<stdio.h>
int main()
{
    enum status{pass,fail};
    enum status stud1;
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=30)
    {
        printf("Pass"); 
    }
    else
       printf("Fail");   
}