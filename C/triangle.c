#include <stdio.h>

int main() {
    int base, height; 

    while (1) {
        printf("Enter the base of the triangle (positive integer): ");
        scanf("%d", &base);
        printf("Enter the height of the triangle (positive integer): ");
        scanf("%d", &height);  

        if (base > 0 && height > 0) {
            for (int i = 1; i <= height; i++) {
                for (int j = 1; j <= base; j++) { 
                    if (j <= i) {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        } else {
            printf("Please enter positive integers for both base and height.\n");
        }
    }
    return 0;
}
