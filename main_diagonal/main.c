#include <stdio.h>
#include <stdlib.h>

#define N 3

int matrix[N][N];

// Enter the value in the matrix cells (function)
void scanMatrix() {

    int row;
    int column;

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("\nEnter value for matrix[%d][%d]: ", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
}

// Print the main diagonal of matrix
void printMatrix() {

    int i;
    printf("\The main diagonal values:\n\n");

    for(i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]);
    }

}

int main()
{
    scanMatrix();
    printMatrix();
    return 0;
}
