#include <stdio.h>

int main()
{
    int runningTotal = 0;
    int input;
    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &input);
        runningTotal += input;
    }
    printf("Total: %d", runningTotal);
}