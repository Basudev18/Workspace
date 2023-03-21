#include<stdio.h>
int main()
{
    int mon=40,tue=33,wed;
    printf("Enter todays temperature: ");
    scanf("%d",&wed);
    if(wed ==mon)
    {
       printf("sunny");
    }
    else if(wed==tue)
    {
       printf("rainy");
    }
    else               
    {
       printf("weather cant be predicted");
    }
}