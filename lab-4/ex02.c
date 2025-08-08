#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    while (i <= 10) {
        int num;
        printf("%i. Enter the number: ", i);
        scanf("%i", &num);
        sum += num;
        i++;
    }
    printf("total sum is %i\n", sum);

    return 0;
}