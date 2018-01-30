#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vector_size;
    int *vector;
    int *show_vector;

    printf("Enter vector size: ");
    scanf("%d", &vector_size);

    vector = calloc(vector_size, sizeof(int));

    show_vector = vector;

    for( i = 0; i < vector_size; i++) {
        printf("%d ", *vector);
        vector++;
    }

    printf("|");

    for( i = 0; i < vector_size; i++) {
        printf("%d ", *vector);
        vector++;
    }

    printf("vector: %d", *vector);

    return 0;
}
