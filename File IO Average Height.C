#include<stdio.h>

int main(){
    float lines;
    int temp;
    int total = 0;
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *f1 = fopen(filename, "r");
    fscanf(f1, "%f", &lines);

    for (int i=0;i<lines;i++){
        fscanf(f1, "%d", &temp);
        total+=temp;
    }

    printf("%.2f", total/lines);
}