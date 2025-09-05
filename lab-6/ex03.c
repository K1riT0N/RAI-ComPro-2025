#include <stdio.h>
#include <math.h>

struct coord {
    float x;
    float y;
} c[2];

int main() {
    for (int i = 0; i < 2; i++) {
        printf("x%i : ", i+1);
        scanf("%f", &c[i].x);
        printf("y%i : ", i+1);
        scanf("%f", &c[i].y);
    }
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
        c[0].x, c[0].y, c[1].x, c[1].y, 
        sqrt(pow(c[1].x - c[0].x, 2) + pow(c[1].y - c[0].y, 2))
    );


    return 0;
}