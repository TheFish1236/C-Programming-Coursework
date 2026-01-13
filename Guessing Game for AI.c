#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int guess = 0;
    int choice = 0;
    int tries = 0;
    int min = 0;
    int max = 100;


    while (true){
        tries+=1;
        guess = (rand() % (max - min + 1)) + min;
        printf("\nMy guess is: %d", guess);
        printf("\nHow did I do?\n1 = Correct\n2 = Guess was too high\n3 = Guess was too low\n");
        scanf("%d", &choice);
        if (choice == 1){
            printf("Beep boop, I am good at this game! I took %d tries to win!", tries);
            return 0;
        } else if (choice == 3){
            printf("Too low?!  Beep boop, adjusting parameters...");
            min = guess + 1;
            printf("\nNow guessing a number between %d and %d", min, max);
        } else if (choice == 2){
            printf("Too high?!  Beep boop, adjusting parameters...");
            max = guess - 1;
            printf("\nNow guessing a number between %d and %d", min, max);
        }
    }
}