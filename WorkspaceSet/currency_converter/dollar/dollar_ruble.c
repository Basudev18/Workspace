//Function to convert dollar to ruble and vice versa
#include<stdio.h>
void dollar_ruble(int n1,int n2,float amount)
{
    if(n1==1)
        printf("%.2f Dollars = %.2f Rubles\n",amount,amount*76);
    else if (n1==5)
        printf("%.2f Rubles = %.2f Dollars\n",amount,amount/76);
}
