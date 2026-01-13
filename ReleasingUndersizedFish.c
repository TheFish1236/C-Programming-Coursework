#include <stdio.h>
#define FLOUNDER 0
#define SNAPPER 1
#define TUNA 2
int ReleaseFish(int fishCount, int matrix[3][fishCount]);
double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]);

int main(){
    int count = 5;
    int released;
    double avg;
    char detail[3][10] = {"Species", "Length", "Weight"};

    int fishes[3][count] = {};

    printf("Please enter the data for 5 fish: type, length, weight.\n0 = Flounder; 1 = Snapper; 2 = Tuna\n");

    for (int i=0; i<count;i++){
        scanf("%d %d %d", &fishes[0][i], &fishes[1][i], &fishes[2][i]);
    }

    released = ReleaseFish(count, fishes);
    avg = CalculateAverageWeight(count, fishes);
    
    printf("Released fish: %d", released);
    printf("\nThe average fish weight is %.2f", avg);

    return 0;
}

int ReleaseFish(int fishCount, int matrix[3][fishCount]) {
    int released = 0;

    for (int j = 0; j < fishCount; j++) {
        if (matrix[0][j] == FLOUNDER) {
            if (matrix[1][j] < 14) {
                for (int i = 0; i < 3; i++) {
                    matrix[i][j] = -1;
                }
                released += 1;
            }
        }
        
        else if (matrix[0][j] == SNAPPER) {
            if (matrix[1][j] < 20) {
                for (int i = 0; i < 3; i++) {
                    matrix[i][j] = -1;
                }
                released += 1;
            }
        }
        
        else if (matrix[0][j] == TUNA) {
            if (matrix[1][j] < 27) {
                for (int i = 0; i < 3; i++) {
                    matrix[i][j] = -1;
                }
                released += 1;
            }
        }
    }
    return released;
}

double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]){
    double total = 0.0;
    int kept = 0;

    for (int i=0; i<fishCount;i++){
        if (matrix[2][i] != -1){
            total += matrix[2][i];
            kept++;
        }
    }
    
    return total/kept;
}
