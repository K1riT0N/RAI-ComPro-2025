#include <stdio.h>
#define size 3

int main() {
    int arr[size][size] = { 1, 0, -1,-1, 2, 3, 2, 4, 5};
    int diaarr[size][size] = {0};

    printf("Define matrix A size %ix%i:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        diaarr[i][i] = arr[i][i];
    }

    printf("Diagonal matrix of A:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", diaarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}