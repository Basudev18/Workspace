#include<stdio.h>
int main()
{
    enum dir{north,south,east,west};
    enum dir d;
    printf("\n\nENTER :");
    scanf("%d",&d);
    switch(d)
    {
       case north :
                  printf("North direction");
                  break;
        case south :
                  printf("South direction");
                  break;
         case east :
                  printf("East direction");
                  break;
          case west :
                  printf("West direction");
                  break;                             
    }
    return 0;
}
