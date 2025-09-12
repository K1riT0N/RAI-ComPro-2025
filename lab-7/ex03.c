#include <stdio.h>

int main() {
    int array[] = {3,1,2,4,5,6};

    int *p = &array[0];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (*(p+i) < array[j]) {
                *(p+i) = array[j];
            }
        }
    }
    printf("Max value: %i\n", *p);

    return 0;
}