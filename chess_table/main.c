#include <stdio.h>
#include <stdlib.h>

#define QUEEN_NUM 2
#define QUEEN_COORDS 2

int main()
{

    int chess_matrix[8][8];
    int color = 0;
    int row;
    int col;
    int queen[2][2];
    int i;
    int j;

    printf("Legend:\n0 - white\n1 - black\n\n");

    // Create Chess Table
    for(row = 0; row < 8; row++) {
        for(col = 0; col < 8; col++) {
            chess_matrix[row][col] = color;
            if(color == 0) {
                color = 1;
            } else {
                color = 0;
            }
        }
        if(color == 1) {
            color = 0;
        } else {
            color = 1;
        }
    }

    // Display Chess Table
    for(row = 0; row < 8; row++) {
        for(col = 0; col < 8; col++) {
            printf("%d ", chess_matrix[row][col]);
        }
        printf("\n");
    }

    // Enter the positions of queens
    printf("\n\nLegend (value): \n0 - row\n1 - column\n\n");

    for(i = 0; i < QUEEN_NUM; i++) {
        for(j = 0; j < QUEEN_COORDS; j++) {
            printf("Enter the coord value %d for the queen %d: ", j, i + 1);
            scanf("%d", &queen[i][j]);
        }
    }

    // Check if the Queens attack each other
    if(queen[0][0] == queen[1][0]) {
        printf("\n[Attack] Queens are on the same row");
    } else if(queen[0][1] == queen[1][1]) {
        printf("\n[Attack] Queens are on the same column");
    } else {
        printf("[No Attact] The is not attact yet");
    }
 
    NIJE ZAVRSEN DEO KADA SE KRALJICE NAPADAJU PO DIAGONALI


    return 0;
}
