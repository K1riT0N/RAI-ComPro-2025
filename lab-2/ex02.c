#include <stdio.h>

int main() {
    int mins;

    printf("Enter total minutes: ");
    scanf("%i", &mins);
    printf("%i minutes is %i hour(s) and %i minute(s)\n", mins, mins/60, mins-((mins/60)*60));
}