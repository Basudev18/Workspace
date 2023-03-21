//Function to convert rupee to euro and vice versa
#include<stdio.h>
void rupee_euro(int n1,int n2,float amount)
{
    if(n1==2)
        printf("%.2f Rupees = %.2f Euros\n",amount,amount/87.67);
    else if (n1==3)
        printf("%.2f Euros = %.2f Rupees\n",amount,amount*87.67);
}