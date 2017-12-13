#include <stdio.h>
#include <stdlib.h>

#define N 3

int a_matrix[N][N];
int b_matrix[N][N];
int c_matrix[N][N]; // Matrix where we added sum of matrix A and Matrix B


void scan_A_Matrix() {

    int row;
    int column;

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("\nEnter value for A matrix[%d][%d]: ", row, column);
            scanf("%d", &a_matrix[row][column]);
        }
    }
}

void scan_B_Matrix() {

    int row;
    int column;

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("\nEnter value for B matrix[%d][%d]: ", row, column);
            scanf("%d", &b_matrix[row][column]);
        }
    }
}

void print_A_Matrix() {

    int row;
    int column;

    printf("\nA Matrix values:\n\n");

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("%d ", a_matrix[row][column]);
        }
        printf("\n");
    }

}

void print_B_Matrix() {

    int row;
    int column;

    printf("\nB Matrix values:\n\n");

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("%d ", b_matrix[row][column]);
        }
        printf("\n");
    }

}

void print_C_Matrix() {

    int row;
    int column;

    printf("\nC Matrix values:\n\n");

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            printf("%d ", c_matrix[row][column]);
        }
        printf("\n");
    }

}

void sum_matrix_A_B() {

    int row;
    int column;

    for(row = 0; row < N; row++) {
        for(column = 0; column < N; column++) {
            c_matrix[row][column] = a_matrix[row][column] + b_matrix[row][column];
        }
        printf("\n");
    }
}


int main()
{
    scan_A_Matrix();
    scan_B_Matrix();

    sum_matrix_A_B();

    print_A_Matrix();
    print_B_Matrix();
    print_C_Matrix();

    return 0;
}
