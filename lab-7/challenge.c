#include <stdio.h>

int main() {
    int size = 5;
    int num[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }
    
    int *ptr_fnum = num;
    int *ptr_snum = &num[1];
    int swap = 1, i = 0;
    while (swap != 0) {
        swap = 0;
        for (i = 0; i < size-1; i++) {
            if (*(ptr_fnum+i) > *(ptr_snum+i)) {
                int temp = *(ptr_fnum+i);
                *(ptr_fnum+i) = *(ptr_snum+i);
                *(ptr_snum+i) = temp;
                swap += 1;
                //printf("Swaped\n");
            }
        }
    }
    int *ptr_num = num;
    printf("Sorted : ");
    for (int j = 0; j < size; j++) {
        printf("%d ", *(ptr_num+j));
    }
    printf("\n");

    return 0;
}