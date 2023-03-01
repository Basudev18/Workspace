#include <stdio.h>

int main() {
   char team1[20], team2[20];
   int score = 0, overs = 0, wickets = 0, target = 0,w =0, y;

   printf("Enter team 1 name: ");
   scanf("%s", team1);
   printf("Enter team 2 name: ");
   scanf("%s", team2);
   printf("Enter target score (0 if batting first): ");
   scanf("%d", &target);

   printf("\nCurrent score:\n%s - %d/%d (%d.%d overs)\n", team1, score, wickets, overs / 6, overs % 6);

   while (wickets < 10 && (target == 0 || score < target)) {
      int runs, balls;
      printf("\nEnter runs scored in this ball: ");
      scanf("%d", &runs);
      printf("Enter number of balls in this over: ");
      scanf("%d", &balls);

      score += runs;
      overs += balls;
   /*  if(runs == 0 || runs == 1)
      {
          printf("Out or not?(y or n)");
          scanf("%d",&wickets);
          if(wickets=y){
            printf("Its out");
            wickets++;
          }
      }*/
      
      wickets;

      if (wickets == 10 || score >= target) {
         printf("\nFinal score:\n%s - %d/%d (%d.%d overs)\n", team1, score, wickets, overs / 6, overs % 6);
         break;
      }
      else {
         printf("\nCurrent score:\n%s - %d/%d (%d.%d overs)\n", team1, score, wickets, overs / 6, overs % 6);
      }
   }

   return 0;
}