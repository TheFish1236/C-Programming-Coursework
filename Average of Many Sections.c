#include<stdio.h>

int main(){
    int sections;
    int students = 1;
    float avg[sections];
    float total;

    printf("Sections? ");
    scanf("%d", &sections);

    for (int i=0; i<sections; i++){
        printf("Students in section %d? ", i);
        scanf("%d", &students);
        
        int scores[students];
        total = 0;

        printf("Enter scores, separated by spaces: ");
        for (int j=0; j<students; j++){
            scanf("%d", &scores[j]);
            total += scores[j];
        }
        avg[i] = total/students;
        printf("Section %d Average: %.2f\n", i, avg[i]);
    }
    
    float top = avg[0];
    int topsec = 0;

    for (int i=0; i<sections; i++){
        if (top < avg[i]){
            top = avg[i];
            topsec = i;
        }
    }
    printf("Section with best average: %d", topsec);
}