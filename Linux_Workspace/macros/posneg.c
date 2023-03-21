#include<stdio.h>
#define POSITIVE
#define NEGATIVE
int main()
{
	#ifdef POSITIVE
          int a=10,b=20;
        #endif
 #ifdef NEGATIVE
   int a=-10,b=-20;
#endif
      printf("%d\n%d\n%d",a,b,a+b);

}
