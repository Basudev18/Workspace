//Function to convert rupee to ruble and vice versa
#include<stdio.h>
void rupee_ruble(int n1,int n2,float amount)
{
    if(n1==2)
        printf("%.2f Rupees = %.2f Rubles\n",amount,amount/1.0909);
    else if (n1==5)
        printf("%.2f Rubles = %.2f Rupees\n",amount,amount*1.0909);
}
