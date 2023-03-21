//Currency Converter- this code converts one currency value to another currency

#include<stdio.h>
#include"headers.h"
int main()
{
    int n1,n2;
    float amount;

    printf("\nCURRENCY CONVERTER\n");

    printf("\nEnter 1 for Dollar \nEnter 2 for Rupees \nEnter 3 for Euro \nEnter 4 for Pound \nEnter 5 for Ruble\n");
    printf("\nEnter the currency you want to convert : ");
    scanf("%d",&n1);
    printf("Enter the currency to which you want to convert : ");
    scanf("%d",&n2);
    printf("\nEnter the amount : ");
    scanf("%f",&amount);
    
    /*if((n1==1 && n2==1) || (n1==2 && n2==2) || (n1==3 && n2==3) || (n1==4 && n2==4) || (n1==5 && n2==5) || (n1<5 || n2<5))
    {
        printf("INVALID INPUT, PLEASE ENTER A VALID INPUT!");
    }*/
    if((n1==1 && n2==2) || (n1==2 && n2==1))
    {
        rupee_dollar(n1,n2,amount);
    }
    else if((n1==2 && n2==3) || (n1==3 && n2==2))
    {
        rupee_euro(n1,n2,amount);
    }
    else if((n1==2 && n2==4) || (n1==4 && n2==2))
    {
        rupee_pound(n1,n2,amount);
    }
    else if((n1==2 && n2==5) || (n1==5 && n2==2))
    {
        rupee_ruble(n1,n2,amount);
    }
    else if((n1==1 && n2==3) || (n1==3 && n2==1))
    {
        dollar_euro(n1,n2,amount);
    }
    else if((n1==1 && n2==4) || (n1==4 && n2==1))
    {
        dollar_pound(n1,n2,amount);
    }
    else if((n1==1 && n2==5) || (n1==5 && n2==1))
    {
        dollar_ruble(n1,n2,amount);
    }
    else if((n1==4 && n2==3) || (n1==3 && n2==4))
    {
        euro_pound(n1,n2,amount);
    }
    else if((n1==5 && n2==3) || (n1==3 && n2==5))
    {
        euro_ruble(n1,n2,amount);
    }
    else
    {
        pound_ruble(n1,n2,amount);
    }

}





