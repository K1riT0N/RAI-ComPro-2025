#include <stdio.h>

int main() {
    int x, y, z;
    int min, max;

    printf("Enter integer #1: ");
    scanf("%i", &x);
    printf("Enter integer #2: ");
    scanf("%i", &y);
    printf("Enter integer #3: ");
    scanf("%i", &z);
    
    if (x < y) {
        if (y < z) {
            min = x;
            max = z;
        }
        else {
            min = x;
            max = y;
        }
    }
    else if (y < x) {
        if (x < z) {
            min = y;
            max = z;
        }
        else {
            min = y;
            max = x;
        }
    }
    else if (z < x){
        if (x < y) {
            min = z;
            max = y;
        }
        else {
            min = z;
            max = x;
        }
    }


    printf("\nResults:\n");
    printf("Minimum: %i\n", min);
    printf("Maximum: %i\n", max);
    printf("Sum: %i\n", x+y+z);
    printf("Average: %.2f\n", (x+y+z)/3.0);
}