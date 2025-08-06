#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%i", &num);

    switch(num <= 100) {
        case 1:
            switch (num % 2) {
                case 0:
                    printf("%i is even\n", num);
                    break;
                case 1:
                    printf("%i is odd\n", num);
                    break;
            }
            break;
        case 0:
            printf("%i is out of range\n", num);
            break;
    }

    return 0;
}