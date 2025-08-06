#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter a number: ");
    scanf("%i", &num1);
    printf("Enter a number: ");
    scanf("%i", &num2);

    if (num1 == num2) {
        printf("Macth\n");
    }
    else {
        printf("Does not match. Try again\n");
    }

    return 0;
}