#include<stdio.h>
#include<stdarg.h>
int main(int argc,char *argv[])
{
    int i,n,sum=0;
    for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("%d\n",sum);
    printf("%s\n",argv[0]);
    int count=0;
    for(i=1;i<argv[i];i++)
    {
        count++;
    } 
    printf("%d",count);
    return 0;
}