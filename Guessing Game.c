#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int ans = (rand() % 100) + 1;
    int guess = 0;
    int tries = 0;

    while (true){
        tries+=1;
        printf("Guess a value: ");
        scanf("%d", &guess);
        if (guess == ans){
            printf("Correct!! It took you %d tries to guess!", tries);
            return 0;
        }
        if (guess > ans){
            printf("That number is too high! Guess again!\n");
        }
        else
            printf("That number is too low! Guess again!\n");
    }
}