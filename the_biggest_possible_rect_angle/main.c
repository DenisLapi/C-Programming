#include <stdio.h>
#include <stdlib.h>

#define POINT_NUMBER 5
#define COORD_NUMBER 2

int main()
{
    int coords[POINT_NUMBER][COORD_NUMBER];
    int big_rectangle[4][2];
    int i;
    int j;
    int x_min;
    int x_max;
    int y_min;
    int y_max;

    for(i = 0; i < POINT_NUMBER; i++) {
        for(j = 0; j < COORD_NUMBER; j++) {
            if(j == 0) {
                printf("Enter X coord for point %d: ", i + 1);
            } else {
                printf("Enter Y coord for point %d: ", i + 1);
            }
            scanf("%d", &coords[i][j]);
        }
    }

    printf("\nCoordinates:\n\n");

    for(i = 0; i < POINT_NUMBER; i++) {
        printf("POINT: %d | X: %d Y: %d\n", i, coords[i][0], coords[i][1]);
    }

    printf("\n\nMinimum and maximum coordinates:\n\n");

    // Get the minimum coords
    x_min = coords[0][0];
    for(i = 0; i < POINT_NUMBER; i++) {
        if(coords[i][0] < x_min) {
            x_min = coords[i][0];
        }
    }

    printf("X minimum: %d\n", x_min);

    y_min = coords[0][1];
    for(i = 0; i < POINT_NUMBER; i++) {
        if(coords[i][1] < y_min) {
            y_min = coords[i][1];
        }
    }

    printf("Y minimum: %d\n", y_min);

    // Get the maximum coords
    x_max = coords[0][0];
    for(i = 0; i < POINT_NUMBER; i++) {
        if(coords[i][0] > x_max) {
            x_max = coords[i][0];
        }
    }

    printf("X maximum: %d\n", x_max);

    y_max = coords[0][1];
    for(i = 0; i < POINT_NUMBER; i++) {
        if(coords[i][1] > y_max) {
            y_max = coords[i][1];
        }
    }

    printf("Y maximum: %d\n", y_max);

    // Create the biggest possible rectangle
    big_rectangle[0][0] = x_min;
    big_rectangle[0][1] = y_min;

    big_rectangle[1][0] = x_max;
    big_rectangle[1][1] = y_min;

    big_rectangle[2][0] = x_max;
    big_rectangle[2][1] = y_max;

    big_rectangle[3][0] = x_min;
    big_rectangle[3][1] = y_max;

    printf("\n\nCoordinates of the biggest rectangle:\n\n");

    for(i = 0; i < 4; i++) {
        printf("POINT %d | X: %d Y: %d\n", i, big_rectangle[i][0], big_rectangle[i][1]);
    }

    printf("\n\n");

    return 0;
}
