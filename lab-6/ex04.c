#include <stdio.h>

struct vector {
    float x;
    float y;
} v[2];

int main() {
    char sym;
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            sym = 'u';
        } else {
            sym = 'v';
        }
        printf("%c_x : ", sym);
        scanf("%f", &v[i].x);
        printf("%c_y : ", sym);
        scanf("%f", &v[i].y);
    }
    printf("Resultant vector is equivalence to %.1fi %.1fj)\n",
        v[0].x + v[1].x, v[0].y + v[1].y
    );


    return 0;
}