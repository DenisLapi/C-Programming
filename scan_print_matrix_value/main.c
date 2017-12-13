#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    int matrix[N][N];
    int row;
    int column;

    // Enter the value in the matrix cells
    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("\nEnter value for matrix[%d][%d]: ", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }

    printf("\nMatrix values:\n\n");

    // Print the values of matrix
    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}
