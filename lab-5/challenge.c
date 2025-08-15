#include <stdio.h>

int main() {
    int num, num2;

    printf("Enter number of elements: ");
    scanf("%i", &num);
    int arr[num];

    printf("Enter %i integers: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%i", &arr[i]);
        // printf("%i", arr[i]);
    }
    
    for (int i = 0; i < num; i++) {

        int count = 0;
        int counted = 0;

        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                counted = 1;
                break;
            }
        }
        if (counted) {
            continue;
        }

        for (int k = 0; k < num; k++) {
            if (arr[k] == arr[i]) {
                count++;
            }
        }
        printf("Element %i occurs %i times\n", arr[i], count);
    }
    return 0;
}