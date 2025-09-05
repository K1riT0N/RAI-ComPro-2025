#include <stdio.h>

struct timeData {
    int minute;
    int second;
} t[3];

int main() {
    int totalSeconds = 0;
    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s) : ");
        scanf("%d:%d", &t[i].minute, &t[i].second);
    }
    for (int j = 0; j < 3; j++) {
        totalSeconds += t[j].minute * 60 + t[j].second;
    }
    printf("Total time elapsed : %i second(s)\n", totalSeconds);


    return 0;
}