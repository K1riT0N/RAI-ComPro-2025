#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        int num;
        printf("%i. Enter the number: ", i);
        scanf("%i", &num);
        sum += num;
    }
    printf("total sum is %i\n", sum);
    printf("Average is %.2f\n", sum/10.0);

    return 0;
}