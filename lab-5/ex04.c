#include <stdio.h>

int main() {
    int arr[10], num, leneven=0, lenodd=0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value %i: ", i+1);
        scanf("%i", &num);
        arr[i] = num;
    }
    for (int j = 0; j < 10; j++) {
        if (arr[j]%2 == 0) {
            leneven++;
        }
        else {
            lenodd++;
        }
    }
    printf("Even numbers: %i\n", leneven);
    printf("Odd numbers: %i\n", lenodd);

    return 0;
}