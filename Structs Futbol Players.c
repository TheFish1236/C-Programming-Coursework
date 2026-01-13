#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct player{
   char lastName[50];
   int jerseyNumber;
   int gamesPlayed;
   int goalsScored;
} Player;

Player GetMostGames(Player players[], int numPlayers);
Player GetBestAverage(Player players[], int numPlayers);

int main()
{
   char input[100];
   int lines;

   printf("Enter filename: ");
   scanf("%s", input);
   FILE *f1 = fopen(input, "r");

   fscanf(f1, "%d", &lines);
   Player roster[lines];

   for(int i=0;i<lines;i++){
      fscanf(f1, "%s %d %d %d", &roster[i].lastName, &roster[i].jerseyNumber, &roster[i].gamesPlayed, &roster[i].goalsScored);
   }

   Player games = GetMostGames(roster, lines);
   Player avg = GetBestAverage(roster, lines);

   printf("Most Games Played: %s (#%d); %d games.\n", games.lastName, games.jerseyNumber, games.gamesPlayed);
   printf("Best Goal Average: %s (#%d); %.2f goals.", avg.lastName, avg.jerseyNumber, (float)avg.goalsScored/avg.gamesPlayed);
   
   fclose(f1);
}

Player GetMostGames(Player players[], int numPlayers){
   int temp = players[0].gamesPlayed;
   int pos = 0;

   for(int i=0;i<numPlayers;i++){
      if (temp<players[i].gamesPlayed){
         temp = players[i].gamesPlayed;
         pos = i;
      }
   }

   return players[pos];
}

Player GetBestAverage(Player players[], int numPlayers){
   float temp = 0;
   int pos = 0;

   for(int i=0;i<numPlayers;i++){
      if (temp < (float)players[i].goalsScored/players[i].gamesPlayed){
         temp = (float)players[i].goalsScored/players[i].gamesPlayed;
         pos = i;
      }
   }

   return players[pos];
}
