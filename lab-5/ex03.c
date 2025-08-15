#include <stdio.h>

int main() {
    int mark[5], num, sum = 0, highest;

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student %i: ", i+1);
        scanf("%i", &num);
        mark[i] = num;
        sum += num;
    }
    printf("Total Marks : %i\n", sum);
    highest = mark[0];
    for (int j = 0; j < 5; j++) {
        if (highest < mark[j]) {
            highest = mark[j];
        }
    }
    printf("Highest Marks: %i\n", highest);

    return 0;
}