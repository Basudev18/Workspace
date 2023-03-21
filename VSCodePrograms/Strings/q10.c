#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 
#define chr_no 255 
void main()
{
    char str[str_size];
	int freq[chr_no];
    int i = 0, max;
    int ascii;
       printf("\nFind maximum occurring character in a string :\n");	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
    for(i=0; i<chr_no; i++)
    {
        freq[i] = 0;
    }
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    max = 0;
    for(i=0; i<chr_no; i++)
    {
        if(i!=32)
        {
        if(freq[i] > freq[max])
            max = i;
        }
    }	
    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, freq[max]);
}