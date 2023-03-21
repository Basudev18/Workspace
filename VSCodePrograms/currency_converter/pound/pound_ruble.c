//Function to convert pound to ruble and vice versa
#include<stdio.h>
void pound_ruble(int n1,int n2,float amount)
{
    if(n1==4)
        printf("%.2f Rubles = %.2f Pounds\n",amount,amount/174.7);
    else if (n1==5)
        printf("%.2f Pounds = %.2f Rubles\n",amount,amount*174.7);
}