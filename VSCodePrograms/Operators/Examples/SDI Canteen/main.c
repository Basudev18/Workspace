#include<stdio.h>
#include"meal.h"
int main() {
    int i;
    int choice = -1;
    printf("_____________* Welcome to SDI Canteen *_______________\n");
    printf("MEAL:\n1. Breakfast\n2. Lunch\n3. Snacks\n4. Dinner\n5. Exit\n");
    int flag = 1;
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                breakfast(i);
                flag = 0;
                break;
            case 2:
                lunch(i);
                flag = 0;
                break;
            case 3:
                snacks(i);
                flag = 0;
                break;
            case 4:
                dinner(i);
                flag = 0; 
                break;
            case 5:
                printf("Thank you. Have a nice day \n");
                flag = 0; 
                break; 
            default:
                printf("> Invalid Input\n");
                break;
        }
    }
    printf("\nThank You, Your Order will be served soon!!!");
    return 0;
}

