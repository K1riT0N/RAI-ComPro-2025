#include <stdio.h>

float sum_square(int a, int b) {
    return a * a + b * b;
}

int main() {
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    float result = sum_square(a, b);
    printf("The sum of squares of %d and %d is %.2f\n", a, b, result);

    return 0;
}