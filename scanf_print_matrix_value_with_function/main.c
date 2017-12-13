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

// Print the values of matrix (function)
void printMatrix() {

    int row;
    int column;

    printf("\nMatrix values:\n\n");

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }

}

int main()
{
    scanMatrix();
    printMatrix();
    return 0;
}
