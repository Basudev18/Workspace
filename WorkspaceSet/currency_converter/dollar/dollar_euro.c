//Function to convert dollar to euro and vice versa
#include<stdio.h>
void dollar_euro(int n1,int n2,float amount)
{
    if(n1==1)
        printf("%.2f Dollar = %.2f Euros\n",amount,amount/1.0548);
    else if (n1==3)
        printf("%.2f Euros = %.2f Dollars\n",amount,amount*1.0548);
}