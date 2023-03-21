#include<stdio.h>
#include<stdlib.h>
int main()
{
char name[30],ch;
FILE *fp;
printf("Enter name of the file: ");
scanf("%[^\n]",name);
fp=fopen(name,"a");
if(fp==NULL)
{
	printf("Fail");
	exit(1);
}
printf("File created");
printf("Write inside your file:");
while((ch=getchar())!=EOF)
	putc(ch,fp);
/*fseek(fp,5,SEEK_SET);
printf("\n\n Data in file");
while((ch=getc(fp))!=EOF)
        putchar(ch);*/
fclose(fp);	
}

