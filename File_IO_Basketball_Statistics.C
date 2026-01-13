#include<stdio.h>

int main(){
    int score;
    char position;
    int totalc = 0;
    int totalg = 0;
    int totalf = 0;
    float countc = 0.0;
    float countg = 0.0;
    float countf = 0.0;
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f1 = fopen(filename, "r");

    while (fscanf(f1, "%d %c", &score, &position) == 2){
        if (position == 'C'){
            totalc+=score;
            countc++;
        } else if (position == 'G'){
            totalg+=score;
            countg++;
        } else if (position == 'F'){
            totalf+=score;
            countf++;
        }
    }

    printf("C: %.2f\nG: %.2f\nF: %.2f", totalc/countc, totalg/countg, totalf/countf);
}