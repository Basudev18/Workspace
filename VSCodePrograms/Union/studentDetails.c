#include<stdio.h>
#include<string.h>

union student
{
    int id;
    char name[30];
    int age;
};
int main()
{
    int max, c;
    printf("\nEnter total number of students\n");
    scanf("%d",&max);
    union student p[max];
    for(int i=0;i<max;i++)
    {
        printf("\nStudent : %d\n",i+1);
        printf("Enter id:");
        scanf("%d",&p[i].id);
        printf("Enter name:");
        scanf("%s",&p[i].name);
        printf("Enter age:");
        scanf("%d",&p[i].age);
    }
    for(int i=0;i<max;i++)
    {
        printf("\nStudent-%d details are\n",i+1);
        printf("\n  ID=%d\n  Name:%s\n  Age:%d\n \n",p[i].id,p[i].name,p[i].age);
    
    }
}