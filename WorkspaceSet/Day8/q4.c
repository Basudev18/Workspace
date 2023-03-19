#include<stdio.h>
int area(int a,int b)
{
    int area=a*b;
    return area;
}
int perimeter(int a,int b)
{
    int p=2*(a+b);
    return p;
}
int main()
{
    int a,b,x,y;
    printf("Enter length of the rectangle:");
    scanf("%d",&a);
    printf("Enter breadth of the rectangle:");
    scanf("%d",&b);
    x=area(a,b);
    y=perimeter(a,b);
    printf("Area of Rectangle is %d\n Perimeter of Rectangle is %d",x,y);
    return 0;
}
