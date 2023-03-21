#include <stdio.h>
#define str_size 100 
int comp(char* s1, char* s2)
{
         int flag = 0;
         while (*s1 != '\0' || *s2 != '\0') {
                  if (*s1 == *s2) {
                            s1++;
                            s2++;
                  }
        else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2)
                                     {
                                      flag = 1;
                                      break;
                                     }
         }
  return flag;
}
int main()
{
char str1[str_size], str2[str_size];
   int temp=0;
   printf("\nInput the 1st string : ");
   fgets(str1, sizeof str1, stdin);
   printf("Input the 2nd string : ");
   fgets(str2, sizeof str2, stdin);          
   printf("\nString1: %s", str1);
   printf("String2: %s", str2);
   temp = comp(str1, str2);
    if(temp == 0)
   {
       printf("\nStrings are equal.\n");
   }
   else if(temp == 1)
   {
      printf("\nStrings are not equal.");
   }
         return 0;
}