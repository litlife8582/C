#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct details {
    char name[100];
    int num;
    int quan;
    int price;
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct details *ptr = (struct details *)malloc(n * sizeof(struct details));
    if (ptr == NULL) {
        printf("Memory Allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        getchar(); // To handle leftover newline from scanf
        fgets(ptr[i].name, sizeof(ptr[i].name), stdin);

        // Remove trailing newline from fgets
        int len = strlen(ptr[i].name);
        if (len > 0 && ptr[i].name[len - 1] == '\n') {
            ptr[i].name[len - 1] = '\0';
        }

        scanf("%d", &ptr[i].num);
        scanf("%d", &ptr[i].quan);
        scanf("%d", &ptr[i].price);
    }

    // Corrected output formatting
    printf("\nItem Details:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", ptr[i].name, ptr[i].quan * ptr[i].price);
    }

    free(ptr);
    return 0;
}