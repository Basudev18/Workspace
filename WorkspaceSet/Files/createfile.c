#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30],ch;
    FILE *fp;
    printf("Enter  file name: ");
    scanf("%[^\n]",name);
    fp=fopen(name,"w");
    if (fp==NULL)
    {
        printf("fail to create");
        exit(1);
    }
    printf("successfully created file");
}