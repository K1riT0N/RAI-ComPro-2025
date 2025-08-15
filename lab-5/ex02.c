#include <stdio.h>

int main() {
    int og[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int rev[8], j = 0;

    for (int i = 8; i > 0; i--) {
        rev[j] = og[i];
        // printf("%i\n", rev[j]);
        j++;
    }
    printf("Reversed Array: ");
    for (int k = 0; k < 9; k++) {
        printf("%i ", rev[k]);
    }
    printf("\n");

    return 0;
}
