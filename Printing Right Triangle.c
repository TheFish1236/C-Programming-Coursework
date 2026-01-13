#include<stdio.h>

int main(){
    int size;

    printf("Enter the height: ");
    scanf("%d", &size);
    
    for (int i=0; i<size;i++){
        for (int j=-1; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}