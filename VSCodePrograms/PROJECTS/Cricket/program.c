#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"header.h"
int first_inning(char y[5]);
int second_inning(char y[5], char x[5]);


int main()
{
printf("*-------------------------------------------*");
printf("\n \t\tCricket Score Display\t\t");
printf("\n*-------------------------------------------*");
printf("\nPress any key to Continue");
getch();
system("cls");

printf("Enter Name of Team1:");
scanf("%s",Team1);
printf("Enter Name of Team2:");
scanf("%s",Team2);
printf("Enter the number of overs:");
scanf("%d",&overs);
balls=overs*6;
re:
printf("Which Team is batting first?\n");
printf("\n[1] %s\n[2] %s\n",Team1,Team2);
scanf("%d",&toss);
switch(toss){
    case 1:
    printf("Team 1 is batting first");
    first_inning(Team1);
    bat_first=1;
    break;
    case 2:
    printf("Team 2 is batting first");
    first_inning(Team2);
    bat_first=2;

    break;
    default:
    printf("Enter a valid choice!");
    goto re;
}
if (target>0){
    if(bat_first==1){
second_inning(Team2,Team1);
}
else{
    second_inning(Team1,Team2);
}
}
return 0;
}


