#include <stdio.h>

int main() {
    int A[3][3] = {1,2,3,4,5,6,7,8,9};
    int *ptr_num = &A[0][0];

    for (int i = 0; i < 9; i++) {
        printf("Number[%d] : %d\n", i+1, *(ptr_num+i));
    }

    return 0;
}