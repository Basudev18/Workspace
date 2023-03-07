#include<stdio.h>
int main()
{
    int d;
    enum{Mon=2,tue=3,wed=4,thu=5,fri=6,sat=7,sun=1};
    printf("\n\nENTER :");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("%dst day of the week is Sunday",d);
        break;
    case 2:
        printf("%dnd day of the week is Monday",d);
        break;
    case 3:
        printf("%drd day of the week is Tueday",d);
        break;
    case 4:
        printf("%dth day of the week is Wednesday",d);
        break;
    case 5:
        printf("%dth day of the week is Thursday",d);
        break;
    case 6:
        printf("%dth day of the week is Friday",d);
        break;
    case 7:
        printf("%dth day of the week is Saturday",d);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}