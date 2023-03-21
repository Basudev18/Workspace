//Function to convert rupee to pound and vice versa
#include<stdio.h>
void rupee_pound(int n1,int n2,float amount)
{
    if(n1==2)
        printf("%.2f Rupees = %.2f Pounds\n",amount,amount/99.042);
    else if (n1==4)
        printf("%.2f Pounds = %.2f Rupees\n",amount,amount*99.042);
}