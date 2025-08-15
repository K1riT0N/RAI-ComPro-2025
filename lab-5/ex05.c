#include <stdio.h>

int main() {
    int arr[8], min, max, num;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %i: ", i+1);
        scanf("%i", &num);
        arr[i] = num;
    }
    min = arr[0], max = arr[0];
    // printf("%i\n", min);
    for (int j = 0; j < 8; j++) {
        if (min > arr[j]) {
            min = arr[j];
        }
        if (max < arr[j]) {
            max = arr[j];
        }
    }
    printf("Smallest number: %i\n", min);
    printf("Largest number: %i\n", max);

    return 0;
}