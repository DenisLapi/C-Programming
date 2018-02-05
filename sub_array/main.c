#include <stdio.h>
#include <stdlib.h>

void check_for_sub_array(*parent_array, *child_array, parent_size, child_size);

int main()
{
    int n;
    int m;
    int i;
    int *array;
    int *array_cpy;
    int *sub_array;
    int *sub_array_cpy;

    printf("Enter the length of the longer array: ");
    scanf("%d", &n);
    array = (int*) calloc(n, sizeof(int));
    array_cpy = array; // Save the starting position of the array


    printf("Enter the length for shorter array: ");
    scanf("%d", &m);
    sub_array = calloc(m, sizeof(int));
    sub_array_cpy = sub_array; // Save the starting position of the sub_array

    printf("Enter the %d values for the longer array: ", n);
    // Set the values for array
    for( i = 0; i < n; i++ ) {
        scanf("%d", array);
        array++;
    }

    // Print the values of array_cpy (copy of array)
    for( i = 0; i < n; i++ ) {
        printf("%d ", *array_cpy);
        array_cpy++;
    }

    printf("\nEnter %d values for the shorther array: ", m);
    // Set the values for sub_array
    for( i = 0; i < m; i++ ) {
        scanf("%d", sub_array);
        sub_array++;
    }

    // Print the values of sub_array_cpy (copy of sub_array)
    for( i = 0; i < m; i++ ) {
        printf("%d ", *sub_array_cpy);
        sub_array_cpy++;
    }

    // Call function to check if shorter array is subarray or longer array
    if(n < m) {
        printf("Longer array, can't be shorter then shorter array");
    } else {
        check_for_sub_array(posalji argumente);
    }

    return 0;
}


void check_for_sub_array(*parent_array, *child_array, parent_size, child_size) {

}

