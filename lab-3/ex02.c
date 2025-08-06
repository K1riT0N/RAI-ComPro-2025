#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%i", &num);

    if (num > 100 || num < 1) {
        printf("%i is out of range\n", num);
    }
    else if (num%2 == 0) {
        printf("%i is even\n", num);
    }
    else {
        printf("%i is odd\n", num);
    }

    return 0;
}