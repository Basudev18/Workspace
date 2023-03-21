//Function to convert euro to pound and vice versa
#include<stdio.h>
void euro_pound(int n1,int n2,float amount)
{
    if(n1==3)
        printf("%.2f Euros = %.2f Pounds\n",amount,amount/1.1323);
    else if (n1==4)
        printf("%.2f Pounds = %.2f Euros\n",amount,amount*1.1323);
}