#include<stdio.h>
int main()
{
    enum status{Valid,Invalid};
    enum status person;
    int age;
    printf("Enter age");
    scanf("%d",&age);
    if(age>=18)
    { 
       printf("Valid");
    }
    else
      printf("Invalid");
}