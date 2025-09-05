#include <stdio.h>

struct student {
    char name[50];
    int age;
    float score;
} st[3];

int main() {
    for (int i = 0; i < 3; i++) {
        printf("Student %i's name : ", i+1);
        scanf(" %[^\n]", st[i].name);
        printf("Student %i's age : ", i+1);
        scanf("%d", &st[i].age);
        printf("Student %i's score : ", i+1);
        scanf("%f", &st[i].score);
        printf("\n");
    }
    printf("\n");
    for (int j = 0; j < 3; j++) {
        printf("Student %i's name is \"%s\", age %i, score %.1f\n", j+1, st[j].name, st[j].age, st[j].score);
    }

    return 0;
}