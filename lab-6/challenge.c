#include <stdio.h>

struct prfile{
    char name[20];
    int ID;
    float math;
    float Eng;
    float Sci;
    float Hist;
} st[3];

int main() {
    float avgscore[3], avgsub[4] = {0}, count;
    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %i :\n", i+1);
        scanf(" %s %d %f %f %f %f", 
            st[i].name, &st[i].ID, 
            &st[i].math, &st[i].Eng, 
            &st[i].Sci, &st[i].Hist
        );
    }
    printf("\nStudent Averages:\n");
    for (int j = 0; j < 3; j++) {
        avgscore[j] = (st[j].math + st[j].Eng + st[j].Sci + st[j].Hist) / 4;
        printf("%s (ID: %d) : %.2f\n", st[j].name, st[j].ID, avgscore[j]);
    }
    printf("\nTop Student : ");
    for (int k = 0; k < 3; k++) {
        for (int n = 0; n < 3; n++) {
            if (avgscore[k] >= avgscore[n]) {
                count++;
            }
        }
        if (count > 2) {
            printf("%s with %.2f\n", st[k].name, avgscore[k]);
            break;
        } else {
            count = 0;
        }
    }
    
    for (int l = 0; l < 4; l++) {
        for (int m = 0; m < 4; m++) {
            if (l == 0) {
                avgsub[l] += st[m].math;
            } else if (l == 1) {
                avgsub[l] += st[m].Eng;
            } else if (l == 2) {
                avgsub[l] += st[m].Sci;
            } else {
                avgsub[l] += st[m].Hist;
            }
        }
    }
    printf("\nSubject Averages:\n");
    printf("Math : %.2f\n", avgsub[0]/3);
    printf("English : %.2f\n", avgsub[1]/3);
    printf("Science : %.2f\n", avgsub[2]/3);
    printf("History : %.2f\n", avgsub[3]/3);
    printf("\nTop Subject : ");
    count = 0;
    for (int k = 0; k < 3; k++) {
        for (int n = 0; n < 3; n++) {
            if (avgsub[k] >= avgsub[n]) {
                count++;
            }
        }
        if (count > 2) {
            if (k == 0) {
                printf("Math with %.2f\n", avgsub[k]/3);
            } else if (k == 1) {
                printf("English with %.2f\n", avgsub[k]/3);
            } else if (k == 2) {
                printf("Science with %.2f\n", avgsub[k]/3);
            } else {
                printf("History with %.2f\n", avgsub[k]/3);
            }
            break;
        } else {
            count = 0;
        }
    }

    return 0;
}