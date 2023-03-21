#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int n,i;
    printf("Contents of data file");
    f1=fopen("data","w");
    for(i=1;i<=30;i++)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        putw(n,f1);
    }
    fclose(f1);
    f1=fopen("data","r");
    f2=fopen("even","w");
    f3=fopen("odd","w");
    while ((n=getw(f1))!=EOF)
    {
        if(n%2==0)
           putw(n,f2);
        else 
           putw(n,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2=fopen("even","r");
    f3=fopen("odd","r");
    printf("\n\n Contents of odd file\n");
    while ((n=getw(f2))!=EOF)
    {
        printf("%4d",n);
    }
    printf("\n\n Contents of odd file\n");
    while ((n=getw(f3))!=EOF)
    {
        printf("%4d",n);
    }
    fclose(f2);
    fclose(f3);
    
}