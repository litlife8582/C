#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" "); // Print leading spaces
        }
        for (j = i; j < 2 * i; j++) {
            printf("%d", j); // Print increasing numbers
        }
        for (j = 2 * i - 2; j >= i; j--) {
            printf("%d", j); // Print decreasing numbers
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
