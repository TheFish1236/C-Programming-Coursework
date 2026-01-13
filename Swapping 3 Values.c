#include<stdio.h>
void TripleSwap(int *a, int *b, int *c);

int main(){
    int a, b, c;

    printf("Enter the values to swap: ");
    scanf("%d %d %d", &a, &b, &c);

    TripleSwap(&a, &b, &c);

    printf("A: %d\nB: %d\nC: %d", a, b, c);
}

void TripleSwap(int *a, int *b, int *c){
    int temp = *a;

    *a = *c;
    *c = *b;
    *b = temp;
}