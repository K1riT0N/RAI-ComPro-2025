#include <stdio.h>

int main() {
    int num;
    float dec;
    char chr[1];

    printf("Please enter an interger value: ");
    scanf("%i", &num);
    printf("You entered %i\n", num);
    printf("Please enter a float value: ");
    scanf("%f", &dec);
    printf("You entered %.1f\n", dec);
    printf("Please enter a character: ");
    scanf("%s", chr);
    printf("You entered %s\n", chr);

    return 0;
}