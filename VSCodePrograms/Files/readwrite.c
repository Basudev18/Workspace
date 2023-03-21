#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30],ch;
    FILE *fp;
    printf("Enter  file name: ");
    scanf("%[^\n]",name);
    fp=fopen(name,"a+");
    if (fp==NULL)
    {
        printf("fail to create");
        exit(1);
    }
    printf("successfully created file");
    //write
    printf("write in your file");
    while ((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fseek(fp,0,SEEK_SET);
    //read
   while ((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}