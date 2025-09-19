#include <stdio.h>

int sum_odd(int arr[], int n);
int sum_even(int arr[], int n);

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int odd_sum = sum_odd(arr, n);
    int even_sum = sum_even(arr, n);

    printf("Output: Sum of even numbers: %d\n\tSum of odd number: %d\n", even_sum, odd_sum);

    return 0;
}

int sum_odd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sum_even(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;

}