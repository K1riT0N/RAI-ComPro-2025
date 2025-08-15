#include <stdio.h>

int main() {
    int arr[10], num;
    
    for (int i = 0; i < 10; i++) {
        printf("Enter the value %i here: ", i+1);
        scanf("%i", &num);
        arr[i] = num;
    }
    printf("Value in array are: ");
    for (int j = 0; j < 10; j++) {
        printf("%i", arr[j]);
        if (j != 9) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}