#include <stdio.h>

int main() {
    int N;

    // Ask the user to enter a value for N
    printf("Enter a value for N: ");
    scanf("%d", &N);

    // Loop through rows from 1 to N
    for (int i = 1; i <= N; i++) {
        // Loop through colums, printing numbers from 1 to 1
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Print a new line after each row
        printf("\n");
    }

    return 0;
}