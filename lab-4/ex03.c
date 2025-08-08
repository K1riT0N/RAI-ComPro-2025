#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter the number: ");
        scanf("%i", &num);

        if (num == 0) {
            printf("Exiting Program... Bye\n");
        }
        else if (num % 2 == 0) {
            printf("%i is even.\n", num);
        }
        else {
            printf("%i is odd.\n", num);
        }
    } while (num != 0);

    return 0;
}