#include <stdio.h>
int main() 
{
    int arr[5],i;
    for(int i=0; i<5; i++) 
    {
        printf("Enter value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<5;i++)
    printf("%d\t",arr[i]);
    return 0;
}