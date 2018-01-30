#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int j;
    int length;
    int isPalindrome = 1;
    char string[] = "MooooM";

    length = strlen(string);
    j = length - 1;

    for( i = 0; i < length; i++ ) {
        printf("Compare: %c & %c\n", string[i], string[j]);
        if(string[i] != string[j]) {
            printf("%s is not palindrome\n", string);
            isPalindrome = 0;
            break;
        }
        j--;
    }

    if(isPalindrome) {
        printf("\n------------------------------\n");
        printf("%s is palindrome\n", string);
        printf("------------------------------\n");
    }



    return 0;
}
