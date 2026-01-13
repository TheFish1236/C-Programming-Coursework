#include<stdio.h>

int main(){
    int nums[10] = {};
    int choice;
    int count = 0;

    printf("\nGive 10 numbers: ");
    for(int i = 0; i<10; i++){
        scanf("%d", &nums[i]);
    }

    printf("Enter a number to search for: ");
    scanf("%d", &choice);

    for (int i=0;i<10;i++){
        if (nums[i]==choice)
            count++;
    }

    printf("The number %d appeared %d times.", choice, count);

    return 0;
}