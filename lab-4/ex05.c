#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);
    int fac = num;

    for (int i = 1; i < num; i++) {
        fac *= i;
    }

    printf("Factorial of %i is %i\n", num, fac);

    return 0;
}