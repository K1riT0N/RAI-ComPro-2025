#include <stdio.h>

int main() {

    float h;
    float r;
    float v;

    printf("Enter cone height: ");
    scanf("%f", &h);
    printf("Enter cone base radius: ");
    scanf("%f", &r);
    
    v = ((3.141)*(r*r)*h) / 3;

    printf("Cone volume = %.1f\n\n", v);

    if (v > 260) {
        printf("This cone is perfect for Supun project\n");
    }
    else {
        printf("This cone is not fit for this project\n");
    }

    return 0;
}