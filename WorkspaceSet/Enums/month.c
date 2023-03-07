#include<stdio.h>
int main()
{
    enum month{jan,feb,march,april,may,june,july,aug,sept,oct,nov,dec};
    enum month m;
    printf("\n\nENTER :");
    scanf("%d",&m);
    switch(m)
    {
        case jan:
               printf("Its January!!!! ");
               break;
        case feb:
            printf("Its February!!!! ");
            break;
        case march:
            printf("Its March!!!! ");
            break;
        case april:
            printf("Its April!!!! ");
            break;
        case may:
            printf("Its May!!!! ");
            break;
        case june:
            printf("Its June!!!!");
            break;
        case july:
            printf("Its July!!!! ");
            break;
        case aug:
            printf("Its August!!!! ");
            break;
        case sept:
            printf("Its September!!!! ");
            break;
        case oct:
            printf("Its October!!!! ");
            break;
        case nov:
            printf("Its November!!!! ");
            break;
        case dec:
            printf("Its December!!!! ");
            break;
        default:
            printf("Invalid ");
            break;
    }
}