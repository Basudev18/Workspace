//Function to convert pound to euro and vice versa
#include<stdio.h>
void euro_ruble(int n1,int n2,float amount)
{
    if(n1==3)
        printf("%.2f Rubles = %.2f Euros\n",amount,amount/81.0696);
    else if (n1==5)
        printf("%.2f Euros = %.2f Rubles\n",amount,amount*81.0696);
}