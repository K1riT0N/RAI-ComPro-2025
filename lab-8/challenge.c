#include <stdio.h>
#include <string.h>

float average_grade(float grades[], int n);
float max_grade(float grades[], int n);
float min_grade(float grades[], int n);
void pass_students_name(float grades[], char names[], int n);

struct Student {
    char name[50];
    float grade;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("\n");

    struct Student st[n];

    for (int i = 0; i < n; i++) {
        char name[50];
        float grade;
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter grade of %s: ", name);
        scanf("%f", &grade);

        strcpy(st[i].name, name);
        st[i].grade = grade;
        printf("\n");
    }

    float grades[n];
    for (int i = 0; i < n; i++) {
        grades[i] = st[i].grade;
    }

    char names[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; names[i] != '\0'; j++) {
            names[i] = st[i].name[j];
        }
    }

    float avg = average_grade(grades, n);
    float max = max_grade(grades, n);
    float min = min_grade(grades, n);

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", avg);
    printf("Highest grade: %.2f\n", max);
    printf("Lowest grade: %.2f\n", min);
    printf("Students who passed:\n");
    pass_students_name(grades, names, n);
    
    return 0;
}

float average_grade(float grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }
    return (float)sum / n;
}

float max_grade(float grades[], int n){
    float max = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }

    return max;
}

float min_grade(float grades[], int n){
    float min = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
    }

    return min;
}

void pass_students_name(float grades[], char names[], int n){
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) {
            printf("%c\n", names[i]);
        } else {
            continue;
        }
    }
}