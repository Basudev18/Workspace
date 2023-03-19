#include <stdio.h>
int Sort(int Size, int* p)
{
	int i, j, temp;	
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(*(p + j) < *(p + i))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}			
		}
	}
	printf("\nSorted Array Elements using Pointer: ");
	for(i = 0; i < Size; i++)
	{
		printf("%d", *(p + i));
	}	
}
int main()
{
	int Size;
	printf("\nEnter Array Size: ");
	scanf("%d", &Size);
	int a[Size];
	printf("\nPlease Enter no. of elements of an Array: %d", Size);
	for (int i = 0; i < Size; i++)
	{
		scanf("%d", &a[i]);
    }  	
	Sort(Size, a);   	
}