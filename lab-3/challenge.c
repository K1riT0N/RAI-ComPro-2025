#include <stdio.h>

int main() {
    float Cal;
    float Phy;
    float Com;

    int gpa;
    float gpaf;
    char gcal;
    char gphy;
    char gcom;
    float numgcal;
    float numgphy;
    float numgcom;

    printf("Calculus score: ");
    scanf("%f", &Cal);
    printf("Physic score: ");
    scanf("%f", &Phy);
    printf("Compro score: ");
    scanf("%f", &Com);

    printf("\nSubject     Score     Grade     Grade\n");
    printf("--------------------------------------\n");

    // Calculate the Calculus grade
    if (Cal >= 80) {
        gcal = 'A';
        numgcal = 4;
    }
    else if (Cal >= 70) {
        gcal = 'B';
        numgcal = 3;
    }
    else if (Cal >= 60) {
        gcal = 'C';
        numgcal = 2;
    }
    else if (Cal >= 50) {
        gcal = 'D';
        numgcal = 1;
    }
    else {
        gcal = 'F';
        numgcal = 0;
    }

    printf("Cal %10.0f %8c %11.1f\n", Cal, gcal, numgcal);

    // Calculate the Physics grade
    if (Phy >= 80) {
        gphy = 'A';
        numgphy = 4;
    }
    else if (Phy >= 70) {
        gphy = 'B';
        numgphy = 3;
    }
    else if (Phy >= 60) {
        gphy = 'C';
        numgphy = 2;
    }
    else if (Phy >= 50) {
        gphy = 'D';
        numgphy = 1;
    }
    else {
        gphy = 'F';
        numgphy = 0;
    }

    printf("Physics %6.0f %8c %11.1f\n", Phy, gphy, numgphy);

    // Calculate the Compro grade
    if (Com >= 80) {
        gcom = 'A';
        numgcom = 4;
    }
    else if (Com >= 70) {
        gcom = 'B';
        numgcom = 3;
    }
    else if (Com >= 60) {
        gcom = 'C';
        numgcom = 2;
    }
    else if (Com >= 50) {
        gcom = 'D';
        numgcom = 1;
    }
    else {
        gcom = 'F';
        numgcom = 0;
    }

    printf("Compro %7.0f %8c %11.1f\n", Com, gcom, numgcom);

    // GPA calculation
    gpa = (numgcal + numgphy + numgcom) / 3;
    gpaf = gpa;
    printf("\nGPA: %.1f\n", gpaf);

    return 0;
}