#include<stdio.h>
int main()
{
    int n,num1,num2,num3,reverse;
    printf("Enter the number to reverse:\n");
    num1= n/100;
    num2=(n%100)/10;
    num3=(n%10)/100;
    reverse = num3*100+num2*10;
    printf("The reversed number is %d",reverse);
    system("pause");
    return 0;
}