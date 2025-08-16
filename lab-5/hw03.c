#include <stdio.h>
#define size 3

int main() {
    int arr[size][size] = { 1, 0, -1,-1, 2, 3, 2, 4, 5};
    int finalarr[size][size] = {0};

    printf("Define matrix A size %ix%i:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                finalarr[i][j] += arr[i][k] * arr[k][j];
            }
        }
    }

    printf("A x A:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", finalarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}