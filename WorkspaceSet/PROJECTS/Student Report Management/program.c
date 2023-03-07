#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
struct Student
{
    int stud_id;
    int stud_phone;
    char stud_name[20];
    char stud_gender[20];
    char stud_grade[20];
};
void display(struct Student st[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent%d ID, Name, Phone Number, Gender and Grade \n", i+1);
        printf("\n\n");
        scanf("%d %s %x %s %s", &st[i].stud_id, &st[i].stud_name, &st[i].stud_phone, &st[i].stud_gender, &st[i].stud_grade);
    }
    printf("\n");
    printf("\n             DETAILS            \n");
    printf("\nSl NO \tStudent ID  \tStudent Name   \tPhone Number \tGender  \tGrade\n");
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d  \t %d   \t \t%s     \t %x     \t %s   \t \t%s\n", i+1, st[i].stud_id, st[i].stud_name, st[i].stud_phone, st[i].stud_gender, st[i].stud_grade);

    }
}
int main()
{
    int n;
    printf("\n            STUDENT DETAILS           \n");
    printf("\n\n");
    printf("\nEnter the number of students record you want: ");
    scanf("%d", &n);
    struct Student st[n];
    display(st,n);
}