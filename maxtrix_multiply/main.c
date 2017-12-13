#include <stdio.h>
#include <stdlib.h>

#define aRows 4
#define aColumns 3

#define bRows 3
#define bColumns 4

int a_matrix[aRows][aColumns];
int b_matrix[bRows][bColumns];

int c_matrix[aRows][bColumns]; // Matrix where we added product of matrix A and matrix B


void scan_A_Matrix() {

    int row;
    int column;

    for(row = 0; row < aRows; row++) {
        for(column = 0; column < aColumns; column++) {
            printf("\nEnter value for A matrix[%d][%d]: ", row, column);
            scanf("%d", &a_matrix[row][column]);
        }
    }
}

void scan_B_Matrix() {

    int row;
    int column;

    for(row = 0; row < bRows; row++) {
        for(column = 0; column < bColumns; column++) {
            printf("\nEnter value for B matrix[%d][%d]: ", row, column);
            scanf("%d", &b_matrix[row][column]);
        }
    }
}

void print_A_Matrix() {

    int row;
    int column;

    printf("\nA Matrix values:\n\n");

    for(row = 0; row < aRows; row++) {
        for(column = 0; column < aColumns; column++) {
            printf("%d ", a_matrix[row][column]);
        }
        printf("\n");
    }

}

void print_B_Matrix() {

    int row;
    int column;

    printf("\nB Matrix values:\n\n");

    for(row = 0; row < bRows; row++) {
        for(column = 0; column < bColumns; column++) {
            printf("%d ", b_matrix[row][column]);
        }
        printf("\n");
    }

}

void print_C_Matrix() {

    int row;
    int column;

    printf("\nC Matrix values:\n\n");

    for(row = 0; row < aRows; row++) {
        for(column = 0; column < bColumns; column++) {
            printf("%d ", c_matrix[row][column]);
        }
        printf("\n");
    }

}

void multiply_matrix_A_B() {

    /*
        NOTE: Two matrix can be multiplied
              only if numbers of column in
              the first matrix is the same
              as number of rows in the second
              matrix.
    */

    if(aRows != bColumns) {
        printf("Matrix A rows and B columns need to be the same size");
        return 0;
    }

    // Product of two matrix

    int row;
    int count;
    int index;
    int iProduct = 0;
    for(row = 0; row < aRows; row++) {
        for(count = 0; count < bColumns; count++) {
            iProduct = 0; // Restart variable
            for(index = 0; index < aColumns; index++) {
                int a = a_matrix[row][index];
                int b = b_matrix[index][count];
                iProduct += a * b;
                printf("%d * %d = %d | Product %d\n", a, b, a * b, iProduct);
            }
            c_matrix[row][count] = iProduct;
            printf("------------");
            printf("\n");
        }
    }
}


int main()
{
    scan_A_Matrix();
    scan_B_Matrix();

    multiply_matrix_A_B();

    print_A_Matrix();
    print_B_Matrix();

    if(aRows != bColumns) {
        printf("Matrix A rows and B columns need to be the same size");
    } else {
        print_C_Matrix();
    }


    return 0;
}
