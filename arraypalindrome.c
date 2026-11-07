#include <stdio.h>

int main() {
    int array[7] = {1, 2, 3, 4, 3, 2, 1};
    int palindrome = 1;

    for (int i = 0, j = 6; i < j; i++, j--) {

        if (array[i] != array[j]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Array is a palindrome");
    }
    else {
        printf("Array is not a palindrome");
    }

    return 0;
}
