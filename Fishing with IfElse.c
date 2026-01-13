#include <stdio.h>

int main(){
    int loc;
    int bait;
    int run = 1;
    char catch1[] = "Panfish";
    char catch2[] = "Salmon";
    char catch3[] = "Flounder";
    char catch4[] = "Grouper";
    while(run==1){
        printf("Enter location (1, 2): ");
        scanf("%d", &loc);
        printf("Enter bait type (1, 2): ");
        scanf("%d", &bait);
        if (loc==1 && bait==1){
            printf("%s", catch1);
        } else if (loc==1 && bait==2){
            printf("%s", catch2);
        } else if (loc==2 && bait==1){
            printf("%s", catch3);
        } else if (loc==2 && bait==2){
            printf("%s", catch4);
        } else {
            printf("Wrong input");
        }
        printf("\nAgain? (0,1): ");
        scanf("%d", &run);
    }
}