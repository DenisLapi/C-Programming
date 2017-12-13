#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3

int matrix[ROW][COL] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
};


int main()
{

    int last_column = COL ;
    int last_row = ROW;
    int p = 0;
    int k = 0;
    int i;

    while(p < last_column - 1 || k < last_row - 1) {
        // Print the top row of matrix
        for(i = p; i < last_column; i++) {
            printf("%d ", matrix[k][i]);
        }

        printf("\n");

        // Increase K to new rom
        k++;

        // Print the right column
        for(i = k; i < last_row; i++) {
            printf("%d \n", matrix[i][last_column - 1]);
        }

        last_column--;

        // Print bottom row
        for(i = last_column - 1; i >= p; i--) {
            printf("%d ", matrix[last_row - 1][i]);
        }

        printf("\n");

        last_row--;

        // Print left column
        for(i = last_row - 1; i >= k; i--) {
            printf("%d\n", matrix[i][p]);
        }

        // Increase starting column
        p++;
    }

    return 0;
}









