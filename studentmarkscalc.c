
#include <stdio.h>

int main() {
    int marks[6];
    int total = 0;
    int pass = 1;

    printf("Enter marks for 6 subjects (out of 100):\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n----- RESULT -----\n");

    for (int i = 0; i < 6; i++) {
        total = total + marks[i];

        printf("Subject %d: %d marks - ",
               i + 1, marks[i]);

        if (marks[i] >= 33) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
            pass = 0;
        }
    }

    float percentage = (total / 600.0) * 100;

    printf("\nTotal Marks: %d / 600\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (pass == 1) {
        printf("Overall Result: PASS\n");
    } else {
        printf("Overall Result: FAIL\n");
    }

    return 0;
}
