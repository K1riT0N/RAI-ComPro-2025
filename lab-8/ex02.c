#include <stdio.h>

int is_prime(int n);

int main() {
    int start, stop;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &stop);

    int range[stop - start], j = 0;

    for (int i = start; i <= stop; i++) {
        if (is_prime(i)) {
            range[j] = i;
            j++;
        } else {
            continue;
        }
    }

    printf("Prime numbers within the intervals are: ");
    for (int k = 0; k < j; k++) {
        printf("%d ", range[k]);
    }
    printf("\n");
    
    return 0;
}

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}