#include<stdio.h>
int main()
{
    int ch,d=1000,l;
    enum{mclaren=1,koenigsegg=2,paggani=3,buggati=4,lyken=5};
    printf("\n\nENTER\n1-mclaren\n2-koenigsegg\n3-paggani\n4-buggati\n5-lyken\n\nEnter your choice:");
    scanf("%d",&ch);
    printf("\nEnter how much litres is spent: ");
    scanf("%d",&l);
    switch (ch)
    {
    case 1:
        printf("Mileage=%d",d/l);
        break;
    case 2:
        printf("Mileage=%d",d/l);
        break;
    case 3:
        printf("Mileage=%d",d/l);
        break;
    case 4:
        printf("Mileage=%d",d/l);
        break;
    case 5:
        printf("Mileage=%d",d/l);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
}