#include<stdio.h>
void change(int *ptr,int n)
{
    for (int i = 0; i < n; i++)
    {
        *(ptr+i)+=2;
    }
}
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;
    printf("value of a before\n");
    for (int i = 0; i <5; i++)
    {
       printf("%d\t",a[i]);
    }
    change(p,5);
    printf("\nvalue of a after increment\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }

}