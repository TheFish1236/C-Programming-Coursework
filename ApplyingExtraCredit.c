#include <stdio.h>
int ApplyExtraCredit(int scores[], int classSize);
void PrintLetterDistribution(int scores[], int classSize);



int main(){
    int scores[10] = {};
    printf("\nGive 10 scores: ");
    for(int i = 0; i<10; i++){
        scanf("%d", &scores[i]);
    }

    int hunds = ApplyExtraCredit(scores, 10);
    printf("\n100s: %d", hunds);
    PrintLetterDistribution(scores, 10);

    return 0;
}

void PrintLetterDistribution(int scores[], int classSize){
    int A = 0; 
    int B = 0; 
    int C = 0; 
    int D = 0; 
    int F = 0;

    for(int i = 0; i < classSize; i++){
        if(scores[i] >= 90){
            A++;
            continue;
        }
        else if(scores[i] >= 80){
            B++;
            continue;
        }
        else if(scores[i] >= 70){
            C++;
            continue;
        }
        else if(scores[i] >= 60){
            D++;
            continue;
        }
        else{
            F++;
            continue;
        }
    }

    printf("\nAs: %d\nBs: %d\nCs: %d\nDs: %d\nFs: %d", A,B,C,D,F);
}

int ApplyExtraCredit(int scores[], int classSize)
{
    int hunds = 0;
    for(int i = 0; i < classSize; i++){
        if((scores[i] + 5) > 100){
            scores[i] = 100;
            hunds++;
        }
        else{
        scores[i] += 5;
        }
    }
    return hunds;
}