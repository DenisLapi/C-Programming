#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 3

int array[ROW][COL] = {
 {1,2,3},
 {4,5,6}
};

int return_value(int row, int column) {
    return *(&array[0][0] + (COL * row) + column);
}

int main()
{
    int i;
    int j;

    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
           printf("%d ", return_value(i,j));
        }
        printf("\n");
    }

    int *p = &array[0][0];
    printf("\n\n\n%d", *p + 3);

    return 0;
}
