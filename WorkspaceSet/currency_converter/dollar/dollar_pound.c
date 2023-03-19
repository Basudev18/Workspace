//Function to convert dollar to pound and vice versa
#include<stdio.h>
void dollar_pound(int n1,int n2,float amount)
{
    if(n1==1)
        printf("%.2f Dollars = %.2f Pounds\n",amount,amount/1.1946);
    else if (n1==4)
        printf("%.2f Pounds = %.2f Dollars\n",amount,amount*1.1946);
}