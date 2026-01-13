#include<stdio.h>

int main(){
    int usr;

    scanf("%d", &usr);

    for (int i=2; i<usr; i++){
        if (usr%i == 0){
            printf("Not Prime");
            return 0;
        }
    }
    if (usr==1)
        printf("Not Prime");
    else
        printf("Prime");
}