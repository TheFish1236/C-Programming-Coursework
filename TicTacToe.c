#include<stdio.h>
int checkWin(char gameboard[3][3], int currentplayer);

//tic tac toe, 2 player

int main(){
    char board[3][3] = {'Z','Z','Z','Z','Z','Z','Z','Z','Z'};
    int player = 1;
    int moverow, movecol;
    int valid = 0;

    while (1){
        while (valid == 0){
            printf("Enter your move player %d. Enter the row coordinate: ", player);
            scanf("%d", &moverow);
            printf("Enter the column: ");
            scanf("%d", &movecol);
            if (board[moverow][movecol] == 'Z'){
                valid = 1;
                if (player == 1){
                    board[moverow][movecol] = 'X';
                } else{
                    board[moverow][movecol] = 'O';
                }
            } else{
                printf("Again please\n");
            }
        }
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                printf("%c", board[i][j]);
            }
            printf("\n");
        }
        if (checkWin(board, player) == 1)
            return 0;
        if (player == 1){
            player = 2;
        } else{
            player = 1;
        }
        valid = 0;
    }
}

int checkWin(char gameboard[3][3], int currentplayer){
    for (int i=0; i<3;i++){
        //Check rows for win
        if ((gameboard[i][0] == gameboard[i][1]) && (gameboard[i][2] == gameboard[i][0])){
            while(gameboard[i][0] != 'Z'){
                printf("Player %d wins!", currentplayer);
                return 1;
            }
        } 
        //Check cols for win
        else if ((gameboard[0][i] == gameboard[1][i]) && (gameboard[2][i] == gameboard[0][i])){
            while(gameboard[0][i] != 'Z'){
                printf("Player %d wins!", currentplayer);
                return 1;
            }
        }
        //Check right diag for win
        else if ((gameboard[0][0] == gameboard[1][1]) && (gameboard[2][2] == gameboard[0][0])){
            while(gameboard[0][0] != 'Z'){
                printf("Player %d wins!", currentplayer);
                return 1;
            }
        } 
        //Check left diag
        else if ((gameboard[2][0] == gameboard[1][1]) && (gameboard[0][2] == gameboard[2][0])){
            while(gameboard[2][0] != 'Z'){
                printf("Player %d wins!", currentplayer);
                return 1;
            }
        }
    }
    return 0;
}