#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkUnhealthy(char a[5][15], char b[15]);
int checkHealthy(char a[5][15], char b[15]);

int main(){
    char unhealthy[5][15] = {"candy", "soda", "chips", "icecream", "marshmallows"};
    char healthy[5][15] = {"banana", "apple", "orange", "lettuce", "tomato"};

    int numList;
    printf("How many items in your shopping list?\n");
    scanf("%d", &numList);
    printf("\nBanana\tApple\tOrange\tLettuce\tTomato\n");
    printf("Candy\tSoda\tChips\tIcecream\tMarshmallows\n");

    char food[15] = {};

    for(int i = 0; i < numList; i++){
        scanf(" %s", food);
        for(int j = 0; j < strlen(food); j++){
            food[j] = tolower(food[j]);
        }
        checkUnhealthy(unhealthy, food);
        checkHealthy(healthy, food);
    }
}

int checkUnhealthy(char a[5][15], char b[15]){
    for(int i = 0; i < 5; i++){
        if(strcmp(a[i] , b) == 0){
            printf("Unhealthy\n");
            return 0;
        }
    }
}

int checkHealthy(char a[5][15], char b[15]){
    for(int i = 0; i < 5; i++){
        if(strcmp(a[i] , b) == 0){
            printf("Healthy\n");
            return 0;
        }
    }
}