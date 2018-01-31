#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define POINT_SIZE 4
#define COORD_SIZE 2


float polygon_area(int x[], int y[], int num_of_point) {

    int area = 0; // Povrsina
    int j = num_of_point - 1;
    int i;

    for(i = 0; i < num_of_point; i++) {
        area += (x[j]+x[i]) * (y[j]-y[i]);
        j = i;
    }
    return area / 2;
}

int main()
{
    int i;
    int j;
    int coords[POINT_SIZE][COORD_SIZE];
    int x_coords[POINT_SIZE];
    int y_coords[POINT_SIZE];

    // Scan the coords for matrix
    for(i = 0; i < POINT_SIZE; i++) {
        for(j = 0; j < COORD_SIZE; j++) {
            if(j == 0) {
                printf("Enter X coord for point %d: ", i + 1);
            } else {
                printf("Enter Y coord for point %d: ", i + 1);
            }
            scanf("%d", &coords[i][j]);
        }

    }

    // Show the coord
    printf("\nCoordinates:\n");
    for(i = 0; i < POINT_SIZE; i++) {
        printf("Point %d | X: %d Y: %d\n", i, coords[i][0], coords[i][1]);
    }

    // Get the X coords from Coords matrix
    for(i = 0; i < POINT_SIZE; i++) {
        x_coords[i] = coords[i][0];
    }

    // Get the Y coords from Coords matrix
    for(i = 0; i < POINT_SIZE; i++) {
        y_coords[i] = coords[i][1];
    }

    int area_value =  polygon_area(x_coords, y_coords, POINT_SIZE);

    printf("Area of polygon is: %f", fabs(area_value));


    return 0;
}
