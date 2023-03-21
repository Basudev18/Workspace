#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"header.h"


int second_inning(char y[5],char x[5]){
 p_balls=0;
 c_overs=0;
    score=0,wickets=0;
    int j;
    int scorer,r;
           printf("\n:--------------SECOND Innings----------------\n");
    for(j=0;j!=balls;j++){
label:
printf("Last ball...\n");
printf("\n[1]Normal delivery\n[2]No ball/wide\n");
scanf("%d",&scorer);
printf("\nRuns on last ball\n");
printf("[0]Dot ball\n[1]1 run\n[2]2 runs\n[3]3 runs\n[4]4 \n[5]6\n[6]Wicket!\n");
scanf("%d",&r);
switch (scorer)
{   case 1:
    p_balls+=1;
    if(p_balls%6==0){
    c_overs+=0.5;
    }
    else{
        c_overs+=0.1;
    }
    break;
    case 2:
    score+=1;
default:
    break;
}
switch (r)
{
case 0:
    break;
case 1:
    score+=1;
    break;
case 2:
    score+=2;
    break;
case 3:
    score+=3;
    break;
case 4:
    score+=4;
    break;
case 5:
    score+=6;
    break;
case 6:
    wickets+=1;
    break;
default:
    printf("Enter a valid choice!");
    goto label;
    break;
}

runrate=score/overs;
        printf("\n:--------------SECOND innings----------------\n");

 printf("Inning 2|");
    printf("\nSCORE---%s|%d-%d|\t\t |overs:- %.1f| Target - %d|",y,score,wickets,c_overs,target);
    printf("\n RR:-%.2f",runrate);
    printf("|Need %d of %d to win| ",target-score,balls-p_balls);

 getch();
 system("cls");
if(wickets==10||p_balls==balls||score>=target)
{
    if(score>=target){
        printf("%s Won the Match!",y);
        return 0;
    }
    else{
        printf("%s Won the Match!",x);
        return 0;
    }
}
    }
}