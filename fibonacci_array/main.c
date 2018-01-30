#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int i;
    int len;

    printf("Enter the length of array: ");
    scanf("%d", &len);

    array = malloc(len * sizeof(int));

    array[0] = 1;
    array[1] = 1;

    for( i = 2; i < len; i++ ) {
        array[i] = array[i - 2] + array[i - 1];
    }

    for( i = 0; i < len; i++ ) {
        printf("%d ", array[i]);
    }

    return 0;
}
