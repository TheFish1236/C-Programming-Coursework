#include<stdio.h>

int main(){
    int input = 0;
    int total = 0;
    printf("Enter food:\n1 = Burger (350 calories)\n2 = Fries (365 calories)\n3 = Soda (250 calories)\n4 = Coffee (1 calorie)\n5 = Slice of Pizza (280 calories)\n");

    while (input!=-1){
        scanf("%d", &input);
        if (input==1){
            total+=350;
        }else if (input==2){
            total+=365;
        }else if (input==3){
            total+=250;
        }else if (input==4){
            total+=1;
        } else if (input==5){
            total+=280;
        }
    }
    printf("%d", total);
}