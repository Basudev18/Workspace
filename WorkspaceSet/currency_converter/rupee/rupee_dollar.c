//This file contains function to convert rupee to dollar and vice versa
#include<stdio.h>
void rupee_dollar(int n1,int n2,float amount)
{
    if(n1==1)
    {
        printf("%.2f Dolars = %.2f Rupees\n",amount,amount*82.93);
    }
    else if (n1==2)
    {
        printf("%.2f Rupees = %.2f Dollars\n",amount,amount/82.93);
    }
}