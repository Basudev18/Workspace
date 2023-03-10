#include<stdio.h>
int calc(int x,int y)
{
    int r=1;
    for(int i=0;i<y;i++)
    {
        r*=x;
    }
    return r;
}
int main()
{
    int x,y,r;
    float sum=0;
    printf("Enter x, y: ");
    scanf("%d%d",&x,&y);
    printf("1+1/x");
    for(int i=2;i<=y;i++)
    {
        printf("+1/%d^%d",x,i);
    }
    for(int i=0;i<=y;i++)
    {
        r=calc(x,i);
        sum+=1.0/r;
    }
    printf("\nx=%.2f\n",sum);
}