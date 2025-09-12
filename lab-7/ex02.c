#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    int *p = &a;
    int *q = &b;
    int temp = *p;
    *p = *q;
    *q = temp;

    printf("After reverse: a = %d, b = %d\n", a, b);

    return 0;
}