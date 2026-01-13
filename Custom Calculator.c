#include<stdio.h>

int main(){
    int inp1;
    int inp2;
    int op;
    int run = 1;
    float result;
    while (run==1){
        printf("Enter first input: ");
        scanf("%d", &inp1);
        printf("Enter second input: ");
        scanf("%d", &inp2);
        printf("Enter operation type: ");
        scanf("%d", &op);
        if (op==1){
            result = inp1+inp2;
            printf("%.2f", result);
        } else if (op==2){
            result = inp2-inp1;
            printf("%.2f", result);
        } else if (op==3){
            result = inp1*inp2;
            printf("%.2f", result);
        } else if (op==4){
            result = (float)inp1/inp2;
            printf("%.2f", result);
        } else{
            printf("Bad input");
        }
        printf("\nAgain? (0,1): ");
        scanf("%d",&run);
    }
}