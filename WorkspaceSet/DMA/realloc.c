#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    p=(int *) malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Failed to allocate memory\n");
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    n=5;
    p=realloc(p,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    
}