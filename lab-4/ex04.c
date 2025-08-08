#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%i", &num);

    printf("\nMultiplication Table for %i\n", num);

    for (int i = 1; i <= 12; i++) {
        printf("%i x %i = %i\n", num, i, num*i);
    }

    return 0;
}