#include <stdio.h>

int main() {
    char name[20];
    int id;
    float Pro, Phy, Cal;

    printf("Enter your Name: ");
    scanf("%c", name);
    printf("Enter your student ID: ");
    scanf("%i", &id);
    printf("Enter your Programming score: ");
    scanf("%f", &Pro);
    printf("Enter your Physics score: ");
    scanf("%f", &Phy);
    printf("Enter your Calculus score: ");
    scanf("%f", &Cal);
    printf("Hi %s(%i)! Your GPA is %.2f\n", name, id, (Pro+Phy+Cal)/3);

    return 0;
}