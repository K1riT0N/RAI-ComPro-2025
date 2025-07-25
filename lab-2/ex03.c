#include <stdio.h>

int main() {
    char name[20];
    int age;
    float height;
    int weight;
    char gender;
    char edu[20];

    printf("Enter yout Name: ");
    scanf("%s", name);
    printf("Enter yout Age: ");
    scanf("%i", &age);
    printf("Enter yout height: ");
    scanf("%f", &height);
    printf("Enter yout weight: ");
    scanf("%i", &weight);
    printf("Enter yout gender: ");
    scanf(" %c", &gender);
    printf("Enter yout Education Qualification: ");
    scanf(" %[^\n]", edu);

    printf("\nName: %s", name);
    printf("\nAge: %i", age);
    printf("\nGender: %c", gender);
    printf("\nHeight: %.1f", height);
    printf("\nWeight: %i", weight);
    printf("\nEducation: %s\n", edu);

    return 0;
}