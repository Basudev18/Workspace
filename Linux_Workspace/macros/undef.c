#include<stdio.h>
#define MAX 10
int main()
{
      printf("%d",MAX);
#undef MAX
#define MAX 100
      printf("%d",MAX);
}

