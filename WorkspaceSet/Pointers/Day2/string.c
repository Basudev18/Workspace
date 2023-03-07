#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i,n,sum=0,product=1;
    if(strcmp(argv[1],"-s")==0)
    {
        for(i=2;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("%d\n",sum);
    }
    else if(strcmp(argv[1],"-p")==0)
    {
        for(i=2;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        product*=n;
    }
    printf("%d\n",product);
    }
    /*if(strcmp(argv[1],"-d")==0)
    {
        for(i=2;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        div/=n;
    }
    printf("%d\n",div);*/
    else 
      printf("invalid arg");
    return 0;
}