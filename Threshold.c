#include <stdio.h>

int main() {
    int start, end, threshold;
    int count = 0;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Enter threshold value: ");
    scanf("%d", &threshold);
    for (int num = start; num <= end; num++) {
        int temp = num; // Temporary variable to extract digits
        while (temp > 0) {
            int digit = temp % 10; // Get the last digit
            if (digit > threshold) {
                count++; // Increment count if digit is greater than threshold
            }
            temp /= 10; // Remove the last digit
        }
    }
    printf("Total count of digits greater than %d: %d\n", threshold, count);
    return 0;
}
