// Use file I/O to process player data and find which player in a given file has played the most games, 
// and which player has the best goal average across all their games.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure to hold player statistics
typedef struct player{
   char lastName[50];
   int jerseyNumber;
   int gamesPlayed;
   int goalsScored;
} Player;

// Function Prototypes
Player GetMostGames(Player players[], int numPlayers);
Player GetBestAverage(Player players[], int numPlayers);

int main()
{
   char input[100];
   int lines;

   // Get filename from user
   printf("Enter filename: ");
   // Added %99s to prevent buffer overflow if user types a filename > 100 chars
   scanf("%99s", input); 

   FILE *f1 = fopen(input, "r");
   
   // Safety check: ensure the file actually exists before reading
   if (f1 == NULL) {
      printf("Error: Could not open file %s\n", input);
      return 1; 
   }

   // Read the first line to determine array size
   fscanf(f1, "%d", &lines);
   Player roster[lines]; 

   // Loop through file to populate the roster array
   for(int i = 0; i < lines; i++){
       // Reading data into the struct. 
       // Note: Removed '&' before lastName because arrays are already pointers in C
      fscanf(f1, "%49s %d %d %d", roster[i].lastName, &roster[i].jerseyNumber, &roster[i].gamesPlayed, &roster[i].goalsScored);
   }

   // Process data to find stats
   Player games = GetMostGames(roster, lines);
   Player avg = GetBestAverage(roster, lines);

   // Print results to console
   printf("Most Games Played: %s (#%d); %d games.\n", games.lastName, games.jerseyNumber, games.gamesPlayed);
   printf("Best Goal Average: %s (#%d); %.2f goals.", avg.lastName, avg.jerseyNumber, (float)avg.goalsScored/avg.gamesPlayed);
   
   fclose(f1);
   return 0;
}

// Function to find the player with the highest number of games played
Player GetMostGames(Player players[], int numPlayers){
   int temp = players[0].gamesPlayed;
   int pos = 0;

   for(int i = 0; i < numPlayers; i++){
      if (temp < players[i].gamesPlayed){
         temp = players[i].gamesPlayed;
         pos = i;
      }
   }

   return players[pos];
}

// Function to calculate and find the player with the best goals-per-game ratio
Player GetBestAverage(Player players[], int numPlayers){
   float temp = 0;
   int pos = 0;

   for(int i = 0; i < numPlayers; i++){
      // Cast to float to ensure decimal division, not integer division
      if (temp < (float)players[i].goalsScored/players[i].gamesPlayed){
         temp = (float)players[i].goalsScored/players[i].gamesPlayed;
         pos = i;
      }
   }

   return players[pos];
}
