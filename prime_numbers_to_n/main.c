#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    int is_prime = 1;

    printf("Enter the number n: ");
    scanf("%d", &n);

    for( i = 2; i < n; i++ ) {
        is_prime = 1;
        for( j = 2; j < i; j++ ) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if(is_prime) {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}
