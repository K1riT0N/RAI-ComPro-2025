#include <stdio.h>

struct student {
    char name[50];
    int age;
    float score;
} st[3];

int main() {
    int count = 0;

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
    for (int k = 0; k < 3; k++) {
        for (int j = 0; j < 3; j++) {
            if (st[k].score >= st[j].score) {
                count++;
            }
        }
        if (count > 2) {
            printf("The highest scores belongs to %s at %.1f scores!\n", st[k].name, st[k].score);
            break;
        } else {
            count = 0;
        }
    }
        

    return 0;
}