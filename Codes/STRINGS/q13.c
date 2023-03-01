#include <stdio.h>
void main() 
{
   char str[100], sstr[100];
   int pos, len, c = 0; 
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
   printf("Input the position to start extraction :");
   scanf("%d", &pos);
   printf("Input the length of substring :");
   scanf("%d", &len);
   while (c < len) 
   {
      sstr[c] = str[pos+c-1];
      c++;
   }
   sstr[c] = '\0';
   printf("The substring is : %s", sstr);
}