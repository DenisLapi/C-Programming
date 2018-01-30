#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum = 0;
    int counter = 0;

    printf("Enter some number: ");
    scanf("%d", &number);

    while(number > 0) {
        sum += number % 10;
        number /= 10;
        counter++;
    }

    printf("Sum of digits: %d | number of digits: %d", sum, counter);
    return 0;
}
