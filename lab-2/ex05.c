#include <stdio.h>

int main() {
    char fname[20];
    char lname[20];
    int age;
    float h;
    char uni[20];

    printf("Enter your full name: ");
    scanf("%s%s", fname, lname);
    printf("Enter your age: ");
    scanf(" %i", &age);
    printf("Enter your height: ");
    scanf(" %f", &h);
    printf("Enter your University name: ");
    scanf(" %s", uni);
    
    printf("\nHi Everyone. This is %c.%s from %s. I am %i years old and my height is %.1f cm tall.\n"
        , lname[0], fname, uni, age, h);
    return 0;
}