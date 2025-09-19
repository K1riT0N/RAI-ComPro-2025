#include <stdio.h>
#include <math.h>

float circle_area(float r);
float circle_circumference(float r);

int main() {
    float radius, area, circum;
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);

    area = circle_area(radius);
    circum = circle_circumference(radius);

    printf("Circumference: %.2f\n", circum);
    printf("Area: %.2f\n", area);

    return 0;
}

float circle_area(float r) {
    return  3.14 * r * r;
}

float circle_circumference(float r) {
    return 2 * 3.14 * r;
}